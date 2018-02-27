#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1("paokara re!!!");

    decltype(s1.size()) x=0;
    while(x<s1.size()) {
        s1[x] = 'X';
        ++x;
    }

    cout<<s1<<endl;
    return 0;
}
