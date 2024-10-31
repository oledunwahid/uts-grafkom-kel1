# uts-grafkom-kel1

Proyek ini adalah program grafik yang dibuat menggunakan OpenGL dan menampilkan beberapa elemen seperti rumah, pagar, dan pohon. Proyek dibuat dengan tujuan untuk memenuhi Ujian Tengah Semester (UTS) mata kuliah grafik komputer oleh Kelompok 1 yang beranggotakan
1.KHALED MAKKAWIRELANG (2417090025)
2.NUR ALIF (2417090019)
3.ABDUL HALIM IZZUL ISLAM (2417090015)

## Struktur Proyek

uts-grafkom-kel1/
├── .vscode/ # Konfigurasi VSCode
│ ├── tasks.json # Konfigurasi build
│ └── launch.json # Konfigurasi launch
├── include/ # Folder untuk header files (.h)
│ ├── colors.h # Header file untuk warna
│ ├── house.h # Header file untuk objek rumah
│ ├── fence.h # Header file untuk objek pagar
│ └── tree.h # Header file untuk objek pohon
├── src/ # Folder untuk source files (.cpp)
│ ├── main.cpp # Main file program
│ ├── house.cpp # File implementasi rumah
│ ├── fence.cpp # File implementasi pagar
│ └── tree.cpp # File implementasi pohon
├── build/ # Folder output untuk file yang di-compile
└── README.md # Deskripsi proyek dan panduan penggunaan

## Config Proyek di VSCode

1. Clone repositori ini dan buka proyek dengan Visual Studio Code.
2. Memastikan konfigurasi tasks.json dan launch.json sudah diatur di folder .vscode.
3. Tekan Ctrl+Shift+B untuk menjalankan build, atau pilih Run > Start Debugging untuk menjalankan proyek.

## Kerjasama Tim

Struktur ini dirancang agar setiap anggota dapat bekerja pada bagian kode masing-masing:

NUR ALIF: Fokus pada house.cpp dan house.h.
ABDUL HALIM IZZUL ISLAM: Fokus pada fence.cpp dan fence.h.
KHALED MAKKAWIRELANG: Fokus pada tree.cpp dan tree.h.
