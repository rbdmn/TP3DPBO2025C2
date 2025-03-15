from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from VGA import VGA
from SSD import SSD
from Keyboard import Keyboard
from Mouse import Mouse
from Speaker import Speaker
from Komputer import Komputer
from Komponen import Komponen

if __name__ == "__main__":
    cpu = Cpu(8, 3.4, "Intel", "Core i7")
    ram1 = Ram(16, "DDR5", "Corsair", "Vengeance")
    ram2 = Ram(8, "DDR4", "Corsair", "Vengeance")
    harddrive = Harddrive(1024, "SSD", "Samsung", "Evo")
    vga = VGA(8, "NVIDIA", "RTX 3080")
    ssd = SSD(512, "Samsung", "970 EVO")

    keyboard = Keyboard("Mechanical", "RGB", "Logitech", "G Pro X")
    mouse = Mouse(1600, "Bluetooth", "Razer", "DeathAdder")
    speaker = Speaker(50, 20, "JBL", "Flip 5")

    komputer = Komputer("PC Gaming", "Samsung", cpu, [ram1, ram2], harddrive, vga, ssd, keyboard, mouse, speaker)

    print("=== Informasi Komputer ===")
    print(f"Nama Komputer: {komputer.get_nama()}")
    print(f"Merk Komputer: {komputer.get_merk()}")
    print(f"CPU: {komputer.get_cpu().get_merk()} {komputer.get_cpu().get_nama()} "
          f"({komputer.get_cpu().get_jumlah_core()} Core, {komputer.get_cpu().get_kecepatan_ghz()} GHz)")
    for ram in komputer.get_ram_list():
        print(f"RAM: {ram.get_merk()} {ram.get_nama()} ({ram.get_kapasitas_gb()} GB, {ram.get_ddr()})")
    print(f"Harddrive: {komputer.get_harddrive().get_merk()} {komputer.get_harddrive().get_nama()} "
          f"({komputer.get_harddrive().get_kapasitas_gb()} GB, {komputer.get_harddrive().get_tipe_drive()})")
    print(f"VGA: {komputer.get_vga().get_merk()} {komputer.get_vga().get_nama()} "
          f"({komputer.get_vga().get_memory_gb()} GB)")
    print(f"SSD: {komputer.get_ssd().get_merk()} {komputer.get_ssd().get_nama()} "
          f"({komputer.get_ssd().get_kapasitas_gb()} GB)")

    print("\n=== Informasi Keyboard ===")
    print(f"Merk: {komputer.get_keyboard().get_merk()}")
    print(f"Nama: {komputer.get_keyboard().get_nama()}")
    print(f"Jenis: {komputer.get_keyboard().get_jenis()}")
    print(f"Backlight: {komputer.get_keyboard().get_backlight()}")

    print("\n=== Informasi Mouse ===")
    print(f"Merk: {komputer.get_mouse().get_merk()}")
    print(f"Nama: {komputer.get_mouse().get_nama()}")
    print(f"DPI: {komputer.get_mouse().get_dpi()}")
    print(f"Jenis Koneksi: {komputer.get_mouse().get_jenis_koneksi()}")

    print("\n=== Informasi Speaker ===")
    print(f"Merk: {komputer.get_speaker().get_merk()}")
    print(f"Nama: {komputer.get_speaker().get_nama()}")
    print(f"Daya: {komputer.get_speaker().get_daya()}W")
    print(f"Frekuensi: {komputer.get_speaker().get_frekuensi()}Hz")