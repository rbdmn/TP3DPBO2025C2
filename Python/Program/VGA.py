from Komponen import Komponen

class VGA(Komponen):
    def __init__(self, memory_gb, merk, nama, jenis_komponen):
        super().__init__(merk, nama, jenis_komponen)
        self.memory_gb = memory_gb

    def get_memory_gb(self):
        return self.memory_gb
