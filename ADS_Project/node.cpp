#include "node.h"

Node::Node() :left(nullptr), right(nullptr){


}
Node::Node(char A)
{

    data = A;
}
Node *Node::getLeft()
{
    return left;
}

Node* Node:: getRight()
{
    return right;
}
char Node::getData()
{

    return data;

}


