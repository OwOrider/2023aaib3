///week03-1.cpp�Ҹ��D��:���c�Ⱥ� �A���O�L�k����
///�]��range-based for �j�� �����bC++11(2011�~����)�~���
///�p�G�ϥ�C++98(1998�~��C++)�|�L�k���T�sĶ�A����|�X���B�j��X����
///CodeBlocs 17.12�� Setting-Compiler �Ĳ�2�� -std=c++11
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c:s)
	{
		if(c!='2')
		{
			cout<<c;
		}
	}
	cout << "\n";
}
