#include <iostream>
#include "stack.hh"
#include "tableWare.hh"

int main()
{
    TableWare* table1{new TableWare(34,CERAMIC)};
    TableWare* table2{new TableWare(15,CRYSTAL)};
    TableWare* table3{new TableWare(50,PORCELAIN)};
    TableWare* table4{new TableWare(07,PlASTIC)};
    Stack* stack{new Stack()};
    stack->Push(table1);
    stack->Push(table2);
    stack->Push(table3);
    stack->Push(table4);

    Node* currenttNode{stack->Peek()};
    while(currenttNode)
    {
        std::cout << "Tableware's quiantity" << currenttNode->GetTableware()->Getquantity() << std::endl;
        std::cout << "Tableware's classes" << currenttNode->GetTableware()->GettypeTableWare() << std::endl;
        currenttNode = currenttNode->nextNode;
    }

    std::cin.get();
    return EXIT_SUCCESS;
}