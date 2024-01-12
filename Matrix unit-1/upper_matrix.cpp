#include <iostream>
using namespace std;

class upperMatrix
{
    int a[3][3];

public:
    void getdata();
    void putdata();
    void logic();
};
void upperMatrix::getdata()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "The element is [" << i << "] [" << j << "]"
                 << " : ";
            cin >> a[i][j];
        }
    }
}
void upperMatrix::putdata()
{
    int i, j;
    cout << "The matrix is : " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void upperMatrix::logic()
{
    int i, j;
    cout << "The upper triangle matrix is : " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i > j)
            {
                cout << "0"
                     << " ";
            }
            else
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    upperMatrix obj;
    obj.getdata();
    obj.putdata();
    obj.logic();
    return 0;
}