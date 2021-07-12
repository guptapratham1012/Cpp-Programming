#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Eligibility Check";
    cout<<"\n------------------------------------";
    cout<<"\nEnter Age of a User: ";
    cin>>age;
    cout<<"\n------------------------------------";
    
    if (age>=18)
    {
        cout<<"\nYou are eligible";
        cout<<"\n------------------------------------";
    }
    else
    {
        cout<<"\nYou are not eligible for now";
        cout<<"\nWait for "<<18-age<<"year(s).";
        cout<<"\n------------------------------------";
    }
return 0;
}
