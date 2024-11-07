#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[4] = {0,}, pwd[4], check = 0;
void add(char c); void remove(char c);
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int S, P, cnt = 0;
	cin >> S >> P;
	vector<char> dna(S);
	for (int i = 0; i < S; i++)
	{
		cin >> dna[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> pwd[i];
		if (pwd[i] == 0)
			check++;
	}
	for(int i =0; i < P; i++)
		add(dna[i]);
	if (check == 4)
		cnt++;
	for (int i = 0; i < S - P; i++)
	{
		int j = P + i;
		add(dna[j]);
		remove(dna[i]);
		if (check == 4)
			cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
void add(char c) {
	if (c == 'A')
	{
		arr[0]++;
		if (arr[0] == pwd[0])
			check++;
	}
	else if (c == 'C')
	{
		arr[1]++;
		if (arr[1] == pwd[1])
			check++;
	}
	else if (c == 'G')
	{
		arr[2]++;
		if (arr[2] == pwd[2])
			check++;
	}
	else
	{
		arr[3]++;
		if (arr[3] == pwd[3])
			check++;
	}
}
void remove(char c) {
	if (c == 'A')
	{
		if (arr[0] == pwd[0])
			check--;
		arr[0]--;
	}
	else if (c == 'C')
	{
		if (arr[1] == pwd[1])
			check--;
		arr[1]--;
	}
	else if (c == 'G')
	{
		if (arr[2] == pwd[2])
			check--;
		arr[2]--;
	}
	else
	{
		if (arr[3] == pwd[3])
			check--;
		arr[3]--;
	}
}