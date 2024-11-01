#include <iostream>

using namespace std;
int main(void) {
	int N, aList[1000] = { 0 };
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> aList[i];
	}
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (aList[i] > aList[j])
			{
				int tmp = aList[i];
				aList[i] = aList[j];
				aList[j] = tmp;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << aList[i] << '\n';
	}
	return 0;
}