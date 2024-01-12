#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[5];
    int arr2[3];
    int arr3[8] = {0};
    cout << "1st array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element [" << i << "]"
             << " : ";
        cin >> arr1[i];
    }
    cout << "2st array : " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter element [" << i << "]"
             << " : ";
        cin >> arr2[i];
    }
    printArray(arr1, 5);
    printArray(arr2, 3);
    cout << "After merge array is : " << endl;
    merge(arr1, 5, arr2, 3, arr3);
    printArray(arr3, 8);
    return 0;
}