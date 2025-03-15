from Komponen import Komponen

class Keyboard(Komponen):
    def __init__(self, jenis, backlight, merk, nama):
        Komponen.__init__(self, merk, nama)  
        self.jenis = jenis
        self.backlight = backlight

    def get_jenis(self):
        return self.jenis

    def get_backlight(self):
        return self.backlight