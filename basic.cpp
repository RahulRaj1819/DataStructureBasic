#include<iostream>
#include<string>
using namespace std;

int main(){
    //take string as  input
    string s;
    getline(cin,s);

    char ch;
    cin>>ch;
    int res =-1;
    int len = s.size();
    for(int i =0; i<len; i++){
        if(s[i] == ch){
            res =i;
        }
    }
    cout<<"The index is:"<<res<<endl;
    return 0;
}