#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n{},d{},nf{},f[100]={};
	cin>>n;
	while(n--){
		cin>>nf;
		f[nf-1] = d+1;
		d++;
	}
	cout<<f[0];
	for (int i = 1; i < d; ++i)
	{
		cout<<" "<<f[i];
	}

	return 0;
}