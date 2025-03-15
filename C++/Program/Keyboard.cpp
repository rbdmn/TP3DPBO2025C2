#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Keyboard : public Komponen
{
private:
    string jenis;
    string backlight;
public:
    Keyboard()
    {

    } 

    Keyboard(string jenis, string backlight, string nama, string merk) : Komponen(nama, merk)
    {
        this->jenis = jenis;
        this->backlight = backlight;
    }

    void setJenis(string jenis)
    {
        this->jenis = jenis;
    }

    string getJenis()
    {
        return jenis;
    }

    void setBacklight(string backlight)
    {
        this->backlight = backlight;
    }

    string getBacklight()
    {
        return backlight;
    }

    ~Keyboard() {}
};