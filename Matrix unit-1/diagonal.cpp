// #include <iostream>
// using namespace std;

// class matrix
// {
// public:
//     void PrintMatrix(int arr[][3])
//     {
//         int i, j;
//         for (i = 0; i < 3; i++)
//         {
//             for (j = 0; j < 3; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     matrix s1;
//     int i, j;
//     int arr[3][3];
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << "Enter the element [" << i << "] [" << j << "]";
//             cin >> arr[i][j];
//         }
//     }
//     int flag = 0;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (i == j && arr[i][j] != 2)
//             {
//                 flag = 1;
//                 break;
//             }
//             else if (i != j && arr[i][j] != 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     s1.PrintMatrix(arr);
//     if (flag == 0)
//     {
//         cout << "The matrix is diagonal";
//     }
//     else
//     {
//         cout << "The matrix is  not diagonal";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

class digonal{
    public:
    int a[3][3];
    void getdata();
    void putdata();
    void logic();
};
void digonal::getdata()
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
        // cout << endl;
    }
}
void digonal::putdata()
{
      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          cout<<a[i][j]<<" ";
        }
        cout << endl;
    }
}
void digonal::logic()
{
    int flag = 0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i == j && a[i][j] !=2)
            {
                flag = 1;
                break;
            }
            if(i!=j && a[i][j] !=0)
            {
                flag  = 1;
                break;
            }
        }
    }
    if(flag == 0)
    {
        cout<<"\nThe matrix is digoal";
    }
    else
    {
        cout<<"The matrix is not digaonal";
    }
}

int main()
{
    digonal s1;
    s1.getdata();
    s1.logic();
    s1.putdata();
    return 0;
}