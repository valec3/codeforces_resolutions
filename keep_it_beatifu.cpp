#include<bits/stdc++.h>

using namespace std;

int main() {
    int t{},n{},case_esp{1};
    int num{};
    cin >> t;
    while(t--){
        cin>>n;
        vector<int> consultas;
        for (int i=0;i<n;i++) {
            cin >> num;
            if(i==0){
                consultas.push_back(num);
                cout<<"1";
            }
            else if ((num >= consultas.back() && case_esp ) || (!case_esp && num >=consultas.back() && num <= consultas[0]) ){
                consultas.push_back(num);
                cout<<"1";
            } else if( ( case_esp && num <= consultas[0])){
                consultas.push_back(num);
                cout<<"1";
                case_esp = 0;
            }else {
                cout<<"0";
            }
        }
        cout<<"\n";
        
    }

    return 0;
}
