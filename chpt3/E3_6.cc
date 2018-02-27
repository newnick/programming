#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1("paokara re!!!");

    for(auto &x: s1)
        x = 'X';

    cout<<s1<<endl;
    return 0;
}
