#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

int main() {
    vector<string> all_words;
    string word;

    while(cin>>word)
        all_words.push_back(word);

    for(auto &x: all_words) {
        for(auto &y: x)
            y = toupper(y);
    }

    for(decltype(all_words.size()) z=0; z!=all_words.size(); ++z) { // change v3 to see the other vectors
        if(z%8==0)
            cout<<endl<<" ";
        cout<<all_words[z];
    }

    return 0;
}
