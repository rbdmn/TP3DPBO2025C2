#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Mouse : public Komponen
{
private:
    int dpi; 
    string jenis_koneksi;
public:
    Mouse()
    {

    } 

    Mouse(int dpi, string jenis_koneksi, string nama, string merk, string jenis_komponen) : Komponen(nama, merk, jenis_komponen)
    {
        this->dpi = dpi;
        this->jenis_koneksi = jenis_koneksi;
    }

    void setDpi(int dpi)
    {
        this->dpi = dpi;
    }

    int getDpi()
    {
        return dpi;
    }

    void setJenis_Koneksi(string jenis_koneksi)
    {
        this->jenis_koneksi = jenis_koneksi;
    }

    string getJenis_koneksi()
    {
        return jenis_koneksi;
    }

    ~Mouse() {}
};