#include<bits/stdc++.h>

using namespace std;

int main() {
    int t{},n{},numero{0};
    cin >> t;
    while(t--){
        int arr[105]={};
        bool f= false;
        cin>>n;
        // Contar la frecuencia de cada número en el vector
        for (int i = 0;i < n ; i++) {
            cin>>numero;
            arr[numero]++;
        }

        // verificar las fils
        for(int i = 1;i<100;i++){
            if(arr[i] > arr[i - 1]){
                f = true;
                break;
            }
        }
        (f)
            ? cout<< "NO\n"
            : cout<< "YES\n";
    }
    return 0;
}