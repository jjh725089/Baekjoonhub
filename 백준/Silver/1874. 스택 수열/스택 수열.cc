#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, num = 0, idx_res = 0, idx_cmp = 0;
	cin >> N;
	int min = N + 1, max = -1;
	vector<int> s(N);
	vector<int> cmp(N + 1, -1);
	vector<char> res(N*2);
	for (int i = 0; i < N; i++)
	{
		cin >> s[i];
		cmp[i + 1] = i + 1;
	}
	for (int i = 0; i < N; i++)
	{
		if (s[i] > num)
		{
			while (s[i] > num)
			{
				res[idx_res] = '+';
				idx_res++;
				num++;
			}
			idx_cmp = num;
		}
		if (s[i] <= num)
		{
			res[idx_res] = '-';
			idx_res++;
			if (cmp[idx_cmp] == 0)
			{
				while (cmp[idx_cmp] != 0)
				{
					//cout << "changingcurser..." << '\n';
					idx_cmp--;
				}
			}
			else if (cmp[idx_cmp] == s[i])
			{
				//cout << "check OK" << '\n';
				cmp[idx_cmp] = 0;
				idx_cmp--;
			}
			else if (cmp[idx_cmp] != s[i])
			{
				cout << "NO" << '\n';
				return 0;
			}
		}
	}
	for (int i = 0; i < N*2; i++)
	{
		cout << res[i] << '\n';
	}
	return 0;
}