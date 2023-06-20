#include<bits/stdc++.h>

using namespace std;

int main() {
    int t{},n{};
    int num{};
    cin >> t;
    while(t--){
        cin>>n;
        vector<int> numeros;
        int total[2]={0,0};
        int neg[2]={0,0};
        for (int i=0;i<n;i++) {
            cin >> num;
            if (num < 0 ){
                total[0]+=-num;
                neg[0]=1;
                neg[1]=0;
            }
            else{
                neg[1]=1;
                total[0]+=num;
            }

            if(neg[0] == neg[1] && neg[0] == 1 ){
                total[1]++;
            }
            numeros.push_back(num);
            if(num <=0 && i == n-1){
                total[1]++;
            }
        }
        
        cout<<total[0]<<" "<<total[1]<<endl;        
    }

    return 0;
}
