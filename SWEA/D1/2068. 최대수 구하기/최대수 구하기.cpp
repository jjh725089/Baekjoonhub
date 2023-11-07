#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int arr[11];
		arr[10] = 0;
		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];
			if (arr[i] > arr[10])
			{
				arr[10] = arr[i];
			}
		}
		std::cout << "#" << test_case << " " << arr[10] << std::endl;
	}
	return 0;
}