//making  a pallindrome:::

#include <iostream>
using namespace std;

void pallindrome()
{
    int n;
    cin>>n;
    int rev = 0;
    int original = n;

    while( n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    cout<<rev;

    if ( original == rev){
        cout<<" pallindrome";
    }else{
        cout<<" not pallindrome";
    }
}

int main()
{
    pallindrome();
    return 0;
}

