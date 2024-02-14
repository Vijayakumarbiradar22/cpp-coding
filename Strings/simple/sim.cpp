#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string:"<<endl;
    cin>>str;
    cout<<"Entered String is:"<<str<<endl;

    string str1(5,'v');
    cout<<str1<<endl;

    string str2;
    getline(cin,str2);
    cout<<str2<<endl;

    string s1="fam";
    string s2="ily";

    cout<<s1+s2<<endl;
    cout<<s1[2]<<endl;

    string s3="abc";
    string s4="abc";

    if(s4.compare(s3)==0){
        cout<<"Strings are equal"<<endl;
    } else {
        cout<<"Strings are not equal"<<endl;
    }
}