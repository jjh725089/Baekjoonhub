/////////////////////////////////////////////////////////////////////////////////////////////
//
//	SSAFY
//	
//	1208. [S/W 문제해결 기본] 1일차 - Flatten
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T = 10;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int t;
		int arr[100];
		cin >> t;
		for (int i = 0; i < 100; i++)
		{
			cin >> arr[i];
		} //가로배열 입력 완료
		for (int i = 0; i < t; i++)
		{
			sort(arr, arr + 100);
			arr[0] += 1;
			arr[99] -= 1;
		}
        sort(arr, arr + 100);
		cout << "#" << test_case << " " << arr[99] - arr[0] << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}