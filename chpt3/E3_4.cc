#include <iostream>
using namespace std;

int main() {
    string s1,s2;

    cout<<"Dose dio string (oxi kena mesa tous)";
    cin>>s1>>s2;
    if(s1==s2) {
        cout<<"The strings are equal\n";
    }
    else if (s1>s2) {
            cout<<"s1 is bigger\n";
    }
    else {
        cout<<"s2 is bigger\n";
    }

    return 0;
}
