#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, T;
	cin >> T;
	vector<vector<int>> fib(42, vector<int>(2, 0));
	fib[0][0] = 1;
	fib[0][1] = 0;
	fib[1][0] = 0;
	fib[1][1] = 1;
	for (int j = 2; j < 42; j++)
	{
		fib[j][0] = fib[j - 1][0] + fib[j - 2][0];
		fib[j][1] = fib[j - 1][1] + fib[j - 2][1];
	}

	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cout << fib[N][0] << " " << fib[N][1] << '\n';
	}
	return 0;
}