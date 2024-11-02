#include <iostream>
#include <vector>

using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, num;
    long long cnt = 0;
	cin >> N >> M;
	vector<int> sum_arr(N + 1, 0);
	vector<int> leftover(M, 0);
	for (int i = 1; i < N + 1; i++)
	{
		cin >> num;
		sum_arr[i] = (sum_arr[i - 1] + num) % M;
		leftover[sum_arr[i]]++;
	}
	for (int i = 1; i < N + 1; i++)
	{
		if (sum_arr[i] == 0)
			cnt++;
	}
	for (int i = 0; i < M; i++)
	{
		if (leftover[i] > 1)
		{
			for (int j = leftover[i]; j > 1; j--)
			{
				cnt = cnt + (j - 1);
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}