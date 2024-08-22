#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int T = 5;
	int a, sum = 0;
	for (int i = 0; i < T; i++)
	{
		cin >> a;
		sum += a * a;
	}
	cout << sum % 10 << endl;
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}