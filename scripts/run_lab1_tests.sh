#!/usr/bin/env bash

# Script: run_lab1_tests.sh
# Mục đích: tìm tất cả file .cpp trong thư mục lab1/, biên dịch từng file và chạy
# đầu ra được lưu vào logs/<file>.log. Dùng trên Windows bash/WSL hoặc Git Bash.

set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
LAB_DIR="$ROOT_DIR/lab1"
LOG_DIR="$ROOT_DIR/logs"

mkdir -p "$LOG_DIR"

shopt -s nullglob
CPP_FILES=("$LAB_DIR"/*.cpp)

if [ ${#CPP_FILES[@]} -eq 0 ]; then
  echo "Không tìm thấy file .cpp trong $LAB_DIR"
  exit 0
fi

for src in "${CPP_FILES[@]}"; do
  base=$(basename "$src" .cpp)
  exe="$LAB_DIR/${base}.exe"
  log_file="$LOG_DIR/${base}.log"

  echo "Biên dịch $src -> $exe"
  g++ -std=c++17 -O2 -o "$exe" "$src" 2>"$LOG_DIR/${base}.build.err" || {
    echo "Lỗi biên dịch $src. Xem $LOG_DIR/${base}.build.err"
    continue
  }

  echo "Chạy $exe, lưu log -> $log_file"
  timeout 5s "$exe" >"$log_file" 2>&1 || echo "Chương trình $exe trả về mã lỗi hoặc timeout" >>"$log_file"

  echo "Kết thúc $base"
done

echo "Hoàn tất. Logs được lưu tại: $LOG_DIR"
