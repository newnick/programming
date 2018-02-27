#include <iostream>
#include <string>
using namespace std;

int main() {
    const string hexa("0123456789ABCDEF");
    int num = 0;

    cout<<"Give me an integer (0-15): ";
    cin>>num;
    string::size_type x = num;

    if(num>=0 && num<=15)
        cout<<"the hex is "<<hexa[x]<<endl;

    return 0;
}
