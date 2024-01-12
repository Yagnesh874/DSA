#include <iostream>
using namespace std;

class demo
{
public:
    int a[3][3];

    void getdata();
    void putdata();
    void logic();
};
void demo::getdata()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter elements : "
                 << "[" << i << "]"
                 << "[" << j << "]";
            cin >> a[i][j];
        }
    }
}
void demo::putdata()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void demo::logic()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
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
    demo s1;
    s1.getdata();
    s1.putdata();
    s1.logic();
    return 0;
}