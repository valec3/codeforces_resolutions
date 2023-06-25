#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
	int n{},m{},d[4]={};
	cin>>n;
	m=n;
	while(d[0] == d[1] || d[1] == d[2] || d[2]==d[3] || d[1]==d[3] || d[0] == d[3] || d[0] == d[2]){
		n++;
		m=n;
		for (int i = 0; i < 4; i++)
		{
			d[i]=m%10;
			m/=10;
// 			cout<<d[i];
		}
        // cout<<endl;
	}
	
	cout<<n;
	return 0;
}
