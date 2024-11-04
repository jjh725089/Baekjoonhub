#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, cnt = 1;
	cin >> N;
	for (int i = 1; i < N; i++)
	{
		int sum = 0;
		int add = i;
		while (sum < N)
		{
			sum += add;
			add++;
			if (sum == N)
			{
				cnt++;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}