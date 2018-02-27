#include<iostream>
using std::string;
using std::cout;
using std::endl;

int main() {
    string s1;
    string s2 = s1;
    string s3 = "hello";
    string s4(10,'c');

    string s5;

    s5 = "Hello " + "new " + s3;

    cout<<s5<<endl;
}
