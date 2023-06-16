#include <iostream>

using namespace std;

int main(){
    int n{},k{},w{};
    int out{};
    cin>>k>>n>>w;
    for(int i = 1; i <= w;i++){
        n -= k * i;
    }
    (n < 0)
    ? cout<<-n
    : cout<<0;
}

// 3 6 9 12 = 9 9 12 30