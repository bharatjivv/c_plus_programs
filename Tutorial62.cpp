#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");
    out << "This is me \n";
    out << "This is also me \n";
    out << "This is ANSI c ";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample60b.txt");
    // in >> st >> st2;
    // cout << st <<" "<<  st2;

    while(in.eof() == 0){
        getline(in,st2);
        cout << st2<< endl;
    }

    in.close();
    return 0;
}