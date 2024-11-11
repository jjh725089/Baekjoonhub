#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	vector<int> fibdp(N + 1);
	fibdp[0] = 0;
	fibdp[1] = 1;
	for (int i = 2; i <= N; i++)
	{
		fibdp[i] = fibdp[i - 1] + fibdp[i - 2];
	}
	cout << fibdp[N] << '\n';
}