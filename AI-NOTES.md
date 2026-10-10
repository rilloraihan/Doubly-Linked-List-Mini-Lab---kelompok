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

- Kerangka dari AI memakai Node\*; saya ubah sendiri ke gaya ADT dari kuliah
  (typedef infotype dan address, struct elmList), lalu AI menyesuaikan seluruh fungsi.
- AI menawarkan pemisahan ke file header; saya memutuskan tetap satu main.cpp
  karena kelompok masih pemula Git dan multi-file menambah risiko error linker.
- Kerangka saya kompilasi dengan g++ dan berhasil tanpa error sebelum di-push.
- Test Task 1-2 (list 5 lagu)

## Al Fathir

**Prompt:**
"Bantu saya membuat struktur dasar C++ tanpa array untuk Doubly Linked List yang berisi 5 node lagu, dan bagaimana cara aman menghubungkan pointer next dan prev saat insert di tengah agar tidak error."

**AI helped us with:**

- Menjelaskan urutan langkah manual untuk menyambungkan next dan prev tanpa menggunakan array atau for-loop.
- Membantu memberikan logika perbaikan saat terjadi error traversal mundur akibat pointer prev yang lupa disambungkan.
- Memberikan struktur dasar implementasi fungsi traverseForward dan traverseBackward yang bersih.

**What we changed/tested:**

- Kerangka dari AI awalnya menggunakan struct Node, saya ubah menyesuaikan aturan tugas menjadi menggunakan tipe bentukan infotype dan pointer address.
- Saya membuang penggunaan array dari saran AI saat proses build list dan memasukkannya satu per satu secara manual.
- Menguji langsung fungsi traversal maju dan mundur, serta mengujinya setelah dilakukan insert/delete di tengah list.

