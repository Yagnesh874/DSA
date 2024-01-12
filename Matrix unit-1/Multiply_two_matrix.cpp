#include <iostream>
using namespace std;

class multiplyMatrix
{
    int a[3][3];
    int b[3][3];
    int product[3][3] = {0};

public:
    void getdata();
    void putdata();
    void logic();
};
void multiplyMatrix::getdata()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter the element [" << i << "] [" << j << "]";
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter the element [" << i << "] [" << j << "]";
            cin >> b[i][j];
        }
    }
}
void multiplyMatrix::putdata()
{
    int i, j;
    cout << "The first matrix is..." << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The second matrix is..." << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
void multiplyMatrix::logic()
{
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {

                product[i][j] =product[i][j]+  a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    multiplyMatrix obj;
    obj.getdata();
    obj.putdata();
    obj.logic();
    return 0;
}