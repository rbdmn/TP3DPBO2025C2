from Komponen import Komponen

class Ram(Komponen):
    def __init__(self, kapasitas_gb, ddr, merk, nama):
        Komponen.__init__(self, merk, nama)  # Memanggil konstruktor kelas induk
        self.kapasitas_gb = kapasitas_gb
        self.ddr = ddr

    def get_kapasitas_gb(self):
        return self.kapasitas_gb

    def get_ddr(self):
        return self.ddr