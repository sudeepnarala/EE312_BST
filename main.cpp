// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    while (inFile >> s) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
    }

//    cout << "emptying" << endl;

//    bst.makeEmpty();

    cout << "NUMBER OF NODES IS: " << bst.countNodes() << endl;

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;
//
    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;
//
    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

//    bst.makeEmpty();
//
//    cout << "inorder traversal is " << endl;
//    print(bst.inOrderTraversal());
//    cout << endl;
    cout << bst.countNodes() << endl;

    cout << bst.isItemInTree("4") << endl;

//
//    cout << "Remove items " << endl;
//    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
//    s = "tree";
//    bst.deleteItem(s);
//    print(bst.postOrderTraversal());
//    cout << endl;
//    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
//    cout << endl;

}

