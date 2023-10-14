#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    double long x, y,k;
    long long trades{};
    cin>>t;
    while(t--){
        cin>>x>>y>>k;
        trades=k +  ceil((k*y)/(x)+1) + ceil((k-1.0)/x);
        cout<<k<<endl;
        cout<<ceil((k*y)/(x)+1)<<"\n";
        cout<<ceil((k-1)/x)<<"\n";
        cout<<trades<<"-----\n";
    }
}

// 14
// 33
// 25
// 2000000003
// 1000000001999999999
