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

// #include <iostream>
// using namespace std;

// void reverse(string str)
// {
//     string strrev = str;
//     int n = str.length();
//     for (int i = 0; i < n / 2; ++i)
//     {
//         int temp = 0;
//         temp = str[i];
//         str[i] = str[n - i - 1];
//         str[n - i - 1] = temp;
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         cout << str[i];
//     }
//     cout << endl;

//     if (str == strrev)
//     {
//         cout << " pallindrome";
//     }else{
//          cout<<" not pallindrome";
//     }
// }

// int main()
// {
//     string str;
//     cout << "enter your words  ";  //madam
//     cin >> str;
//     reverse(str);
// }

// ----------------------------------------
// making  a uppercase and lowercase with string:::

// #include <iostream>
// #include <cctype>
// using namespace std;

// void uppercase(string& str)
// {
//     for ( int i =0; i< str.length(); ++i)
//     {
//         str[i] =   toupper(str[i]);
//     }
// }


// void lowercase(string& str)
// {
//     for ( int i =0; i< str.length(); ++i)
//     {
//         str[i] =   tolower(str[i]);
//     }


// }

// int main()
// {
//     string str;
//     cout<<"enter the word or anything  ";
//     // cin>>str;
//     getline(cin, str);

//     int choice = 0;

//     cout<<"make it uppercase press 1 "<<endl;
//     cout<<"make it lowercase press 2 "<<endl;
//     cout<<"choose it from anyone  1 and 2"<<endl;
//     cin>>choice;

//     if ( choice == 1)
//     {
//         uppercase(str);
//         cout<<"uppercase : "<<str<<endl;
        
//     }else if  (choice == 2){
//         lowercase(str);
//         cout<<"lowercase : "<<str<<endl;

//     }else{
//         cout<<"invalid"<<endl;
//     }

// }


//--------------------same  Question but different way-------------------------

// #include <iostream>
// using namespace std;

// void sto(string str)
// {
//     int start = 0;
//     int end = str.length() - 1;
    
//     while (start <= end)
//     {
//         // For start pointer
//         if (str[start] >= 'A' && str[start] <= 'Z') 
//         {
//             str[start] = str[start] + 32; // Convert to lowercase
//         }
//         else if (str[start] >= 'a' && str[start] <= 'z') 
//         {
//             str[start] = str[start] - 32; // Convert to uppercase
//         }
        
//         // For end pointer
//         if (str[end] >= 'A' && str[end] <= 'Z') 
//         {
//             str[end] = str[end] + 32; // Convert to lowercase
//         }
//         else if (str[end] >= 'a' && str[end] <= 'z') 
//         {
//             str[end] = str[end] - 32; // Convert to uppercase
//         }

//         start++;
//         end--;
//     }

//     cout << str;
// }

// int main()
// {
//     string str;
//     cout << "Enter anything without spaces: ";
//     cin >> str;
//     sto(str);

//     return 0;
// }

// ----------------friend function--------------------------


// #include <iostream>
// using namespace std;

// class a
// {
//     int b = 47;  // its a private integer value
//     friend void ansh(a obj);  
//     // Normally, classes hide their data (like keeping things secret inside the box).
//     // A friend function is like a trusted helper that can look inside the box and
//     // access the secret data.
//     // The show() function is a friend of the class a.
//     // This means show() is allowed to see and use the private variable b from
//     // the class a.
    
// };

// void ansh(a obj)
// {
//     cout<<obj.b - 36;
// }



// int main()
// {

//     a obj;  // Create an object (a special instance) of class a
//     ansh(obj);  // Call the show function, passing the object (obj)
//     return 0;  // End of the program

// }

// ---------------making class b inside a class  a, as a friend function


// #include <iostream>
// using namespace std;

// class a
// {
//     int b = 10;
//     friend class b;
// };

// class b
// {
//     public: void ansh(a obj)
//     {
//         cout<<obj.b - 7;
//     }
// };



// int main()
// {

//     a obj;
//     b obj1;
//     obj1.ansh(obj);

// }

// ------------------------------------------------





