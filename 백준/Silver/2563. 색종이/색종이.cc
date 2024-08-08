#include <iostream>
using namespace std;
int main() {
	int m[100][100];
	int t, cnt = 0;
	cin >> t;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			m[i][j] = 0;
		}
	}
	for (int i = 0; i < t; i++)
	{
		int x, y;
		cin >> x >> y;
		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				if (m[j][k] == 0)
				{
					m[j][k] = 1;
					cnt++;
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}