// making  a pallindrome:::

// #include <iostream>
// using namespace std;

// void pallindrome()
// {
//     int n;
//     cin>>n;
//     int rev = 0;
//     int original = n;

//     while( n > 0)
//     {
//         rev = rev * 10 + n % 10;
//         n = n / 10;
//     }

//     cout<<rev;

//     if ( original == rev){
//         cout<<" pallindrome";
//     }else{
//         cout<<" not pallindrome";
//     }
// }

// int main()
// {
//     pallindrome();
//     return 0;
// }

// -----------------------------------------

// making  a pallindrome with string:::

#include <iostream>
using namespace std;

void reverse(string str)
{
    string strrev = str;
    int n = str.length();
    for (int i = 0; i < n / 2; ++i)
    {
        int temp = 0;
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << str[i];
    }
    cout << endl;

    if (str == strrev)
    {
        cout << " pallindrome";
    }else{
         cout<<" not pallindrome";
    }
}

int main()
{
    string str;
    cout << "enter your words  ";  //madam
    cin >> str;
    reverse(str);
}
