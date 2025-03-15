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

    VGA(int memoryGB, string merk, string nama) : Komponen(merk, nama)
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