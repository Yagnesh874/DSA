#include <iostream>
using namespace std;

class matrix
{
public:
    void EqualMatrix(int arr[][3])
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
            cout << "Enter element [" << i << "] [" << j << "]";
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter element [" << i << "] [" << j << "]";
            cin >> brr[i][j];
        }
    }
    cout << "The first matrix is : " << endl;
    s1.EqualMatrix(arr);
    cout << "The second matrix is : " << endl;
    s1.EqualMatrix(brr);
    int flag = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == brr[i][j])
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        cout << "The matrix is equal";
    }
    else
    {
        cout << "The matrix is not equal";
    }
    return 0;
}