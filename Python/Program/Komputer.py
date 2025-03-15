from Cpu import Cpu
from Ram import Ram
from HDD import HDD
from VGA import VGA
from SSD import SSD
from Keyboard import Keyboard
from Mouse import Mouse
from Speaker import Speaker

class Komputer:
    def __init__(self, nama, merk, cpu, ram_list, hdd, vga, ssd, keyboard, mouse, speaker):
        self.nama = nama
        self.merk = merk
        self.cpu = cpu
        self.ram_list = ram_list
        self.hdd = hdd
        self.vga = vga
        self.ssd = ssd
        self.keyboard = keyboard
        self.mouse = mouse
        self.speaker = speaker

    def get_nama(self):
        return self.nama

    def get_merk(self):
        return self.merk

    def get_cpu(self):
        return self.cpu

    def get_ram_list(self):
        return self.ram_list

    def get_harddrive(self):
        return self.hdd

    def get_vga(self):
        return self.vga

    def get_ssd(self):
        return self.ssd

    def get_keyboard(self):
        return self.keyboard

    def get_mouse(self):
        return self.mouse

    def get_speaker(self):
        return self.speaker
