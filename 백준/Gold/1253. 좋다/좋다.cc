#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, cnt = 0;
	cin >> N;
	vector<int> v(N, 0);
	for (int i = 0; i < N; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++)
	{
		int left = 0, right = N - 1;
		while (left < right)
		{
			if (v[left] + v[right] == v[i])
			{
				if (left != i && right != i)
                {
					cnt++;
                    break;
                }
				else if (left == i)
					left++;
				else
					right--;
			}
			else if (v[left] + v[right] > v[i])
				right--;
			else if (v[left] + v[right] < v[i])
				left++;
		}
	}
	cout << cnt;
	return 0;
}