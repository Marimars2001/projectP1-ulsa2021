#pragma once
#include "tableWare.hh"

class Node
{
    private:
        TableWare* tableware{};
    public:
        Node* nextNode{};
        Node(TableWare*& tableware);
        ~Node();
        TableWare* GetTableware() const;
};