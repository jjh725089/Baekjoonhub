#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m[100][100];
    int add;
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            m[i][j] = 0;
        }
    }
    int r,c;
    cin >> r >> c;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < r; j++)
        {
            for(int k = 0; k < c; k++)
            {
                cin >> add;
                m[j][k] += add;                
            }

        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << m[i][j] << " ";
        }
        putchar('\n');
    }
    return 0;
}