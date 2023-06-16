#include <iostream>

using namespace std;

int main(){
    int pasos{},rpta{};
    cin>>pasos;
    (pasos % 5 == 0 )
        ? rpta = rpta = int(pasos / 5) 
        : rpta = int(pasos / 5) + 1;
    cout<<rpta;
}