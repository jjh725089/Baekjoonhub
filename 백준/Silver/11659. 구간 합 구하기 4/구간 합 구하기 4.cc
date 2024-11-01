#include <iostream>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int N, M;
	int sum[100001] = {0};
	int idx = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		cin >> idx;
		sum[i] = sum[i - 1] + idx;
	}
	for (int i = 0; i < M; i++)
	{
		//cout << "#" << i << ' ' << sum[i] << '\n';
		int start = 0, end = 0;
		cin >> start >> end;
		cout << sum[end] - sum[start - 1] << '\n';
	}
	return 0;
}