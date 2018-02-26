#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<vector<int>> ivec; // error only  in old compilers
    //vector<string> svec = ivec; // error wrong type
    vector<string> svec(10,"null"); //correct 10 "null" strings

    return 0;
}
