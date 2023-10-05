// A. Short Sort

#include <iostream>
#include <string>
using namespace std;

int main(){
    int t{},movNecesary{};
    string s{};
    cin>>t;
    while (t--)
    {
        movNecesary=0;
        cin>>s;
        if(s[0]!='a'){
            movNecesary++;
        }
        if(s[1]!='b'){
            movNecesary++;
        }
        if(s[2]!='c'){
            movNecesary++;
        }
        cout<< (movNecesary>2 ? "NO" : "YES")<<endl;
    }
}
    