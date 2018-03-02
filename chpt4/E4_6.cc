#include<iostream>
using namespace std;

int main() {
    int x=0;

    cout<<"Give me an integer: ";
    cin>>x;
    if(x%2==0)
        cout<<"even"<<endl;
    else
        cout<<"odd"<<endl;
    return 0;
}
