#pragma once
#include <iostream>
#include <string>


using namespace std;


class Komponen {
private:
    string merk;
    string nama;
    string jenis_komponen;
public:
    Komponen()
    {


    }


    Komponen(string merk, string nama, string jenis_komponen)
    {
        this->merk = merk;
        this->nama = nama;
        this->jenis_komponen = jenis_komponen;
    }


    void setMerk(string merk)
    {
        this->merk = merk;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setJenis_Komponen(string jenis_komponen)
    {
        this->jenis_komponen = jenis_komponen;
    }

    string getMerk()
    {
        return merk;
    }
    string getNama()
    {
        return nama;
    }
    string getJenis_Komponen()
    {
        return jenis_komponen;
    }


    ~Komponen()
    {




    }
};
