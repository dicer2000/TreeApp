/***************************
Tree Class Definition File
Brett Huffman
CSCI 182 - Mar 3, 2022
***************************/
#include <iostream>

using namespace std;

// Tree Class definition
class Tree {
    private:
        string* _pStrTreeName = NULL;
        int _nLenTreeName;

    public:
    // Constructors
    Tree(const string& TreeName);
    Tree(const Tree& oldTree);
    // Destructor
    ~Tree();
    // PrintTree function
    void printTree();

    // Assignment Operator
    Tree& operator=(const Tree&);
};