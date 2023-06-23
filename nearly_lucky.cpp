#include<bits/stdc++.h>

using namespace std;

int main(){

    int n{},r{1};
    cin>>n;
    while (n>10)
    {
        if(n % 10 == 4 || n % 10 == 7 ){
            r ++;
        }
        n/=10;
    }
    cout<<(r==7 || r==4?"YES":"NO")<<endl;
    
    

    return 0;
}