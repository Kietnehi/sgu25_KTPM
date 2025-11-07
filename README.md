
# 🧪 sgu25_KTPM — Repository Kiểm Thử Phần Mềm

<p align="center" style="display: flex; justify-content: center; gap: 20px; align-items: center;">
  <img src="KTPM.png" alt="Kiểm thử phần mềm" height="200" style="object-fit: contain; border-radius: 10px; box-shadow: 0 0 8px rgba(0,0,0,0.15);">
  <img src="sgu.png" alt="Trường Đại học Sài Gòn" height="200" style="object-fit: contain; border-radius: 10px; box-shadow: 0 0 8px rgba(0,0,0,0.15);">
</p>



<p align="center">
  <a href="https://img.shields.io/badge/status-active-brightgreen">
    <img src="https://img.shields.io/badge/status-active-brightgreen" alt="Status: active">
  </a>
  <a href="https://img.shields.io/badge/semester-2025-blue">
    <img src="https://img.shields.io/badge/semester-2025-blue" alt="Semester 2025">
  </a>
  <a href="https://img.shields.io/badge/license-MIT-informational">
    <img src="https://img.shields.io/badge/license-MIT-informational" alt="License: MIT">
  </a>
</p>

---

## 👨‍🎓 Thông tin
- **Tác giả:** Trương Phú Kiệt  
- **MSSV:** 3122411109  
- **Trường:** Trường Đại học Sài Gòn (SGU)  
- **Môn học:** Kiểm thử phần mềm (Software Testing)  
- **Giảng viên hướng dẫn:** TS. Đỗ Như Tài  
- **Năm học:** 2025

---

## 🧩 Giới thiệu
Repository phục vụ môn **Kiểm thử phần mềm**, lưu trữ:
- Bài tập, lab và ví dụ minh họa về kiểm thử.
- Mã nguồn test (unit, integration, E2E) và báo cáo kết quả.
- Tài liệu, quy ước và checklist test.

---

## 📚 Mục lục

- [Tổng quan](#-tổng-quan)
- [Cấu trúc thư mục](#-cấu-trúc-thư-mục)
- [Nội dung chi tiết](#-nội-dung-chi-tiết)
  - [Đề tài chính](#1-đề-tài-chính-detai)
  - [Bài tập Lab](#2-bài-tập-lab)
  - [Bài tập lý thuyết](#3-bài-tập-lý-thuyết)
- [Môi trường phát triển](#️-môi-trường-phát-triển)
- [Hướng dẫn sử dụng](#-hướng-dẫn-sử-dụng)
- [Chiến lược kiểm thử](#-chiến-lược-kiểm-thử)
- [Checklist nộp bài](#-checklist-nộp-bài)
- [Liên hệ](#-liên-hệ)

---

## 🎯 Tổng quan

Repository `sgu25_KTPM` là kho lưu trữ toàn diện các tài liệu, bài tập và đề tài cho môn **Kiểm thử phần mềm**. Nội dung bao gồm:

- ✅ **Đề tài chính**: Phân tích, thiết kế và lập kế hoạch kiểm thử cho một hệ thống phần mềm hoàn chỉnh
- ✅ **Bài tập Lab**: Thực hành kiểm thử với các kỹ thuật kiểm thử hộp trắng (White-box Testing)
- ✅ **Tài liệu kiểm thử**: Test Plan, Test Cases, và các báo cáo kiểm thử
- ✅ **Mã nguồn C++**: Các chương trình mẫu để thực hành kiểm thử
- ✅ **Sơ đồ thiết kế**: Business Process, Use Case, ERD, UI Mockups (Draw.io)

---

## 📁 Cấu trúc thư mục

```
sgu25_KTPM/
│
├── README.md                          # File hướng dẫn tổng quan (file này)
├── KTPM.png                          # Logo môn học
├── test_readme.ipynb                 # Notebook test README
├── Sơ lược về 4 giai đoạn rã code.docx
│
├── DeTai/                            # 📂 Đề tài chính
│   ├── DeTai_GiaiDoan1/             # Giai đoạn 1: Phân tích & Thiết kế
│   │   ├── DeTai_GiaiDoan1_TruongPhuKiet_3122411109.docx
│   │   ├── Business_Process_FOG.drawio        # Sơ đồ quy trình nghiệp vụ
│   │   ├── conceptual_model_final.drawio      # Mô hình khái niệm/ERD
│   │   ├── ScreenDesign.drawio                # Thiết kế giao diện
│   │   ├── ScreenDesign.xlsx                  # Mô tả chi tiết màn hình
│   │   ├── Test_Plan_Template.dotx            # Mẫu Test Plan
│   │   ├── UseCase.xlsx                       # Danh sách Use Cases
│   │   ├── Phan_Tich_Quy_Trinh_Nghiep_Vu.docx
│   │   ├── CNPM - Bai Tap 1 - Phan Tich Qui Trinh Phan mem.pdf
│   │   ├── KTPM - Đánh giá đề tài - Sáng 5 - 20251009.pdf
│   │   └── trình bày word.txt                 # Ghi chú trình bày
│   │
│   ├── DeTai01/                     # Đề tài phụ 1: Phân tích
│   │   ├── DeTai01-Phan tich-TruongPhuKiet-3122411109.docx
│   │   ├── DeTai01-Phan tich-TruongPhuKiet-3122411109.drawio
│   │   └── DeTai01-Phan tich-TruongPhuKiet-3122411109.pptx
│   │
│   └── DeTai02/                     # Đề tài phụ 2: Thiết kế kiến trúc
│       └── DeTai_Buoc02_ThietKeKienTruc_TruongPhuKiet-3122411109.docx
│
├── lab1/                             # 🧪 Lab 1: Kiểm thử hộp trắng (White-box)
│   ├── baia.cpp                     # Bài A: Kiểm thử hàm f1() với boundary values
│   ├── baib.cpp                     # Bài B: Kiểm thử hàm f2() với arguments
│   ├── baic.cpp                     # Bài C: Kiểm thử dead code
│   ├── baid.cpp                     # Bài D: Kiểm thử hàm toán học phức tạp
│   ├── baie.cpp                     # Bài E: Kiểm thử hàm findMax() (có bug)
│   ├── bai2_2.cpp, bai2_3.cpp      # Các bài tập phụ
│   ├── *.ipynb                      # Jupyter Notebooks minh họa
│   ├── *.exe                        # File thực thi (build artifacts)
│   ├── Lab1_VV_TestCases.docx      # Test Cases cho Lab 1
│   ├── BaiTap1 - VV - TestCases.pdf
│   └── TracNghiem1_TRƯƠNG PHÚ KIỆT_3122411109.docx
│
├── Lab2/                             # 📐 Lab 2: Phân tích & Thiết kế hệ thống
│   ├── Lab2_PTTKHT_TruongPhuKiet_3122411109.docx
│   └── Lab2_PTTKHT_TruongPhuKiet_3122411109.drawio
│
├── Lab3/                             # 📊 Lab 3: Use Case & Workflow
│   ├── BT3_PTTKHT_TruongPhuKiet_3122411109.docx
│   └── BT3_PTTKHT_TruongPhuKiet_3122411109.drawio
│
├── Lab4/                             # 📝 Lab 4: Test Plan Templates
│   ├── ABC Project Test Plan_0.2-template.doc
│   ├── ABC Project Test Plan_0.2-template.docx
│   └── INTERNATIONAL-KIDS.COM DEVELOPMENT PROJECT_Test plan.doc
│
├── Lab5/                             # 🔍 Lab 5: Kiểm thử hộp đen & miền tương đương
│   ├── BT05_KiemThuMienTuongDuong_HoTen_MaSV.doc
│   ├── Class_exercise_LT.pdf
│   └── KTPM - Chuong 4 - Kiem thu hop den.pdf
│
├── BT06_KiemThuHopDen2_TruongPhuKie_3122411109/  # 📋 Bài tập 6: Kiểm thử hộp đen nâng cao
│   ├── BT06_01_KiemThuBangQuyetDinh-3.docx      # Decision Table Testing
│   ├── BT06_02_KiemThuTrangThai_Pairwise.docx   # State Transition & Pairwise
│   └── BT06_LyThuyet.docx                       # Lý thuyết
│
├── BT7_KiemThuQuiTrinh_TruongPhuKiet_3122411109.xlsx  # 📊 Bài tập 7: Kiểm thử quy trình
│
└── scripts/                          # 🔧 Scripts tự động hóa
    └── run_lab1_tests.sh            # Script biên dịch & chạy test tự động
```

---

## 📖 Nội dung chi tiết

### 1. Đề tài chính (DeTai/)

#### 🎯 Mục tiêu
Phát triển một hệ thống phần mềm hoàn chỉnh từ phân tích đến kiểm thử, bao gồm:

#### 📂 DeTai_GiaiDoan1/ - Giai đoạn 1

**Phân tích yêu cầu & Thiết kế hệ thống:**

1. **Business Process** (`Business_Process_FOG.drawio`)
   - Sơ đồ quy trình nghiệp vụ (Business Workflow)
   - Mô tả các hoạt động và actors trong hệ thống
   - Export sang PNG/SVG để đưa vào báo cáo

2. **Conceptual Model** (`conceptual_model_final.drawio`)
   - Mô hình khái niệm dữ liệu
   - ERD (Entity-Relationship Diagram)
   - Data Dictionary và business rules

3. **UI Design** (`ScreenDesign.drawio` + `ScreenDesign.xlsx`)
   - Mockup giao diện người dùng
   - Danh sách các màn hình và chức năng
   - Workflow điều hướng giữa các màn

4. **Use Cases** (`UseCase.xlsx`)
   - Danh sách các use case
   - Actors và mô tả chức năng
   - Traceability matrix

5. **Test Plan** (`Test_Plan_Template.dotx`)
   - Mẫu kế hoạch kiểm thử chuẩn IEEE 829
   - Các phần: Scope, Objectives, Resources, Schedule
   - Test Strategy và Entry/Exit Criteria

**Tài liệu hỗ trợ:**
- `DeTai_GiaiDoan1_TruongPhuKiet_3122411109.docx`: Báo cáo tổng hợp đầy đủ
- `Phan_Tich_Quy_Trinh_Nghiep_Vu.docx`: Chi tiết phân tích quy trình
- `trình bày word.txt`: Đề cương trình bày (Chương 1, 2, 3)

#### 📂 DeTai01/ - Phân tích hệ thống
- Tài liệu phân tích chi tiết (Word, PowerPoint, Draw.io)
- Business requirements và system analysis

#### 📂 DeTai02/ - Thiết kế kiến trúc
- Thiết kế kiến trúc hệ thống
- Component diagram và deployment diagram

---

### 2. Bài tập Lab

#### 🧪 Lab 1: Kiểm thử hộp trắng (White-box Testing)

**Mục tiêu:** Thực hành các kỹ thuật kiểm thử hộp trắng, bao phủ Statement, Branch, Path Coverage

**Các bài tập:**

| File | Mô tả | Kỹ thuật kiểm thử |
|------|-------|------------------|
| `baia.cpp` | Hàm f1(x): if-else đơn giản | Boundary Value Analysis |
| `baib.cpp` | Hàm f2(x): nested if-else | Branch Coverage |
| `baic.cpp` | Hàm f2(x): có dead code | Dead Code Detection |
| `baid.cpp` | Hàm f3(x): toán học phức tạp (log, cos) | Complex Condition Testing |
| `baie.cpp` | Hàm findMax(): tìm max 3 số (có bug) | Equivalence Partitioning |

**Chi tiết từng bài:**

1. **baia.cpp** - Kiểm thử boundary values
   ```cpp
   int f1(int x) {
       if (x > 10) return 2 * x;
       else return -x;
   }
   ```
   - Test cases: x = 9, 10, 11 (boundary values)
   - Kiểm tra điều kiện x > 10

2. **baib.cpp** - Kiểm thử với command-line arguments
   ```cpp
   int f2(int x) {
       if (x > 10) return 2 * x;
       else if (x > 0) return -x;
       else return 2 * x;
   }
   ```
   - Nhận input từ argv[1]
   - Test: x > 10, 0 < x ≤ 10, x ≤ 0

3. **baic.cpp** - Phát hiện dead code
   ```cpp
   int f2(int x) {
       if (x < 10) return 2 * x;
       else if (x < 2) return -x;  // Dead code!
       else return 2 * x;
   }
   ```
   - Điều kiện `x < 2` không bao giờ đạt được

4. **baid.cpp** - Kiểm thử hàm toán học
   ```cpp
   int f3(int x) {
       if (log(x*x*cos(x)) < 3*x) return 2*x;
       else return 2*x;
   }
   ```
   - Test edge cases: x = 0, x = 3
   - Xử lý NaN, -inf trong log()

5. **baie.cpp** - Tìm lỗi trong hàm findMax()
   ```cpp
   int findMax(int num1, int num2, int num3) {
       int max = 0;  // Bug: khởi tạo = 0!
       if ((num1 > num2) && (num1 > num3)) max = num1;
       if ((num2 > num1) && (num2 > num3)) max = num2;
       if ((num3 > num1) && (num3 > num2)) max = num3;
       return max;
   }
   ```
   - Bug 1: max khởi tạo = 0 (sai khi tất cả số âm)
   - Bug 2: Không xử lý trường hợp hai số bằng nhau
   - Test cases: (-5,-2,-9), (5,5,3), (4,4,4)

**Tài liệu:**
- `Lab1_VV_TestCases.docx`: Test cases chi tiết
- `*.ipynb`: Notebooks minh họa kết quả

---

#### 📐 Lab 2: Phân tích & Thiết kế hệ thống

- Phân tích yêu cầu phần mềm
- Thiết kế kiến trúc và workflow
- Sơ đồ Draw.io minh họa

---

#### 📊 Lab 3: Use Case & Activity Diagram

- Vẽ Use Case Diagram
- Activity Diagram
- Sequence Diagram
- File `.drawio` và `.docx` báo cáo

---

#### 📝 Lab 4: Test Plan Templates

- Các mẫu Test Plan chuẩn công nghiệp
- Template từ dự án thực tế
- Hướng dẫn viết Test Plan theo IEEE 829

---

#### 🔍 Lab 5: Kiểm thử hộp đen (Black-box Testing)

**Nội dung:**
- Equivalence Partitioning (Phân vùng tương đương)
- Boundary Value Analysis (Phân tích giá trị biên)
- Tài liệu lý thuyết: `KTPM - Chuong 4 - Kiem thu hop den.pdf`

---

### 3. Bài tập lý thuyết

#### 📋 BT06: Kiểm thử hộp đen nâng cao

1. **Decision Table Testing** (`BT06_01_KiemThuBangQuyetDinh-3.docx`)
   - Bảng quyết định
   - Test cases từ decision table

2. **State Transition & Pairwise** (`BT06_02_KiemThuTrangThai_Pairwise.docx`)
   - Kiểm thử chuyển trạng thái
   - Pairwise testing (All-pairs)

3. **Lý thuyết** (`BT06_LyThuyet.docx`)
   - Các khái niệm nâng cao

#### 📊 BT07: Kiểm thử quy trình

- File Excel: `BT7_KiemThuQuiTrinh_TruongPhuKiet_3122411109.xlsx`
- Kiểm thử workflow/process testing

---

## 🛠️ Môi trường phát triển

### Yêu cầu hệ thống

- **OS:** Windows 10/11 (hoặc WSL/Linux)
- **Compiler:** g++ (MinGW-w64 hoặc GCC)
  - Đường dẫn hiện tại: `C:\Program Files (x86)\Dev-Cpp\MinGW64\bin\g++.exe`
- **IDE:** Visual Studio Code
  - Extension: C/C++, Draw.io Integration
- **Python:** 3.8+ (cho Jupyter Notebooks)
  - `pip install jupyter`

### Công cụ hỗ trợ

| Công cụ | Mục đích |
|---------|----------|
| Draw.io | Vẽ sơ đồ (Business Process, ERD, UI Mockup) |
| Microsoft Word | Soạn báo cáo, Test Plan |
| Microsoft Excel | Use Case, Test Cases, Data Tables |
| Git Bash / WSL | Chạy scripts tự động |
| GitHub | Version control |

---

## 🚀 Hướng dẫn sử dụng

### 1. Biên dịch C++ (thủ công)

```bash
# Di chuyển vào thư mục lab1
cd lab1

# Biên dịch một file
g++ -std=c++17 -O2 -g -o baia.exe baia.cpp

# Chạy chương trình
./baia.exe

# Biên dịch với arguments (cho baib.cpp)
g++ -std=c++17 -O2 -o baib.exe baib.cpp
./baib.exe 15
```

### 2. Sử dụng VS Code Task

1. Mở file C++ trong VS Code
2. Nhấn `Ctrl+Shift+B` hoặc `Terminal > Run Build Task`
3. Chọn task: `C/C++: g++.exe build active file`
4. File `.exe` sẽ được tạo trong cùng thư mục

### 3. Script tự động (run_lab1_tests.sh)

**Chức năng:**
- Tự động biên dịch tất cả file `.cpp` trong `lab1/`
- Chạy từng chương trình và lưu log
- Lưu lỗi biên dịch vào `logs/<file>.build.err`
- Lưu output vào `logs/<file>.log`

**Cách dùng:**

```bash
# Cấp quyền thực thi (lần đầu)
chmod +x scripts/run_lab1_tests.sh

# Chạy script
./scripts/run_lab1_tests.sh

# Xem kết quả
ls logs/
cat logs/baia.log
```

### 4. Mở Jupyter Notebook

```bash
# Cài đặt Jupyter (nếu chưa có)
pip install jupyter

# Khởi động Jupyter
jupyter notebook

# Hoặc dùng VS Code với Jupyter extension
```

### 5. Chỉnh sửa file Draw.io

**Trong VS Code:**
1. Cài extension: Draw.io Integration
2. Click đúp vào file `.drawio`
3. Chỉnh sửa và lưu

**Export sang ảnh:**
1. Mở file `.drawio` trong VS Code/web
2. File > Export as > PNG/SVG
3. Chèn vào Word/báo cáo

---

## 🎯 Chiến lược kiểm thử

### 1. Mục tiêu kiểm thử

- ✅ **Functional Testing**: Xác minh chức năng hoạt động đúng
- ✅ **White-box Testing**: Bao phủ code (statement, branch, path)
- ✅ **Black-box Testing**: Kiểm thử dựa trên yêu cầu
- ✅ **Boundary Testing**: Kiểm thử giá trị biên
- ✅ **Negative Testing**: Kiểm thử trường hợp bất thường

### 2. Phân loại kiểm thử

| Loại | Mô tả | Áp dụng |
|------|-------|---------|
| **Unit Testing** | Kiểm thử từng hàm/module | Lab 1: các hàm f1(), f2(), findMax() |
| **Integration Testing** | Kiểm thử tích hợp các module | Đề tài chính |
| **System Testing** | Kiểm thử toàn hệ thống | Đề tài chính |
| **Regression Testing** | Kiểm thử hồi quy sau sửa lỗi | Sau khi fix bug trong baie.cpp |

### 3. Test Plan Structure (theo IEEE 829)

```
1. Test Plan Identifier
2. Introduction
3. Test Items (Features to be tested)
4. Features NOT to be tested
5. Approach (Test Strategy)
6. Item Pass/Fail Criteria
7. Suspension & Resumption Criteria
8. Test Deliverables
9. Test Environment
10. Responsibilities
11. Staffing & Training
12. Schedule
13. Risks & Contingencies
14. Approvals
```

### 4. Mẫu Test Case

```
TC-ID: TC-L1-001
Title: Kiểm tra f1() với x > 10
Module: baia.cpp
Priority: High
Pre-conditions: Chương trình biên dịch thành công
Test Data: x = 11
Steps:
  1. Biên dịch: g++ -o baia.exe baia.cpp
  2. Chạy: ./baia.exe
  3. Nhập input: 11
Expected Result: f1(11) = 22
Actual Result: [Điền sau khi test]
Status: PASS/FAIL
```

### 5. Coverage Metrics

- **Statement Coverage**: 100% (mọi dòng lệnh được thực thi)
- **Branch Coverage**: 100% (mọi nhánh if/else được test)
- **Path Coverage**: Tất cả đường đi độc lập
- **Condition Coverage**: Tất cả điều kiện logic (AND, OR)

### 6. Bug Report Template

```
Bug ID: BUG-001
Title: findMax() trả về 0 khi tất cả số âm
Severity: High
Priority: High
Module: baie.cpp, function findMax()
Steps to Reproduce:
  1. Gọi findMax(-5, -2, -9)
  2. Quan sát kết quả
Expected: -2
Actual: 0
Root Cause: Biến max khởi tạo = 0 thay vì num1
Fix: int max = num1;
Status: OPEN/FIXED/CLOSED
```

---

## ✅ Checklist nộp bài

### 📋 Đề tài chính

- [ ] Hoàn thiện `DeTai_GiaiDoan1_TruongPhuKiet_3122411109.docx`
- [ ] Export tất cả sơ đồ `.drawio` sang PNG/SVG
- [ ] Hoàn thiện Test Plan từ `Test_Plan_Template.dotx`
- [ ] Tạo bộ Test Cases đầy đủ (Excel/Word)
- [ ] Chạy và lưu screenshots kết quả test
- [ ] Viết báo cáo tổng hợp (PDF)

### 🧪 Lab 1

- [ ] Biên dịch thành công tất cả file `.cpp`
- [ ] Chạy script `run_lab1_tests.sh` và kiểm tra logs
- [ ] Điền kết quả vào `Lab1_VV_TestCases.docx`
- [ ] Xác định và báo cáo lỗi trong `baie.cpp`
- [ ] Đề xuất fix và test lại
- [ ] Nộp mã nguồn + báo cáo

### 📐 Lab 2, 3, 4, 5

- [ ] Hoàn thiện file `.docx` báo cáo
- [ ] Export sơ đồ `.drawio` sang ảnh
- [ ] Nộp file theo đúng format: `LabX_PTTKHT_TruongPhuKiet_3122411109`

### 📋 Bài tập 6, 7

- [ ] Hoàn thiện BT06: Decision Table, State Transition, Pairwise
- [ ] Hoàn thiện BT07: Process Testing (Excel)
- [ ] Kiểm tra format file trước khi nộp

### 🔧 Kỹ thuật

- [ ] Xóa file nhị phân (*.exe) trước khi commit (tùy chọn)
- [ ] Kiểm tra code không có lỗi biên dịch
- [ ] Đảm bảo tất cả đường dẫn đúng trên Windows
- [ ] Test script `run_lab1_tests.sh` trên Git Bash

---

## 📊 Thống kê Repository

| Loại file | Số lượng | Mục đích |
|-----------|----------|----------|
| `.cpp` | 8 | Mã nguồn C++ |
| `.docx` | 15+ | Báo cáo, tài liệu |
| `.drawio` | 6+ | Sơ đồ thiết kế |
| `.xlsx` | 3+ | Bảng Use Case, Test Cases |
| `.ipynb` | 6+ | Jupyter Notebooks |
| `.pdf` | 4+ | Tài liệu tham khảo |
| `.sh` | 1 | Script tự động |

---

## 🔧 Hướng dẫn nâng cao

### 1. Tích hợp GitHub Actions (CI/CD)

Tạo file `.github/workflows/ci.yml`:

```yaml
name: C++ CI

on: [push, pull_request]

jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v2
      - name: Install g++
        run: sudo apt-get install -y g++
      - name: Build all cpp files
        run: |
          cd lab1
          for file in *.cpp; do
            g++ -std=c++17 -O2 -o "${file%.cpp}" "$file"
          done
      - name: Run tests
        run: chmod +x scripts/run_lab1_tests.sh && ./scripts/run_lab1_tests.sh
```

### 2. Unit Testing với Google Test

```bash
# Cài đặt Google Test
git clone https://github.com/google/googletest.git
cd googletest && mkdir build && cd build
cmake .. && make && sudo make install

# Tạo test file
# test_baia.cpp:
#include <gtest/gtest.h>
extern int f1(int x);

TEST(F1Test, BoundaryTest) {
    EXPECT_EQ(f1(9), -9);
    EXPECT_EQ(f1(10), -10);
    EXPECT_EQ(f1(11), 22);
}

# Biên dịch và chạy
g++ -std=c++17 test_baia.cpp baia.cpp -lgtest -lgtest_main -pthread -o test
./test
```

### 3. Static Analysis với cppcheck

```bash
# Cài đặt cppcheck
sudo apt-get install cppcheck  # Linux
# hoặc download từ cppcheck.net

# Phân tích code
cppcheck --enable=all --inconclusive lab1/*.cpp
```

---

## 📚 Tài liệu tham khảo

### Sách & Tài liệu

1. **Software Testing** - Ron Patton
2. **The Art of Software Testing** - Glenford J. Myers
3. **IEEE 829-2008** - Standard for Software Test Documentation
4. Slides bài giảng: `KTPM - Chuong 4 - Kiem thu hop den.pdf`

### Links hữu ích

- [Draw.io](https://app.diagrams.net/)
- [Google Test Documentation](https://google.github.io/googletest/)
- [C++ Reference](https://en.cppreference.com/)
- [MinGW-w64](https://www.mingw-w64.org/)

---

## 🤝 Đóng góp & Cải tiến

### Các cải tiến đã thực hiện

- ✅ Tạo script tự động `run_lab1_tests.sh`
- ✅ Chuẩn hóa cấu trúc thư mục
- ✅ Viết README chi tiết
- ✅ Thêm VS Code tasks cho biên dịch C++

### Các cải tiến dự kiến

- [ ] Thêm GitHub Actions workflow
- [ ] Tích hợp Google Test
- [ ] Tạo coverage report tự động
- [ ] Thêm test cases tự động cho tất cả labs

---

## 📞 Liên hệ

**Tác giả:** Trương Phú Kiệt  
**MSSV:** 3122411109  
**Email:** [truongphukiet@sgu.edu.vn]  
**GitHub:** [Kietnehi/sgu25_KTPM](https://github.com/Kietnehi/sgu25_KTPM)

---

## 📄 License

Repository này được sử dụng cho mục đích học tập tại Trường Đại học Sài Gòn.  
© 2025 Trương Phú Kiệt - All Rights Reserved

---




