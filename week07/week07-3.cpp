#include <iostream>
#include <vector>
#include <algorithm>//sort()
using namespace std;
int main()
{
	vector<int>a;//step02
	int now;
	while(cin>>now)
	{
		a.push_back(now);//step01
		sort(a.begin(),a.end());//step02
		int N=a.size();//step04
		if(N%2==1)cout <<a[N/2]<<"\n";//step05
		else cout<<(a[N/2-1]+a[N/2])/2<<"\n";
	}
}