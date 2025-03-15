from Komponen import Komponen

class SSD(Komponen):
    def __init__(self, kapasitas_gb, merk, nama):
        Komponen.__init__(self, merk, nama)  # Memanggil konstruktor kelas induk
        self.kapasitas_gb = kapasitas_gb

    def get_kapasitas_gb(self):
        return self.kapasitas_gb