#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){

	int n{},r{};
	cin>>n;
	if (n%2==0)
	{
		r=n/2;
	}else{
		r=-(n/2);
	}
	cout<<r;
	return 0;
}