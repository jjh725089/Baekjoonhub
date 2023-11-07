
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argv, char** argc) {
	int T;
	int i;
	cin >> T;
	int arr[199];
	for (i = 0; i < T; i++) 
	{
		cin >> arr[i];
	}
	sort(arr, arr+T);
	std::cout << arr[(T-1)/2] << std::endl;
	return 0;
}