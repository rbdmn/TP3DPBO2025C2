#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class SSD : public Komponen
{
private:
    int kapasitasGB; 
public:
    SSD()
    {

    } 

    SSD(int kapasitasGB, string merk, string nama, string jenis_komponen) : Komponen(merk, nama, jenis_komponen)
    {
        this->kapasitasGB = kapasitasGB;
    }

    void setKapasitasGB(int kapasitasGB)
    {
        this->kapasitasGB = kapasitasGB;
    }

    int getKapasitasGB()
    {
        return kapasitasGB;
    }

    ~SSD() {}
};