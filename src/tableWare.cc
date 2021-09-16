#include <iostream>
#include "tableWare.hh"

TableWare::TableWare(unsigned int quantity, TypeTableWare typeTableWare)
{
    this->quantity = quantity;
    this->typeTableWare = typeTableWare;
}

TableWare::~TableWare()
{
    std::cout << "Borrado" << std::endl;   
}

unsigned int TableWare::Getquantity() const
{
    return quantity;
}

TypeTableWare TableWare::GettypeTableWare() const
{
    return typeTableWare;
}

std::string TableWare::GettypeTableWarestd() const
{
    return typeTableWare == CERAMIC ? "CERAMIC" : typeTableWare == CRYSTAL ? "CRYSTAL" : typeTableWare ==  PORCELAIN ? " PORCELAIN" : "PLASTIC";
}