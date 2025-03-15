#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "HDD.cpp"
#include "Ram.cpp"
#include "VGA.cpp"
#include "SSD.cpp"
#include "Keyboard.cpp"
#include "Mouse.cpp"
#include "Speaker.cpp"

using namespace std;

class Komputer
{
private:
    string nama;
    string merk;
    Cpu cpu;
    vector<Ram> ramList;
    HDD hdd;
    VGA vga;
    SSD ssd;
    Keyboard keyboard; 
    Mouse mouse;       
    Speaker speaker;  
public:
    Komputer()
    {
    }

    Komputer(string nama, string merk, Cpu cpu, vector<Ram> ramList, HDD hdd, VGA vga, SSD ssd, Keyboard keyboard, Mouse mouse, Speaker speaker)
    {
        this->nama = nama;
        this->merk = merk;
        this->cpu = cpu;
        this->ramList = ramList;
        this->hdd = hdd;
        this->vga = vga;
        this->ssd = ssd;
        this->keyboard = keyboard;
        this->mouse = mouse;
        this->speaker = speaker;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setCpu(Cpu cpu)
    {
        this->cpu = cpu;
    }

    void setRam(vector<Ram> ramList)
    {
        this->ramList = ramList;
    }

    void sethdd(HDD hdd)
    {
        this->hdd = hdd;
    }

    void setVga(VGA vga)
    {
        this->vga = vga;
    }

    void setSsd(SSD ssd)
    {
        this->ssd = ssd;
    }

    void setMerk(string merk)
    {
        this->merk = merk;
    }

    void addRam(Ram ram)
    {
        this->ramList.push_back(ram);
    }

    string getNama()
    {
        return this->nama;
    }

    Cpu getCpu()
    {
        return this->cpu;
    }

    vector<Ram> getRamList() // return vector
    {
        return this->ramList;
    }

    HDD gethdd()
    {
        return this->hdd;
    }

    VGA getVga()
    {
        return vga;
    }

    SSD getSsd()
    {
        return ssd;
    }

    string getMerk()
    {
        return this->merk;
    }

    // Getter untuk perangkat eksternal
    Keyboard getKeyboard() { return keyboard; }
    Mouse getMouse() { return mouse; }
    Speaker getSpeaker() { return speaker; }

    ~Komputer()
    {
    }
};
