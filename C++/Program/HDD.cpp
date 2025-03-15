#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class HDD : public Komponen
{
private:
    int kapasitasGB;

public:
    HDD()
    {
    }

    HDD(int kapasitasGB, string merk, string nama, string jenis_komponen) : Komponen(merk, nama, jenis_komponen)
    {
        this->kapasitasGB = kapasitasGB;
    }

    void setKapasitasGB(int kapasitasGB)
    {
        this->kapasitasGB = kapasitasGB;
    }

    int getKapasitasGB()
    {
        return this->kapasitasGB;
    }

    ~HDD()
    {
    }
};