// #include <iostream>
// using namespace std;

// class diagonal
// {
//     int a[3][3];
//      int b[3][3];
//     int sum[3][3]={0};

// public:
//     void getdata();
//     void putdata();
//     void logic();
// };
// void diagonal::getdata()
// {
//     int i, j;
//     cout << "Enter the first matrix...." << endl;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << "Enter elements [" << i << "] [" << j << "]";
//             cin >> a[i][j];
//         }
//     }
//     cout << "Enter second matrix...." << endl;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << "Enter element [" << i << "] [" << j << "]";
//             cin >> b[i][j];
//         }
//     }
// }
// void diagonal::putdata()
// {
//     int i, j;
//     cout << "The first matrix is..." << endl;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "The second matrix is..." << endl;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << b[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// void diagonal::logic()
// {
//     int i, j;
//     int flag = 0;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//            if(i==j && a[i][j]!=2){
//             sum[i][j]+=a[i][j];
//            }
//            else if (i!=j && a[i][j]!=0)
//            {
//                 sum[i][j]+=a[i][j];
//            }
//         }
//     }
//     cout<<"sum is : "<<sum;
// }
// int main()
// {
//     diagonal obj;
//     obj.getdata();
//     obj.putdata();
//     obj.logic();
//     return 0;
// }

// #include <iostream>

// const int MATRIX_SIZE = 6;

// int sumOfDiagonalElements(int matrix[MATRIX_SIZE][MATRIX_SIZE]) {
//     int sum = 0;
//     for (int i = 0; i < MATRIX_SIZE; i++) {
//         sum += matrix[i][i]; // Sum of main diagonal elements (top-left to bottom-right)
//         sum += matrix[i][MATRIX_SIZE - 1 - i]; // Sum of secondary diagonal elements (top-right to bottom-left)
//     }
//     return sum;
// }

// int main() {
//     int MATRIX[MATRIX_SIZE][MATRIX_SIZE];

//     std::cout << "Enter " << MATRIX_SIZE * MATRIX_SIZE << " integers for the 2D matrix:" << std::endl;
//     for (int i = 0; i < MATRIX_SIZE; i++) {
//         for (int j = 0; j < MATRIX_SIZE; j++) {
//             std::cin >> MATRIX[i][j];
//         }
//     }

//     int sum = sumOfDiagonalElements(MATRIX);
//     std::cout << "Sum of both diagonal elements: " << sum << std::endl;

//     return 0;
// }
#include <iostream>
using namespace std;

class demo
{
public:
    int a[3][3];

    void getdata()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "Enter elements [" << i << "] [" << j << "]";
                cin >> a[i][j];
            }
        }
    }
    void putdata()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    void logic()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i == j)
                {
                    cout << a[i][j]<<" ";
                }
                else
                {
                    cout << "0"<<" ";
                }
            }
            cout<<endl;
        }
    }
};
int main()
{
    demo s1;
    s1.getdata();
    s1.putdata();
    s1.logic();
    return 0;
}