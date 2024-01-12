
#include <iostream>
using namespace std;

class Sum_Matrix
{
public:
    void Printmatrix(int arr[][3])
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
    Sum_Matrix s1;
    int i, j;
    int arr[3][3];
    int brr[3][3];
    int sum[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter elements [" << i << "] [" << j << "]";
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter elements [" << i << "] [" << j << "]";
            cin >> brr[i][j];
        }
    }
    cout << "The first matrix is : " << endl;
    s1.Printmatrix(arr);
    cout << "The second matrix is : " << endl;
    s1.Printmatrix(brr);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = arr[i][j] + brr[i][j];
        }
        cout << endl;
    }
    cout << "The sum matrix is  : " << endl;
    s1.Printmatrix(sum);
    return 0;
}