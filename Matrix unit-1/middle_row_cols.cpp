#include <iostream>
using namespace std;

void major(int arr[][4], int row, int cols)
{
    if (row % 2 == 0)
    {
        cout << "The middle row is";
        return;
    }
    int middleRow = row / 2;
    int middleCols = cols / 2;
    cout << "The middle row is" << endl;
    for (int i = 0; i < row; i++)
    {
        cout << arr[i][middleRow] << " ";
    }
    cout<<endl;
    cout << "The middle column is" << endl;
    for (int j = 0; j < cols; j++)
    {
        cout << arr[j][middleCols] << " ";
    }
    cout<<endl;
}
int main()
{
    int a[4][4];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    major(a,4,4);
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
    }
    return 0;
}