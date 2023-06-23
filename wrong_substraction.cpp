#include<bits/stdc++.h>
using namespace std;
int main(){

    int n{},m{};
    cin>>n>>m;

    for (size_t i = 0; i < m; i++)
    {
        if(n % 10 == 0){
            n /=10; 
        }else{
            n-=1;
        }
    }
    cout<<n<<endl;

    return 0;
}