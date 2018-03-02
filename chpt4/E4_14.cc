#include<iostream>
using namespace std;

int main() {
    int i=33;

    //if(42=i) { //compile error
    //    cout<<"first one\n";
    //}

    if(i=42) { //always true and i gets value 42
        cout<<"second one\n";
    }

    return 0;
}
