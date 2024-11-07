#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int X;
	cin >> X;
	int flag = 1, Max = 1, lMax = 1, rMax = 1;
	vector<int> f(2, 0);
	for (int i = 0; i < X; i++)
	{
		if (i == 0)
		{
			f[0]++;
			f[1]++;
		}
		else if (flag == 1 && f[1] == Max)
		{
			f[1]++;
			Max++;
			flag = 0;
		}
		else if (flag == 0 && f[0] == Max)
		{
			f[0]++;
			Max++;
			flag = 1;
		}//1/1 → 1/2 → 2/1 → 3/1 → 2/2 →
		else if (flag == 0)
		{
			f[1]--;
			f[0]++;
		}
		else if (flag == 1)
		{
			f[1]++;
			f[0]--;
		}
	}
	cout << f[0] << '/' << f[1] << '\n';
	return 0;
}