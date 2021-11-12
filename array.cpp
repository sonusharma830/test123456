#include<iostream>
using namespace std;

main()
{
    int sum=0;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int a2[]={1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i<10; i++)
    {
        sum=a[i]+a2[i];
        cout<<sum<<endl;
    }
    return 0;
}