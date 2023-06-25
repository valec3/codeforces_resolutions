#include<iostream>

using namespace std;

int main(){
	int n{},b{},a{},passengers{},max{-1} ;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		passengers+=(b-a);
		if (passengers > max){
			max	= passengers;
		}
	}
	cout<<max<<endl;
	return 0;

}