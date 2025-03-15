from Komponen import Komponen

class Mouse(Komponen):
    def __init__(self, dpi, jenis_koneksi, merk, nama):
        Komponen.__init__(self, merk, nama)  # Memanggil konstruktor kelas induk
        self.dpi = dpi
        self.jenis_koneksi = jenis_koneksi

    def get_dpi(self):
        return self.dpi

    def get_jenis_koneksi(self):
        return self.jenis_koneksi