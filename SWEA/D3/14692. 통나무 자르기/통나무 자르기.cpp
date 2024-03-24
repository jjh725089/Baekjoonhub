/////////////////////////////////////////////////////////////////////////////////////////////
//
//	SSAFY
//	
//	no.14692 D3 통나무자르기
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int c;
        cin >> c;
		cout << "#" << test_case << " ";
		if (c % 2 == 0)
		{
			cout << "Alice" << endl;
		}
		else
		{
			cout << "Bob" << endl;
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}