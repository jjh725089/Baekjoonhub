#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n,sum=0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0) {
				sum -= i;
			}
			else {
				sum += i;
			}
		}
		cout << "#" << test_case << " " << sum << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}