#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	vector<vector<int>> arr(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>> sum_arr(N + 1, vector<int>(N + 1, 0));
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j < N + 1; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j < N + 1; j++)
		{
			sum_arr[i][j] = sum_arr[i - 1][j] + sum_arr[i][j - 1] - sum_arr[i - 1][j - 1] + arr[i][j];
		}
	}
	for (int i = 0; i < M; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << sum_arr[x2][y2] - sum_arr[x2][y1 - 1] - sum_arr[x1 - 1][y2] + sum_arr[x1 - 1][y1 - 1] << '\n';
	}
	return 0;
}