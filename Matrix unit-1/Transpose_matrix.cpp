#include <iostream>
using namespace std;

class matrix
{
public:
    void TransposeOfMatrix(int arr[][3])
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
        cout << endl;
        }
    }
};
int main()
{
    matrix s1;
    int i, j;
    int arr[3][3];
    int brr[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter element [" << i << "] [" << j << "]"
                 << " : ";
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            brr[j][i] = arr[i][j];
        }
    }
    cout << "Before tranpose matrix is : " << endl;
    s1.TransposeOfMatrix(arr);
    cout << "After transpose matrix is  : " << endl;
    s1.TransposeOfMatrix(brr);
    return 0;
}