#pragma once
#include "node.hh"
#include "tableWare.hh"

class Stack
{
    private:
        Node* head{};
    public:
        Stack();
        ~Stack();
        void Push(TableWare*& tableware);
        void Pop();
        bool IsEmpty();
        Node* Peek() const;
};