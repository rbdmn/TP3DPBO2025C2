from Komponen import Komponen

class Harddrive(Komponen):
    def __init__(self, kapasitas_gb, tipe_drive, merk, nama):
        Komponen.__init__(self, merk, nama)  # Memanggil konstruktor kelas induk
        self.kapasitas_gb = kapasitas_gb
        self.tipe_drive = tipe_drive

    def get_kapasitas_gb(self):
        return self.kapasitas_gb

    def get_tipe_drive(self):
        return self.tipe_drive