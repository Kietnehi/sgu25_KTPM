
# sgu25_KTPM

<p align="center">
  <img src="KTPM.png" alt="Kiểm thử phần mềm" width="600">
</p>

**Tác giả:** Trương Phú Kiệt (MSSV: 3122411109)

**Trường:** Trường Đại học Sài Gòn

**Môn học:** Kiểm thử phần mềm

**Giảng viên hướng dẫn:** TS. Đỗ Như Tài



## Mục lục

- [Tổng quan](#tổng-quan)
- [Cấu trúc thư mục](#cấu-trúc-thư-mục)
- [Nội dung chi tiết](#nội-dung-chi-tiết)
- [Hướng dẫn chạy & biên dịch](#hướng-dẫn-chạy--biên-dịch)
- [Chiến lược kiểm thử đề xuất](#chiến-lược-kiểm-thử-đề-xuất)
- [Checklist nộp báo cáo & mã](#checklist-nộp-báo-cáo--mã)
- [Gợi ý mở rộng](#gợi-ý-mở-rộng)
- [Liên hệ](#liên-hệ)

## Tổng quan

Kho lưu trữ `sgu25_KTPM` chứa toàn bộ tài liệu, thiết kế, kế hoạch kiểm thử và mã nguồn cho môn Kiểm thử phần mềm do Trương Phú Kiệt thực hiện. Mục tiêu của repository là tập trung các artefact phục vụ:

- Lập kế hoạch kiểm thử (Test Plan) và tài liệu liên quan.
- Thiết kế hệ thống (biểu đồ draw.io, mô hình khái niệm).
- Thực hiện các bài lab, mã mẫu (C++), và notebook minh họa.

## Cấu trúc thư mục

Root/ (gốc repo)

- `README.md` — (file này) hướng dẫn chi tiết toàn repo.
- `DeTai/` — chứa đề tài chính và các artefact cho giai đoạn 1.
  - `DeTai_GiaiDoan1/` — tài liệu giai đoạn 1:
			- `Business_Process_FOG.drawio` — sơ đồ quy trình nghiệp vụ.
			- `conceptual_model_final.drawio` — mô hình khái niệm / ERD / mô hình dữ liệu.
			- `ScreenDesign.drawio` — thiết kế màn hình (UI mockups).
			- `Test_Plan_Template.dotx` — mẫu Test Plan (Word template).
			- `trình bày word.txt` — ghi chú/đề cương trình bày nội dung báo cáo.
- `DeTai01/`, `DeTai02/` — các tài liệu đề tài phụ (drawio, ghi chú).
- `lab1/` — chứa mã nguồn và notebook cho Lab 1.
  - `baia.cpp`, `baib.cpp`, `baic.cpp`, `baid.cpp`, `baie.cpp` — các bài tập C++.
  - `bai2_2.cpp`, `bai2_3.cpp` — các bài nhỏ hơn trong lab 1.
  - `tempCodeRunnerFile.cpp` — file tạm do trình biên tập tự tạo.
  - `baia.ipynb`, `baib.ipynb`, `baic.ipynb`, `baid.ipynb`, `baie.ipynb` — Jupyter notebooks liên quan (ví dụ minh họa, test case, output mẫu).
- `Lab2/`, `Lab3/`, `Lab4/`, `Lab5/` — chứa các bài tập/lab tương ứng; file drawio minh họa cho Lab2 và Lab3.

## Nội dung chi tiết

### 1) Tài liệu đề tài (`DeTai/`)

- **Mục tiêu:** Tập hợp các tài liệu thiết kế, bản mẫu test plan, và ghi chú trình bày để sử dụng trong báo cáo môn học.
- **Gợi ý sử dụng:**
  - Mở các file `.drawio` bằng extension Draw.io trong VS Code hoặc bằng trang diagrams.net để chỉnh sửa/ xuất ảnh.
  - Mở `Test_Plan_Template.dotx` bằng Microsoft Word để sửa và lưu thành `.docx` hoặc `.pdf` khi nộp.

### 2) Mã nguồn và notebook (`lab1/`)

- Các file `.cpp` là mã nguồn C++ cho các bài lab. Chúng minh họa các khái niệm, input/output, và có thể dùng làm đối tượng kiểm thử (unit test, boundary test, stress test).
- Các file `.ipynb` chứa hướng dẫn, ví dụ chạy, hoặc ghi chép nghiệm thu kết quả.

## Hướng dẫn chạy & biên dịch

### Môi trường đề xuất

- Hệ điều hành: Windows (cũng có thể dùng WSL trên Windows).
- Compiler: g++ (MinGW-w64 hoặc tương đương). Có task có sẵn trong workspace sử dụng đường dẫn Dev-Cpp/MinGW64.
- Python + Jupyter để mở các file notebook (`pip install jupyter`).

### Biên dịch C++ (ví dụ: `baia.cpp`)

Mở terminal (bash). Ví dụ biên dịch và chạy:

```bash
g++ -std=c++17 -O2 -o lab1/baia.exe lab1/baia.cpp
./lab1/baia.exe
```

Hoặc sử dụng task trong VS Code: `C/C++: g++.exe build active file` (task đã cấu hình sử dụng `C:\Program Files (x86)\Dev-Cpp\MinGW64\bin\g++.exe`).

### Mở Jupyter Notebook

```bash
pip install jupyter  # nếu chưa cài
jupyter notebook
```

## Chiến lược kiểm thử đề xuất

Phần này đưa ra một chiến lược kiểm thử chi tiết bạn có thể áp dụng cho đề tài:

1. Mục tiêu kiểm thử
	- Xác minh chức năng chính hoạt động theo yêu cầu (functional testing).
	- Kiểm thử biên (boundary values), trường hợp bất thường (negative tests), và kiểm thử hiệu năng cơ bản (stress / large input).

2. Phân loại kiểm thử
	- Kiểm thử chức năng: kiểm tra các hàm tính toán, luồng dữ liệu và tương tác.
	- Kiểm thử giao diện: kiểm tra mockup UI trong `ScreenDesign.drawio`.
	- Kiểm thử hệ thống: tích hợp các module (nếu có nhiều file) để đảm bảo luồng xử lý.
	- Kiểm thử hồi quy: soạn test cases và lưu kết quả để chạy lại khi sửa code.

3. Test Plan (dùng `Test_Plan_Template.dotx`)
	- Sử dụng template để điền các phần: scope, mục tiêu, môi trường test, tài nguyên, schedule, test cases, tiêu chí pass/fail.

4. Viết Test Cases (mẫu)
		- Mỗi test case gồm: ID, tiêu đề, điều kiện tiền đề, input, bước thực hiện, kết quả mong đợi, kết quả thực tế, trạng thái (Pass/Fail).
		- Ví dụ cho `baia.cpp`:
			- TC01: Input hợp lệ -> Kết quả đúng.
			- TC02: Input rỗng / không hợp lệ -> Hệ thống xử lý lỗi (không crash).
			- TC03: Dữ liệu lớn -> Kiểm tra thời gian/ghi nhận tài nguyên.

5. Công cụ đề xuất
		- Unit testing: Google Test (gtest) cho C++ nếu muốn tự động hóa test.
		- CI: GitHub Actions để tự động biên dịch và chạy test khi push.
		- Static analysis: clang-tidy, cppcheck.

6. Báo cáo lỗi (bug report)
		- Mẫu báo cáo nên có: Tên bug, mô tả, các bước tái tạo, phiên bản/commit liên quan, môi trường, severity, ảnh chụp màn hình (nếu có).

## Checklist nộp báo cáo & mã

- [ ] Hoàn thiện `Test_Plan` trong `DeTai/DeTai_GiaiDoan1/Test_Plan_Template.dotx`.
- [ ] Xuất `Test_Plan` thành `.docx` hoặc `.pdf` để nộp.
- [ ] Kiểm tra và export các file `.drawio` ra `.png`/`.svg` để chèn vào báo cáo.
- [ ] Chạy tất cả file `.cpp` trong `lab1/` và lưu log/ảnh chụp màn hình đầu ra.
- [ ] Nếu dùng unit test, đóng gói test và kết quả vào folder `tests/` (có thể tạo mới).



**Thông tin tác giả:** Trương Phú Kiệt — MSSV: 3122411109
**Trường:** Trường Đại học Sài Gòn
**Môn học:** Kiểm thử phần mềm
**Giảng viên hướng dẫn:** TS. Đỗ Như Tài

Hoàn thành: README đã được chuẩn hóa và tối ưu ban đầu.

## Mô tả chi tiết theo thư mục và file

Để tiện cho việc nộp báo cáo môn Kiểm thử phần mềm, dưới đây là mô tả từng thư mục và những file quan trọng kèm hướng dẫn ngắn về cách dùng/chuẩn bị trước khi nộp.

- `.vscode/`
	- `settings.json`, `tasks.json`: cấu hình VS Code (task build C++ đã được tạo sẵn). Nếu dùng VS Code, bạn có thể chạy task "C/C++: g++.exe build active file" để biên dịch file đang mở.

- `DeTai/DeTai_GiaiDoan1/`
	- `DeTai_GiaiDoan1_TruongPhuKiet_3122411109.docx` và `DeTai_GiaiDoan1_HoTen_MaSV.docx`: tài liệu đề tài chính.
	- `Business_Process_FOG.drawio`: sơ đồ quy trình nghiệp vụ — export sang `.png` để chèn báo cáo.
	- `conceptual_model_final.drawio`: mô hình khái niệm / ERD — export sang `.png`/`.svg`.
	- `ScreenDesign.drawio` và `ScreenDesign.xlsx`: mockup giao diện và mô tả chi tiết các màn.
	- `Test_Plan_Template.dotx`: mẫu Test Plan (Word Template). Mở bằng Microsoft Word, điền thông tin và lưu `Test_Plan.docx` trước khi nộp.
	- `trình bày word.txt`: ghi chú để soạn phần trình bày.

- `DeTai/DeTai01/`, `DeTai/DeTai02/`:
	- Thường chứa các slide, file phân tích, hoặc các tài liệu hỗ trợ. Ví dụ `DeTai01-Phan tich...drawio` hay `.pptx`.

- `lab1/` (chi tiết)
	- `*.cpp` — mã nguồn C++ cho các bài tập. Các file hiện có: `baia.cpp`, `baib.cpp`, `baic.cpp`, `baid.cpp`, `baie.cpp`, `bai2_2.cpp`, `bai2_3.cpp`, `tempCodeRunnerFile.cpp`.
	- `*.ipynb` — notebook minh họa hoặc ghi chép kết quả (ví dụ: `baia.ipynb`, `baib.ipynb`, ...).
	- `*.exe` — file thực thi (có thể là kết quả biên dịch trước đó); bạn nên xóa file exe trước khi nộp mã nguồn nếu không muốn đính kèm nhị phân.
	- `Lab1_VV_TestCases.docx`, `BaiTap1 - VV - TestCases.pdf` — mẫu test cases và tài liệu mô tả test case (dùng để tham khảo, có thể nộp kèm).
	- `Lab1` chứa luôn `Lab1_VV_TestCases.docx` — đây là nơi ghi test case thủ công (test case, expected outputs).

- `Lab2/`, `Lab3/`, `Lab4/`, `Lab5/`:
	- Chứa các bài lab khác (drawio, docx, pdf). Ví dụ `Lab2_PTTKHT_TruongPhuKiet_3122411109.drawio` và tương tự.

- `scripts/`
	- `run_lab1_tests.sh` — script bash để biên dịch và chạy tất cả các file `.cpp` trong `lab1/` và lưu log vào `logs/`. (Script đã thêm, có thể chạy trên Bash/WSL/Git Bash.)

- `logs/` (chưa có trong repo, sẽ được tạo khi chạy script) — lưu log đầu ra và lỗi biên dịch.

## Hướng dẫn soạn Test Plan và Test Cases (chi tiết)

Mục tiêu: bạn cần nộp một Test Plan đầy đủ (dựa trên `Test_Plan_Template.dotx`) và một bộ Test Cases có thể thực thi/ mô tả rõ ràng. Dưới đây là các phần cần có và ví dụ mẫu.

1) Test Plan (nên có các mục):
	- Giới thiệu (Project/Module under test)
	- Scope (phạm vi kiểm thử)
	- Mục tiêu kiểm thử
	- Môi trường test (OS, compiler, phiên bản tool)
	- Tài nguyên (người thực hiện, thời gian, tool)
	- Test approach (Unit, Integration, System, Regression)
	- Test cases & traceability (bảng mapping giữa yêu cầu và test cases)
	- Criteria (entry/exit criteria)
	- Schedule

2) Test Case (một mẫu chi tiết để nhân rộng):

	- ID: TC-L1-001
	- Module: baia.cpp
	- Tiêu đề: Kiểm tra kết quả đúng với input hợp lệ A
	- Tiền đề: Chương trình biên dịch thành công, không có file bị hỏng
	- Input: mô tả cụ thể (ví dụ: một dòng chứa số nguyên 5)
	- Các bước thực hiện:
		1. Biên dịch `baia.cpp` bằng lệnh: `g++ -std=c++17 -O2 -o baia.exe baia.cpp`
		2. Chạy `./baia.exe` và nhập `5`
	- Kết quả mong đợi: (mô tả kết quả hợp lệ, ví dụ: in ra `Kết quả: 120`)
	- Kết quả thực tế: (điền khi chạy thực nghiệm)
	- Trạng thái: Pass / Fail

Lặp lại cho mỗi file `.cpp`. Với các test case negative/boundary, chuẩn bị input không hợp lệ (chuỗi thay vì số, số âm, số quá lớn,...).

## Hướng dẫn tạo báo cáo nộp (gợi ý)

1. Điền `Test_Plan_Template.dotx` (trong `DeTai/DeTai_GiaiDoan1/`) với các thông tin cụ thể cho hệ thống bạn kiểm thử.
2. Tạo folder `results/` và lưu:
	 - `Test_Plan.docx` (hoặc .pdf)
	 - `Test_Cases.xlsx` hoặc `Test_Cases.docx`
	 - Kết quả chạy: `logs/*.log`, ảnh chụp màn hình output `screenshots/`.
3. Xuất các sơ đồ từ `.drawio` sang `png` và nhúng vào báo cáo.

## Script tự động (đã thêm)

File: `scripts/run_lab1_tests.sh`

- Mục đích: biên dịch từng file `.cpp` trong `lab1/`, lưu lỗi biên dịch vào `logs/<file>.build.err` và output chạy vào `logs/<file>.log`.
- Chạy script (trên Windows dùng Git Bash hoặc WSL):

```bash
chmod +x scripts/run_lab1_tests.sh
./scripts/run_lab1_tests.sh
```

Lưu ý: script sử dụng `g++` trong PATH; nếu bạn dùng MinGW tại vị trí khác, hãy sửa PATH hoặc thay `g++` bằng đường dẫn đầy đủ.

## Gợi ý CI (tự động trên GitHub Actions)

Bạn có thể thêm workflow đơn giản `.github/workflows/ci.yml` thực hiện các bước:

- Setup MinGW/gcc (Windows) hoặc dùng Ubuntu runner
- Biên dịch tất cả file `.cpp` và chạy các executable (hoặc chỉ compile để kiểm tra build)
- Upload logs/artifacts

Nếu bạn muốn, tôi có thể tạo file workflow mẫu cho repo này.

## Ghi chú bảo quản mã nguồn

- Xóa file nhị phân (`*.exe`) trước khi commit nếu không cần thiết.
- Đưa test case chi tiết vào `lab1/TestCases/` hoặc `tests/` để dễ chạy tự động.

## Tóm tắt thay đổi tôi đã thực hiện

- Soạn và chuẩn hóa `README.md` thành bản mô tả toàn diện (file này).
- Thêm script `scripts/run_lab1_tests.sh` để tự động build/run lab1 và thu log.


