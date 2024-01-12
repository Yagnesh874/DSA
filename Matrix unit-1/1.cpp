#include <iostream>
using namespace std;

class matrix
{
public:
    int a[3][3];
    void getdata();
    void putdata();
};
void matrix::getdata()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter elements "
                 << "[" << i << "]"
                 << "[" << j << "]";
            cin >> a[i][j];
        }
        cout << endl;
    }
}

void matrix::putdata()
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
int main()
{
    matrix s1;
    s1.getdata();
    s1.putdata();
    return 0;
}