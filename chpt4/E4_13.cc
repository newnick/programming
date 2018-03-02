#include<iostream>
using namespace std;

int main() {
    int i;
    double d;

    d = i = 3.5; // i =3 , d = 3.0;
    cout<<"d="<<d<<"\ti="<<i<<endl;
    i=d=3.5; //d=3.5 , i=3
    cout<<"d="<<d<<"\ti="<<i<<endl;

    return 0;
}
