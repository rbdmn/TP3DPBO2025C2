from Komponen import Komponen

class Cpu(Komponen):
    def __init__(self, jumlah_core, kecepatan_ghz, merk, nama, jenis_komponen):
        super().__init__(merk, nama, jenis_komponen)
        self.jumlah_core = jumlah_core
        self.kecepatan_ghz = kecepatan_ghz

    def get_jumlah_core(self):
        return self.jumlah_core

    def get_kecepatan_ghz(self):
        return self.kecepatan_ghz
