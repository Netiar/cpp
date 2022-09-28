#include<iostream>
using namespace std;

int main()
{
    
    // bool b = true;
    // cout<<b<<endl;
    // int x=10;
    // float y=12.567;
    // float z=true+x+false+y;
    // cout<<z<<endl;
    // cout<<sizeof(bool);
    // if ((x<y)==true)
    // {
    //    cout<<"x is less"<<endl;
    // }
    // else
    // {
    //     cout<<"y is less"<<endl;
    // }
    
    void *ptr;
    int x=10;
    ptr=&x;
    cout<<*(int*)ptr<<endl;



    return 0;
}







