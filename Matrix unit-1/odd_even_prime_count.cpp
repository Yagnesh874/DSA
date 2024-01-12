#include <iostream>
using namespace std;

class SingleArray
{
    int a[10];
    int n;

public:
    void getdata()
    {
        int i;
        cout << "Enter a number : ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cout << "Enter elements [" << i << "]"
                 << " ";
            cin >> a[i];
        }
    }
    void putdata()
    {
        int i;
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " " << endl;
        }
    }
    void logic()
    {
        int i;
        int countEven = 0;
        int countOdd = 0;
        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                
                countEven++;
            }
            else if (i % 2 != 0)
            {
                countOdd++;
            }
        }
        cout << "The even number is : " << countEven << endl;
        cout << "The odd number is : " << countOdd << endl;
    }
};
int main()
{
    SingleArray s1;
    s1.getdata();
    s1.putdata();
    s1.logic();
    return 0;
}