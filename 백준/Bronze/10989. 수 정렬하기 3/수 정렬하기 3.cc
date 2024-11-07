#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 10001
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	vector<int> aList(MAX,0);
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		aList[a]++;
	}
	for (int i = 0; i < MAX; i++)
	{
		if (aList[i] != 0)
		{
			aList[i]--;
			cout << i << '\n';
			i--;
		}
	}
	return 0;
}