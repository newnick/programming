#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<int> ivec{1,2,3,4,5,6,7,8,9};
    int num = 0;

    // sum of adjacent
    for(decltype(ivec.size()) x=0; x!=ivec.size(); ++x) {
        if(x%2==0)
            num = ivec[x];
        else {
            cout<<ivec[x]+num<<endl;
            num=0;
        }
    }
    if(num!=0)
        cout<<num<<endl;

    //sum of first and last, etc
    for(decltype(ivec.size()) x=0; x!=ivec.size()/2; ++x) {
        cout<<ivec[x]+ivec[ivec.size()-(x+1)]<<endl;
    }
    if(ivec.size()%2==1)
        cout<<ivec[ivec.size()/2]<<endl;
    return 0;
}
