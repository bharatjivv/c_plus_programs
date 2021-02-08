#include <iostream>
#include <fstream>
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order work with files in C++, you will have to open it. Primarily, there are 2 types 
to open a file.
1. Using a constructor
2. Using the member function open() of the class


*/
using namespace std;

int main(){
    string st = "Harry bhai";
    string st2;
    // Opening files using constructor and writing it 
    // ofstream out("sample60b.txt");  // write operation

    // opening files using constructor and reading it 

    ifstream in("sample60b.txt");   // Read operation
    in >> st2;
    getline(in , st2);
    cout << st2;


    // out << st;

    return 0;
}

