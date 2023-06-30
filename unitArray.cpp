#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){

	int n{},t{},arr[101]={},r{},c1{},c2{};

	cin>>t;
	while(t--){
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			c1+=arr[i];
			c2*=arr[i];
		}
		

		while(c1<0 or c2==-1 ){
			c1+=2;
			c2*=(-1);
			r++;
		}
		cout << r << "\n";
	}
	return 0;
}