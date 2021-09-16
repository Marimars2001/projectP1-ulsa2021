#pragma once
#include "typeTableWare.hh"
#include <string>

class TableWare
{
    private:
        TypeTableWare typeTableWare{};
        unsigned int quantity{};
    public:
        TableWare(unsigned int quantity, TypeTableWare typeTableWare);
        ~TableWare();
        TypeTableWare GettypeTableWare() const;
        unsigned int Getquantity() const;
        std::string GettypeTableWarestd() const;
};