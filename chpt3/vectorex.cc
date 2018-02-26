#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<int> v2;

    for(int i=0; i!=100; ++i)
        v2.push_back(i);

    //cout<<v2<<endl;
    for(auto x: v2)
        cout<<x;
    return 0;
}
