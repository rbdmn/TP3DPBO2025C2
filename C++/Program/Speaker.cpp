#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Speaker : public Komponen
{
private:
    int daya; 
    int frekuensi;
public:
    Speaker()
    {

    }

    Speaker(int daya, int frekuensi, string nama, string merk) : Komponen(nama, merk)
    {
        this->daya = daya;
        this->frekuensi = frekuensi;
    }

    void setDaya(int daya)
    {
        this->daya = daya;
    }

    int getDaya()
    {
        return daya;
    }

    void setFrekuensi(int frekuensi)
    {
        this->frekuensi = frekuensi;
    }

    int getFrekuensi()
    {
        return frekuensi;
    }

    ~Speaker() {}
};