#include <iostream>
using namespace std;

void row_major(int arr[4][4])
{
    int i, j;
    int temp[4][4];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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
    row_major(a);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    return 0;
}