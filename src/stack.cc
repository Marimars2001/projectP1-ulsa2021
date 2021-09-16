#include "stack.hh"

Stack::Stack()
{

}

Stack::~Stack()
{

}

void Stack:: Push(TableWare*& tableware)
{
    if(IsEmpty())
    {
        head = new Node(tableware);
    }
    else
    {
        Node* last{head};
        head = new Node(tableware);
        head-> nextNode = last;
    }
}

void Stack::Pop()
{

}

bool Stack::IsEmpty()
{
    return head == nullptr;
}

Node* Stack::Peek() const
{
    return head;
}