#ifndef EXPRESSIONTREE_H
#define EXPRESSIONTREE_H
#include "node.h"
#include<QString>

using namespace std;

class ExpressionTree
{
private:
    Node * root;

    void inOrderTraversal();
    void PreOrderTraversal();
    void PostOrderTraversal();//Helper Functions to be included in the Conversions

public:
    ExpressionTree();
    void buildfromPostfix(const QString & postfix);
    void buildfromPrefix(const QString & prefix);
    void buildfromInfix(const QString & infix);
    QString ToInfix();
    QString ToPostfix();
    QString ToPrefix();

};

#endif // EXPRESSIONTREE_H
