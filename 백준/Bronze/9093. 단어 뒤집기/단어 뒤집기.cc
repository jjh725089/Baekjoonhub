#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argv, char** argc) {
	int T;
	cin >> T;
	cin.ignore();
	string s;
	for (int i = 0; i < T; i++)
	{
		getline(cin, s);
		int len = s.length();
		int cnt = 0;
		for (int j = 0; j <= len; j++)
		{
			if (s[j] == ' ' || j == len)
			{
				for (int k = j - 1; k > j - cnt - 1; k--)
				{
					cout << s[k];
				}
				cout << " ";
				cnt = 0;
			}
			else cnt++;
		}
	}
	return 0;
}