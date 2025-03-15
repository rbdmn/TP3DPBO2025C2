#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class VGA : public Komponen
{
private:
    int memoryGB; 
public:
    VGA()
    {

    } 

    VGA(int memoryGB, string merk, string nama, string jenis_komponen) : Komponen(merk, nama, jenis_komponen)
    {
        this->memoryGB = memoryGB;
    }

    void setMemoryGB(int memoryGB)
    {
        this->memoryGB = memoryGB;
    }

    int getMemoryGB()
    {
        return memoryGB;
    }

    ~VGA() {}
};