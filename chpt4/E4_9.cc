#include<iostream>
using namespace std;

int main() {
    const char *cp = "a";

    if(cp && *cp) { // tests a) if is a null points and THEN b) is string is empty
        cout<<"i am in\n";
    }
    return 0;
}
