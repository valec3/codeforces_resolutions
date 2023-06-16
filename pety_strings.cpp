#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string cadena{},cadena_2{};
    cin>>cadena>>cadena_2;
    std::transform(cadena.begin(), cadena.end(), cadena.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    std::transform(cadena_2.begin(), cadena_2.end(), cadena_2.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    if (cadena == cadena_2){
        cout<<0;
    } else if(cadena<cadena_2){
        cout<<-1;
    }else{
        cout<<1;
    }
}