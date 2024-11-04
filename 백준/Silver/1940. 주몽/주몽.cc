#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, cnt = 0;
	cin >> N >> M;
	vector<int> aList(N, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> aList[i];
	}
	sort(aList.begin(), aList.end());
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (aList[i] + aList[j] == M)
				cnt++;
		}
	}
	cout << cnt;
	return 0;
}