from Komponen import Komponen

class VGA(Komponen):
    def __init__(self, memory_gb, merk, nama):
        Komponen.__init__(self, merk, nama) 
        self.memory_gb = memory_gb

    def get_memory_gb(self):
        return self.memory_gb