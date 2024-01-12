#include <iostream>
using namespace std;

void sumOfRows(int arr[4][4])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        int sum = 0;
        for (j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }

        arr[i][3] = sum;
    }
}
int main()
{
    int a[4][4];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "Enter elements [" << i << "] [" << j << "]";
            cin >> a[i][j];
        }
    }
    sumOfRows(a);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

