#include <iostream>
using namespace std;
int main()
{
    /*
    cout<<"First way to create the pointer : "<<endl;
    int i=5;
    int *q = &i;
    cout<<"Address is : "<<q<<endl;
    cout<<"value  is : "<<*q<<endl;

    cout<<endl;

    cout<<"second way to create the pointer : "<<endl;
    int *p = 0;
    p = &i;
    cout<<"Address is : "<<p<<endl;
    cout<<"value  is : "<<*p<<endl;
    return 0;
    */

    /*
    int num = 5;
    int a = num;
    a++;
    cout<<num<<endl;

    int *p = &num;//5
    cout<<"Before : "<<num<<endl;//5
    (*p)++;//6
    cout<<"after : "<<num<<endl;//6


     //Copy element

     int *q  = p;
     cout<<p<<" - "<<q<<endl;
     cout<<*p<<" - "<<*q<<endl;
     */

    // improtant concept

    int i = 3;
    int *p = &i;
    cout << p << endl;
    // cout << (*p)++ << endl;
    *p = *p + 1;
    cout << *p << endl;
    p = p + 1;
    cout << p << endl;
}