#ifndef NODE_H
#define NODE_H

class Node
{
private:
    char data;
    Node*left;
    Node*right;
public:
    Node();
    Node(char A);// char stored in the node
    Node * getLeft();// get Left Pointer

    Node * getRight();// get Right Pointer

    char getData(); // get the char stored

};

#endif // NODE_H
