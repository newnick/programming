#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int x=0;
    vector<int> v2;

    while(cin>>x)
        v2.push_back(x);

    for(auto x: v2)
        cout<<x<<endl;
    return 0;
}
