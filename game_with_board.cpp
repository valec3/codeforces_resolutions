#include<bits/stdc++.h>

using namespace std;

int main() {
    int t{},n{};
    cin >> t;
    while(t--){
        cin>>n;
        if ( n >= 5  ){
            cout<<"Alice\n";
        }else{
            cout<<"Bob\n";
        }
    }

    return 0;
}
