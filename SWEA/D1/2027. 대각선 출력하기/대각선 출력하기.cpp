#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	for (int i = 0; i < 5; i++)
	{
		char arr[5];
		arr[i] = '#';
		for (int j = 0; j < 5; j++)
		{
			if(i != j)
			{
				arr[j] = '+';
			}
		}
		cout << arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4] << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}