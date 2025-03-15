// Library-ish
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include "Komputer.cpp"
#include "Cpu.cpp"
#include "Ram.cpp"
#include "HDD.cpp"
#include "Vga.cpp"
#include "Ssd.cpp"
#include "Keyboard.cpp"
#include "Mouse.cpp"
#include "Speaker.cpp"

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie();

    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Ram ram2(8, "DDR4", "Corsair", "Vengeance");
    HDD hdd(1024, "CBS NETWORK", "Sandisk");
    VGA vga(8, "NVIDIA", "RTX 3080");
    SSD ssd(512, "PopolKupa", "Seagate");

    Keyboard keyboard("Mechanical", "RGB", "Logitech", "G Pro X");
    Mouse mouse(1600, "Bluetooth", "Razer", "DeathAdder");
    Speaker speaker(50, 20, "JBL", "Flip 5");

    Komputer komputer("PCIDAMAN", "Samsung", cpu, {ram1, ram2}, hdd, vga, ssd, keyboard, mouse, speaker);

    cout << "=== Informasi Komputer ===" << endl;
    cout << "Nama Komputer: " << komputer.getNama() << endl;
    cout << "Merk Komputer: " << komputer.getMerk() << endl;
    cout << "CPU: " << komputer.getCpu().getMerk() << " " << komputer.getCpu().getNama()
         << " (" << komputer.getCpu().getJumlahCore() << " Core, " << komputer.getCpu().getKecepatanGHz() << " GHz)" << endl;

    cout << "Rams: " << endl;
    for (Ram &ram : komputer.getRamList())
    {
        cout << "- RAM: " << ram.getMerk() << " " << ram.getNama()
             << " (" << ram.getKapasitasGB() << " GB, " << ram.getDdr() << ")" << endl;
    }

    cout << "HDD: " << komputer.gethdd().getMerk() << " " << komputer.gethdd().getNama()
         << " (" << komputer.gethdd().getKapasitasGB() << " GB)" << endl;
    cout << "VGA: " << komputer.getVga().getMerk() << " " << komputer.getVga().getNama()
         << " (" << komputer.getVga().getMemoryGB() << " GB)" << endl;
    cout << "SSD: " << komputer.getSsd().getMerk() << " " << komputer.getSsd().getNama()
         << " (" << komputer.getSsd().getKapasitasGB() << " GB)" << endl;

    cout << "\n=== Informasi Keyboard ===" << endl;
    cout << "Merk: " << komputer.getKeyboard().getMerk() << endl;
    cout << "Nama: " << komputer.getKeyboard().getNama() << endl;
    cout << "Jenis: " << komputer.getKeyboard().getJenis() << endl;
    cout << "Backlight: " << komputer.getKeyboard().getBacklight() << endl;

    cout << "\n=== Informasi Mouse ===" << endl;
    cout << "Merk: " << komputer.getMouse().getMerk() << endl;
    cout << "Nama: " << komputer.getMouse().getNama() << endl;
    cout << "DPI: " << komputer.getMouse().getDpi() << endl;
    cout << "Jenis Koneksi: " << komputer.getMouse().getJenis_koneksi() << endl;

    cout << "\n=== Informasi Speaker ===" << endl;
    cout << "Merk: " << komputer.getSpeaker().getMerk() << endl;
    cout << "Nama: " << komputer.getSpeaker().getNama() << endl;
    cout << "Daya: " << komputer.getSpeaker().getDaya() << "W" << endl;
    cout << "Frekuensi: " << komputer.getSpeaker().getFrekuensi() << "Hz" << endl;

    return 0;
}