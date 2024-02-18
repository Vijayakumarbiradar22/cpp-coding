#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "asdfghaafaa";
    int freq[26];

    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    
}