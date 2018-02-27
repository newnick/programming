#include <iostream>
using namespace std;

int main() {
    string line;
    int n=0;

    while(getline(cin,line)) {
        cout<<n<<":"<<line<<endl,++n;
    }
    return 0;
}
