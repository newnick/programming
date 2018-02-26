#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string word;
    vector<string> v2;

    while(cin>>word)
        v2.push_back(word);

    for(auto x: v2)
        cout<<x<<endl;
    return 0;
}
