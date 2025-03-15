from Komponen import Komponen

class Speaker(Komponen):
    def __init__(self, daya, frekuensi, merk, nama):
        Komponen.__init__(self, merk, nama)  # Memanggil konstruktor kelas induk
        self.daya = daya
        self.frekuensi = frekuensi

    def get_daya(self):
        return self.daya

    def get_frekuensi(self):
        return self.frekuensi