#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<int> v1; //0
    vector<int> v2(10); //10
    vector<int> v3(10,42); //10
    vector<int> v4{10}; //1
    vector<int> v5{10,42}; //2
    vector<string> v6{10}; //10
    vector<string> v7{10,"hi"}; //10

    cout<<v1.size()<<endl;
    cout<<v2.size()<<endl;
    cout<<v3.size()<<endl;
    cout<<v4.size()<<endl;
    cout<<v5.size()<<endl;
    cout<<v6.size()<<endl;
    cout<<v7.size()<<endl;

    for(auto x: v3) // change v3 to see the other vectors
        cout<<x<<endl;

    return 0;
}
