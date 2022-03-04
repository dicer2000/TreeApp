/***************************
Tree Class Implementation File
Brett Huffman
CSCI 182 - Mar 3, 2022
***************************/
#include "tree.h"

// Constructor - pass in a string name
Tree::Tree(const string& TreeName) 
{
    // Create a new string and assign it
    _pStrTreeName = new string(TreeName);
    // Set the length of the string
    _nLenTreeName = _pStrTreeName->length();
}

// Copy Constructor
Tree::Tree(const Tree& oldTree)
{
    if(_pStrTreeName == NULL)
        // If current string was never create, create it!
        _pStrTreeName = new string(oldTree._pStrTreeName->c_str());
    else
    {   // If _pStrTreeName is already a created string
        _pStrTreeName->erase();
        _pStrTreeName->append(oldTree._pStrTreeName->c_str());
    }
    // Set the tree name length
    _nLenTreeName = _pStrTreeName->length();
}


// Destructor
Tree::~Tree()
{
    // Delete the object, if it exists
    if(_pStrTreeName != NULL)   // Best way of doing it!
        delete _pStrTreeName;
}

// Print the address of the pointer + the tree's name
void Tree::printTree()
{
    cout << "Tree @ " << _pStrTreeName << " : " << _pStrTreeName->c_str() << endl;
}

// Assignment Opertor
Tree& Tree::operator=(const Tree& oldTree)
{
    if(_pStrTreeName == NULL)
        // If current string was never create, create it!
        _pStrTreeName = new string(oldTree._pStrTreeName->c_str());
    else
    {   // If _pStrTreeName is already a created string
        _pStrTreeName->erase();
        _pStrTreeName->append(oldTree._pStrTreeName->c_str());
    }
    // Set the tree name length
    _nLenTreeName = _pStrTreeName->length();
    return *this;
}
