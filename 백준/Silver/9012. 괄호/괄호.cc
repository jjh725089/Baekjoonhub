//괄호 9012
#include <iostream>

using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int cnt = 0, flag = 1;
		string s = { 0, };
		cin >> s;
		int j = 0;
		while (s[j] != NULL)
		{
			if (s[j] == '(')
				cnt++;
			if (s[j] == ')')
				cnt--;
			if (cnt < 0)
				break;
			j++;
		}
		if (cnt == 0 )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}