#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	int arr[15+2][15+2];
	int N, K;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int cnt = 0;
		cin >> N >> K;
		for (int i = 0; i < N + 2; i++) {
			for (int j = 0; j < N + 2; j++) {
				arr[i][j] = 0;
			}
		}
		for (int i = 1; i < N+1; i++) {
			for (int j = 1; j < N+1; j++) {
				cin >> arr[i][j];
			}
		}
		//가로확인
		for (int i = 1; i < N+1; i++) {
			int flag = 0; //flag초기화
			for (int j = 1; j < N+1; j++) {
				if (arr[i][j] == 1) 
					flag++;
				else 
					flag = 0;
				if (flag == K && (arr[i][j + 1] != 1) && (arr[i][j - K] != 1 )) {
					cnt++;
					//cout << "가로++" << i <<endl;
				}
			}
		}
		for (int j = 1; j < N+1; j++) {
			int col = 0; //flag초기화
			for (int i = 1; i < N+1; i++) {
				if (arr[i][j] == 1)
					col++;
				else
					col = 0;
				if (col == K && (arr[i + 1][j] != 1) && (arr[i - K][j] != 1)) {
					cnt++;
					//cout << "세로++" << endl;
				}
			}
		}
		cout << "#" <<test_case<< " " << cnt << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}