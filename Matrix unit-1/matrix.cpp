#include <iostream>
using namespace std;

class matrix
{
    int arr[3][3];

public:
    void getdata();
    void putdata();
};
void matrix::getdata()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter element [" << i << "] [" << j << "]"
                 << " ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
}
void matrix::putdata()
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
int main()
{
    matrix obj;
    obj.getdata();
    obj.putdata();
    return 0;
}