#include <iostream>
using namespace std;
int main()
{
    cout<<"For integer pointer : "<<endl;
    int num = 5;
    int *ptr = &num;
    cout<<"The address is : "<<ptr<<endl;
    cout<<"The value is : "<<*ptr<<endl;

    cout<<endl;

    cout<<"For double pointer : "<<endl;
    double d = 4.56;
    double *ptr1 = &d;
    cout<<"The address of d is : "<<ptr1<<endl;
    cout<<"The value of d is : "<<*ptr1<<endl;

    cout<<endl;

    cout<<"For float pointer : "<<endl;
    float f = 2.3;
    float *ptr3  = &f;
    cout<<"The address of f is : "<<ptr3<<endl;
    cout<<"The value of f is : "<<*ptr3<<endl;

    cout<<endl;

    cout<<"For character : "<<endl;
    char ch = 'A';
    char *ptr4 = &ch;
    cout<<"The address of character is : "<<ptr4<<endl;
    cout<<"The value of character is : "<<*ptr4<<endl;

    cout<<endl;
    
    cout<<"The size of integer  is : "<<sizeof(num)<<endl;
    cout<<"The size of pointer is : "<<sizeof(ptr)<<endl;
    cout<<"The size of pointer is : "<<sizeof(ptr1)<<endl;
    return 0;
    
}