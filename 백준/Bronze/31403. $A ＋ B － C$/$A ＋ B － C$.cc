#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int A;
	string B;
	int C;
	A = a + b - c;
	B = to_string(a) + to_string(b);
	C = stoi(B) - c;
	cout << A << '\n' << C;
	return 0;
}