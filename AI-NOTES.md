# AI Notes

## Rillo

**Prompt:**
"Bantu saya bikin githubnya agar semua temen saya bisa push", lalu pertanyaan lanjutan
tentang struktur repo, pembagian task per anggota,
penggunaan header, dan cara mengisi fungsi Task 1-2
(createList, createElm, insertLast, displayList).

**AI helped us with:**
- Menjelaskan alur GitHub untuk kelompok: collaborator, branch, Issue, Pull Request.
- Membuat kerangka main.cpp dan pembagian fungsi per anggota.
- Memberi contoh implementasi fungsi Task 1-2.

**What we changed/tested:**
- Kerangka dari AI memakai Node*; saya ubah sendiri ke gaya ADT dari kuliah
  (typedef infotype dan address, struct elmList), lalu AI menyesuaikan seluruh fungsi.
- AI menawarkan pemisahan ke file header; saya memutuskan tetap satu main.cpp
  karena kelompok masih pemula Git dan multi-file menambah risiko error linker.
- Kerangka saya kompilasi dengan g++ dan berhasil tanpa error sebelum di-push.
- Test Task 1-2 (list 5 lagu)