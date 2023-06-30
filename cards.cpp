#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){

	int n{},z{},o{};
	string s{};

	cin>>n;
	cin>>s;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == 'z')
		{
			z++;
		}
		if (s[i]=='n')
		{
			o++;
		}
	}
	while(o--) cout<<1<<" ";
	while(z--) cout<<0<<" ";
	return 0;
}