#include <iostream>
using namespace std;

bool check(int n);
int main() 
{
    int n, i;
    bool x = false;
    cout<<"\n------------------------------------\n";
    cout << "Enter a positive  integer: ";
    cin >> n;
    cout<<"\n------------------------------------\n";
    cout<<"Solution:\n\n";
    for(i = 2; i <= n/2; ++i) 
    {
        if (check(i)) 
        {
            if (check(n - i)) 
            {
                cout << n << " = " << i << " + " << n-i << endl;
                x = true;
            }
        }
    }
    if (!x)
      cout << n << " can't be expressed as sum of two prime numbers.";
    cout<<"\n------------------------------------\n";
    return 0;
}
bool check(int n)
{
    int i;
    bool p = true;
    if (n == 0 || n == 1) 
    {
        p = false;
    }
    else 
    {
        for(i = 2; i <= n/2; ++i)
        {
            if(n % i == 0) 
            {
                p = false;
                break;
            }
        }
    }
    return p;
}
