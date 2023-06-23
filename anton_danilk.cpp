#include<bits/stdc++.h>

using namespace std; 

int main(){
    string s{};
    int g{},n;{}
    cin>>n>>s;
    for (size_t i = 0; i < n; i++)
    {
        if(s[i] == 'A'){
            g++;
        } else{
            g--;
        }
    }
    if(g > 0){
        cout<<"Anton"<<endl;
    }else if(g<0){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
    

    return 0;
}