#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
	string s{},	t{};
	int n{},m{};
	cin>>n>>m>>s;

	for (int i = 0; i < m; ++i)
	{
		s=t;
		for (int j = 0; j < n-1; ++j)
		{
			if (s[j]=='B' && s[j+1]=='G')
			{
				t[j] = 'G';
				t[j+1] = 'B';
			}
		}
	}
	cout<<t;
	return 0;
}
