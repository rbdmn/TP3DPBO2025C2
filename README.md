# JANJI
 Saya Abdurrahman Rauf Budiman dengan NIM 2301102 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# DIAGRAM
![Untitled Diagram drawio](https://github.com/user-attachments/assets/f0c20f72-f065-4fe0-8f30-b5acfeb47898)

# Desain Program
Tugas Praktikum 3 ini mengimplementasikan bagaimana kita bisa mengembangkan kodingan yang sudah ada menjadi lebih baik lagi dan terstruktur. Oleh karena itu saya mengembangkannya cukup simpel saja dengan menambahkan atribut baru pada kelas yang sudah ada dan tentunya menambah class baru juga. Berikut hasil modifikasi saya:

### Yang di Modifikasi
Jika melihat pada diagram, diketahui bahwa terdapat 5 kelas baru yaitu `SSD`, `VGA`, `Keyboard`, `Mouse`, dan `Speaker`. Kelas `SSD` dan `VGA` sebenarnya lebih ke komponen hardware internal sedangkan Kelas seperti `Keyboard`, `Mouse`, dan `Speaker` itu merupakan komponen periferal. Tetapi karena sama sama komponen maka dari itu saya memutuskan menjadi 1 kesatuan saja dengan ke 5 kelas tersebut merupakan inheritance anak kandungnya class `Komponen`. Dengan tambahan atribut baru pada komponen yaitu "jenis_komponen" untuk membedakan komponen ini merupakan periferal atau hardware internal.

Untuk relasinya kurang lebih sama seperti sebelumnya yaitu class `Komponen` menjadi induk atau parent dari class sebelumya yaitu class `HDD` (yang awalnya namanya Hardisk saya ubah jadi HDD), `CPU`, dan kelas `RAM`. Serta dengan class tambahan baru yang sudah saya bilang sebelumnya diatas juga menginheritance dari parent `Komponen`. Lalu setiap anak dari kelas `Komponen` ini akan di composite oleh kelas `Komputer`. Jadi kelas `Komputer` inilah yang akan dipakai nanti saat di main untuk di outputkan. Mengapa composite? Karena sudah jelas ya bahwa antara kelas `Komputer` dan kelas parent `Komponen` (serta anak anaknya) itu tidak nyambung dan tidak logis, maka dari itu `Komputer` hanya bisa mengcomposite anak anak dari `Komponen` saja.

# Alur Program
Program dimulai dengan membuat objek-objek yang merepresentasikan komponen internal (seperti CPU, RAM, Harddrive) dan perangkat eksternal (seperti Keyboard, Mouse, Speaker). Setiap objek diinisialisasi dengan atribut yang sesuai, seperti merk, nama, dan spesifikasi teknis. Setelah semua objek komponen dan perangkat dibuat, program membuat objek Komputer yang menggabungkan semua komponen dan perangkat tersebut. Kemudian, program menampilkan informasi lengkap tentang komputer, termasuk detail komponen internal dan perangkat eksternal, menggunakan metode getter yang telah didefinisikan.

# Dokumentasi (C++)
![dokumoutput](https://github.com/user-attachments/assets/20811e77-fc0e-4ea1-acf6-7e2466cca2fb)
