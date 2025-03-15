from Komponen import Komponen

class Speaker(Komponen):
    def __init__(self, daya, frekuensi, merk, nama, jenis_komponen):
        super().__init__(merk, nama, jenis_komponen)
        self.daya = daya
        self.frekuensi = frekuensi

    def get_daya(self):
        return self.daya

    def get_frekuensi(self):
        return self.frekuensi
