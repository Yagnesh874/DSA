#include <iostream>
using namespace std;

class identity
{
    int a[3][3];

public:
    void getdata();
    void putdata();
    void logic();
};
void identity::getdata()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter element [" << i << "] [" << j << "]"
                 << " : ";
            cin >> a[i][j];
        }
    }
}
void identity::putdata()
{
    int i, j;
    cout << "The matrix is" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void identity::logic()
{
    int i, j;
    int flag = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j && a[i][j] != 1)
            {
                flag = 1;
                break;
            }
            else if (i != j && a[i][j] != 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "The matrix is identity";
    }
    else
    {
        cout << "The matrix is not identity";
    }
}
int main()
{
    identity obj;
    obj.getdata();
    obj.putdata();
    obj.logic();
    return 0;
}

