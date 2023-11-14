#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int a, b;
	cin >> a >> b;
	//가위는 1, 바위는 2, 보는 3으로 표현되며 A와 B가 무엇을 냈는지 입력으로 주어진다.
	if (a == 1 && b == 3) {
		cout << "A";
	}
	else if (a == 2 && b == 1)
	{
		cout << "A";
	}
	else if (a == 3 && b == 2) {
		cout << "A";
	}
	else {
		cout << "B";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}