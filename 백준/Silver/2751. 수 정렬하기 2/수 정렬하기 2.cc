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
	vector<int> aList(N, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> aList[i];
	}
	sort(aList.begin(), aList.end());
	for (int i = 0; i < N; i++)
		cout << aList[i] << '\n';
	return 0;
}