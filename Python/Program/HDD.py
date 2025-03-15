from Komponen import Komponen

class HDD(Komponen):
    def __init__(self, kapasitas_gb, tipe_drive, merk, nama, jenis_komponen):
        super().__init__(merk, nama, jenis_komponen)
        self.kapasitas_gb = kapasitas_gb
        self.tipe_drive = tipe_drive

    def get_kapasitas_gb(self):
        return self.kapasitas_gb

    def get_tipe_drive(self):
        return self.tipe_drive