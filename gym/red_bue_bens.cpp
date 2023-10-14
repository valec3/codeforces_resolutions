#include <bits/stdc++.h>

using namespace std;
int main(){
    int t{};
    float r{},b{},d{};
    cin>>t;
    while (t--)
    {
        cin>>r>>b>>d;
        if(d==0){
            cout<<(r==b ? "YES\n" : "NO\n");
            continue;
        }
        int pairs = ceil(abs(r-b)/d);
        cout<<(pairs>0 && b/pairs>=1 && r/pairs>=1 ? "YES\n" : "NO\n");
    }
    
}