from Komponen import Komponen

class SSD(Komponen):
    def __init__(self, kapasitas_gb, merk, nama, jenis_komponen):
        super().__init__(merk, nama, jenis_komponen)
        self.kapasitas_gb = kapasitas_gb

    def get_kapasitas_gb(self):
        return self.kapasitas_gb
