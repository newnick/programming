#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1("paokara re!!!");

    for( decltype(s1.size()) x=0; x<s1.size(); ++x) {
        s1[x] = 'X';
    }

    cout<<s1<<endl;
    return 0;
}
