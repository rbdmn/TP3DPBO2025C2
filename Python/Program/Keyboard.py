from Komponen import Komponen

class Keyboard(Komponen):
    def __init__(self, jenis, backlight, merk, nama, jenis_komponen):
        super().__init__(merk, nama, jenis_komponen)
        self.jenis = jenis
        self.backlight = backlight

    def get_jenis(self):
        return self.jenis

    def get_backlight(self):
        return self.backlight
