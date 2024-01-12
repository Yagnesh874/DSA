#include <iostream>
using namespace std;

class matrix
{
public:
    void PrintMatrix(int arr[][3])
    {
        int i, j;
        for (i = 2; i >= 0; i--)
        {
            for (j = 2; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    matrix A;
    int arr[3][3];
    int brr[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter element [" << i << "] [" << j << "]";
            cin >> arr[i][j];
        }
    }
    cout << "The reverse matrix is : " << endl;
    A.PrintMatrix(arr);
    return 0;
}