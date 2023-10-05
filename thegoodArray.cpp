#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){

	int t{};
	int n{},k{},r{};

	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<(n-2)/k+2<<"\n";
	}
	return 0;
}