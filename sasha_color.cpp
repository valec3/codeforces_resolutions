#include<bits/stdc++.h>

using namespace std;

int main() {
    int t{},n{};
    int num{};
    cin >> t;
    while(t--){
        cin>>n;
        vector<int> numeros;
        int total=0;
        for (int i=0;i<n;i++) {
            cin >> num;
            numeros.push_back(num);
        }
        sort(numeros.begin(), numeros.end());
        for (int i =0 ; i < int( n/2) ; i++){
            total+= (numeros[n-1 -i] - numeros[i]) ;
        }

        cout<<total<<endl;
        
    }

    return 0;
}
