// #include <iostream>
// using namespace std;

// class lowerMatrix
// {
//     int a[3][3];

// public:
//     void getdata();
//     void putdata();
//     void logic();
// };
// void lowerMatrix::getdata()
// {
//     int i, j;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << "Enter element [" << i << "] [" << j << "]"
//                  << " : ";
//             cin >> a[i][j];
//         }
//     }
// }
// void lowerMatrix::putdata()
// {
//     int i, j;
//     cout << "The matrix is : " << endl;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// void lowerMatrix::logic()
// {
//     int i, j;
//     cout << "The lower triangle matrix is : " << endl;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (i < j)
//             {
//                 cout << "0"
//                      << " ";
//             }
//             else
//             {
//                 cout << a[i][j] << " ";
//             }
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     lowerMatrix obj;
//     obj.getdata();
//     obj.putdata();
//     obj.logic();
//     return 0;
// }

#include<iostream>
using namespace std;

class matrix
{
    public:
    void PrintMatrix(int arr[][3])
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void getdata()
    {
        
    }
};
int main()
{
    return 0;
}