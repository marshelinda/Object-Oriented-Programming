# Deskripsi Kelas dan Fungsi dalam Proyek

Repositori ini terdiri dari beberapa kelas yang merepresentasikan berbagai entitas dan fungsionalitas dasar. Berikut adalah deskripsi untuk setiap kelas:

## 1. Kelas `Calculator`

### Definisi
Kelas `Calculator` adalah alat sederhana untuk melakukan operasi aritmatika dasar pada dua angka.

### Fungsi
Menyediakan fungsi untuk melakukan penjumlahan, pengurangan, perkalian, dan pembagian.

### Atribut
- `double num1`: Menyimpan angka pertama yang akan digunakan dalam perhitungan.
- `double num2`: Menyimpan angka kedua yang akan digunakan dalam perhitungan.

### Metode
- `Calculator(double n1, double n2)`: Konstruktor untuk menginisialisasi `num1` dan `num2`.
- `double add()`: Mengembalikan hasil penjumlahan dari `num1` dan `num2`.
- `double subtract()`: Mengembalikan hasil pengurangan antara `num1` dan `num2`.
- `double multiply()`: Mengembalikan hasil perkalian dari `num1` dan `num2`.
- `double divide()`: Mengembalikan hasil pembagian `num1` dengan `num2`, dengan penanganan kesalahan untuk pembagian dengan nol.

### Interpretasi
Kelas ini memungkinkan pengguna untuk dengan mudah melakukan operasi matematis dasar, cocok untuk aplikasi yang memerlukan perhitungan sederhana.

---

## 2. Kelas `Student`

### Definisi
Kelas `Student` digunakan untuk menyimpan informasi terkait seorang siswa.

### Fungsi
Menyimpan dan mengelola data siswa seperti nama, ID, dan nilai.

### Atribut
- `std::string name`: Menyimpan nama siswa.
- `std::string id`: Menyimpan ID siswa.
- `double grade`: Menyimpan nilai siswa.

### Metode
- `Student(std::string n, std::string i, double g)`: Konstruktor untuk menginisialisasi atribut.
- Getter dan setter metode untuk masing-masing atribut.

### Interpretasi
Kelas ini membantu dalam mengorganisir data siswa untuk aplikasi atau sistem manajemen akademik.

---

## 3. Kelas `Rectangle`

### Definisi
Kelas `Rectangle` digunakan untuk menghitung luas dari sebuah persegi panjang.

### Fungsi
Menyediakan metode untuk menghitung luas berdasarkan panjang dan lebar.

### Atribut
- `double length`: Menyimpan panjang persegi panjang.
- `double width`: Menyimpan lebar persegi panjang.

### Metode
- `Rectangle(double l, double w)`: Konstruktor untuk menginisialisasi panjang dan lebar.
- `double area()`: Mengembalikan luas dari persegi panjang.

### Interpretasi
Kelas ini dapat digunakan dalam aplikasi yang memerlukan perhitungan geometris, seperti desain grafis atau arsitektur.

---

## 4. Kelas `Counter`

### Definisi
Kelas `Counter` adalah sebuah kelas yang digunakan untuk menghitung jumlah secara sederhana.

### Fungsi
Mengijinkan penghitungan yang dapat diinkrementasi dan mendapatkan nilai saat ini.

### Atribut
- `int count`: Menyimpan nilai penghitung saat ini.

### Metode
- `Counter()`: Konstruktor yang menginisialisasi `count` ke nol.
- `void increment()`: Meningkatkan nilai `count` sebesar satu.
- `int getCount()`: Mengembalikan nilai `count` saat ini.

### Interpretasi
Kelas ini bermanfaat untuk aplikasi yang membutuhkan sistem penghitungan, seperti penghitung pengunjung atau sistem pemungutan suara.

---

## 5. Kelas `Point`

### Definisi
Kelas `Point` merepresentasikan titik dalam ruang 2D.

### Fungsi
Menyediakan metode untuk menghitung jarak dari titik tersebut ke titik asal (0, 0).

### Atribut
- `double x`: Koordinat sumbu x dari titik.
- `double y`: Koordinat sumbu y dari titik.

### Metode
- `Point(double xCoord, double yCoord)`: Konstruktor untuk menginisialisasi koordinat.
- `double distanceToOrigin()`: Mengembalikan jarak dari titik ke titik asal (0, 0).

### Interpretasi
Kelas ini relevan dalam aplikasi yang berurusan dengan grafik, permainan, atau sistem pemetaan.

---

## Cara Menggunakan
1. Kompilasi program menggunakan compiler C++.
2. Jalankan program di terminal atau command prompt.
3. Lakukan perintah diminta, seperti memasukan angka atau menekan tombol 'enter'.
4. Program akan menampilkan hasil dari kelas yang dijalankan.

