#include <iostream>
#include <iomanip>
#include <limits>


using namespace std;

int main ()
{
    float x=3456.3456f;
    double a=9.123456789;
    long double aa=999.12345678L;

       cout<<setprecision(7);
       cout<<"double a"<<a<<endl;

    // cout<<setprecision(18);
     cout<<"long double aa="<<aa<<endl;
     cout<<"float x="<<x<<endl;

     return 0;
    // cout<<numeric_limits<float>::digits10<<endl;   

}




