# Individual Reflection

## Rillo

## Rillo

**Name:** Rillo
**My main contribution:** Membuat repository dan kerangka proyek, menyesuaikan kerangka ke gaya elmList/address, membuat Issue #1, dan mengerjakan Task 1-2.
**What I learned about next and prev:** next menunjuk ke node setelahnya dan dipakai untuk bergerak maju, prev menunjuk ke node sebelumnya dan dipakai untuk mundur. Saat menambah node di akhir list, tiga hal harus diubah: prev node baru diarahkan ke last lama, next dari last lama diarahkan ke node baru, lalu last diperbarui. Kalau salah satu terlewat, list hanya benar di satu arah.
**The hardest part:** Mengatur alur Git/GitHub untuk kerja kelompok untuk pertama kalinya, terutama pembagian branch dan fungsi supaya tidak terjadi konflik di satu main.cpp.
**What AI helped me with:** Menjelaskan alur Git/GitHub, membuat kerangka main.cpp, dan memberi contoh implementasi fungsi Task 1-2.
**What I changed or fixed myself:** Mengubah kerangka dari Node\* ke gaya typedef infotype/address dan struct elmList, memutuskan tetap memakai satu file tanpa header, dan menyesuaikan perintah ke CMD Windows.
**GitHub Issue / PR / Commit I contributed:** Issue #1 "Task 1-2: create node and build list"; commit "Add project skeleton and folder structure".

---

## Al Fathir Abimanyu Gazaali

**Name:** Al Fathir Abimanyu Gazaali
**My main contribution:** Menulis kode manual penyambungan node C++ menggunakan syntax dasar untuk keseluruhan operasi, mengimplementasikan forward traversal dan backward traversal (Task 3-4), serta menangani perbaikan struktur pointer.
**What I learned about next and prev:** Bahwa setiap penambahan atau penghapusan node di tengah struktur, kita wajib memperbarui penunjuk (pointer) dua arah sekaligus agar list tidak terputus.
**The hardest part:** Menghubungkan ulang pointer prev dan mengatur kondisi saat menghapus node tanpa menyebabkan segmentation fault.
**What AI helped me with:** Membantu mengecek ulang koneksi pointer yang tertinggal saat proses delete dan menyusun struktur tanpa array.
**What I changed or fixed myself:** Menghapus penggunaan array untuk inisialisasi awal list, kemudian mengubah inisialisasi menjadi infotype dan address sesuai syntax dasar.
**GitHub Issue / PR / Commit I contributed:** Commit "Add forward traversal" dan "Add backward traversal".

---

## Iman

**Name:**
**My main contribution:**
**What I learned about next and prev:**
**The hardest part:**
**What AI helped me with:**
**What I changed or fixed myself:**
**GitHub Issue / PR / Commit I contributed:**

---

## Gaza Raushan Fikri

**Name:** Gaza Raushan Fikri
**My main contribution:** Mengerjakan Task 7 (mencari contoh penerapan dunia nyata), Task 8 (menjelaskan alur perubahan pointer saat menghapus node), dan Task 9 (melakukan pengujian ketahanan kode / *Break & Fix*).
**What I learned about next and prev:** Saya belajar bahwa saat menghapus node di tengah list (misal menghapus node C di antara B dan D), pointer `next` dari node sebelumnya (B) harus langsung diarahkan ke node setelahnya (D), dan pointer `prev` dari node setelahnya (D) harus menunjuk kembali ke node sebelumnya (B) agar list tidak terputus.
**The hardest part:** Memikirkan berbagai kemungkinan *edge cases* (skenario ekstrem) yang bisa membuat program mengalami *crash* atau *segmentation fault*, serta merancang logika validasi yang tepat untuk menanganinya.
**What AI helped me with:** AI membantu memberikan ide contoh penerapan di dunia nyata (seperti *Browser History*) dan memberikan masukan terkait skenario pengujian *error* beserta ide solusinya.
**What I changed or fixed myself:** Saya menyusun ulang penjelasan alur pointer dengan bahasa sendiri dan secara langsung mengimplementasikan kode validasi (seperti menambahkan pengecekan `if (head == NULL)` atau mengecek apakah node bernilai NULL) ke dalam program agar terhindar dari *crash*.
**GitHub Issue / PR / Commit I contributed:** Commit "Add answers for Task 7-9 and implement error validation"
