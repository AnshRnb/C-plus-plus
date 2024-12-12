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

// --------------------------Anagrams---------------------

// The goal of this program is to check if two strings (like words) are anagrams of
// each other. Anagrams are words that have the exact same letters,
// just arranged differently. For example, "listen" and "silent" are anagrams.

// #include <iostream>
// #include <algorithm>
// using namespace std;

// bool anagrams(string str1, string str2)
// {
//     if (str1.length() != str2.length())
//     {
//         return false;
//     }

//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());

//     return str1 == str2;
// }

// int main()
// {
//     string str1;
//     cout << "give first string name : " << endl;
//     cin >> str1;
//     string str2;
//     cout << "give second string name : " << endl;
//     cin >> str2;

//     if (anagrams(str1, str2))
//     {
//         cout << "anagram" << endl;
//     }
//     else
//     {
//         cout << "not anagram" << endl;
//     }
// }

// ------another method---------

// #include <iostream>
// #include <algorithm>
// using namespace std;

// bool anagrams(string str1, string str2)
// {
//     if (str1.length() != str2.length())
//     {
//         return false;
//     }

//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());

// The loop looks at each letter of the two strings one by one.

//     for (int i = 0; i <= str1.length(); ++i)
//     {
//         if (str1[i] != str2[i])
//         {
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     string str1;
//     cout << "give first string name : " << endl;
//     cin >> str1;
//     string str2;
//     cout << "give second string name : " << endl;
//     cin >> str2;

//     if (anagrams(str1, str2))
//     {
//         cout << "anagram" << endl;
//     }
//     else
//     {
//         cout << "not anagram" << endl;
//     }
// }

// --------anagram-method by SIR--

// #include <iostream>
// // #include <algorithm>
// using namespace std;

// bool anagrams(string str1, string str2)
// {
//     if (str1.length() != str2.length())
//     {
//         return false;
//     }

//    int counter[256]={0};

//    for(int i = 0; i <= str1.length(); ++i)
//    {
//        counter[str1[i]]++;
//        counter[str2[i]]--;
//    }

//     for (int i = 0; i <256; ++i)
//     {
//         if (counter[i]!=0)
//         {
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     string str1;
//     cout << "give first string name : " << endl;
//     cin >> str1;
//     string str2;
//     cout << "give second string name : " << endl;
//     cin >> str2;

//     if (anagrams(str1, str2))
//     {
//         cout << "anagram" << endl;
//     }
//     else
//     {
//         cout << "not anagram" << endl;
//     }
// }

// ---------------subsequence---------

// #include <iostream>
// using namespace std;

// // Imagine you have a string (a group of letters). A subsequence is like a smaller
// // string that can be made by taking some (or all) of the letters from the bigger
// // string, but they need to stay in the same order.

// bool subseq(string str1, string str2)
// {
//     int j = 0;  // We will keep track of which letter in str2 we are looking for.

//     // Loop through every letter in str1
//     for (int i = 0; i < str1.length(); ++i)
//     {
//         // If the letter in str1 matches the current letter in str2 (pointed by 'j')
//         if (str1[i] == str2[j])
//         {
//             j++;  // Move to the next letter in str2.
//         }
//     }

//     // If we've found all letters of str2 in str1, return true
//     if (j == str2.length())
//     {
//         return true;  // str2 is a subsequence of str1
//     }

//     return false;  // str2 is not a subsequence of str1
// }

// int main()
// {
//     string str1;
//     cout << "Enter first string: ";  // Ask for the first string
//     cin >> str1;  // Read the first string from the user

//     string str2;
//     cout << "Enter second string: ";  // Ask for the second string (the one we want to check)
//     cin >> str2;  // Read the second string from the user

//     // Call the subseq function to check if str2 is a subsequence of str1
//     if (subseq(str1, str2))
//     {
//         cout << "Subsequence";  // If str2 is a subsequence of str1
//     }
//     else
//     {
//         cout << "Not subsequence";  // If str2 is NOT a subsequence of str1
//     }

//     return 0;
// }

// ---------------------balanced parentheses---------------------

// #include <iostream>
// using namespace std;

// // In C++, balanced parentheses refers to the idea that every opening parenthesis
// // ( has a corresponding closing parenthesis ) and that the order in which they
// // appear follows a "nested" structure. For example, in the string "{([])}",
// // the parentheses are balanced because:

// //     1.Each opening parenthesis has a matching closing parenthesis.
// //     2.The parentheses, curly braces, and square brackets are nested in a
// //     correct order.

// bool bp(string str)
// {
//     int curly =0;
//     int parentheses =0;
//     int bracket =0;

//     for (int i = 0; i<str.length(); ++i)
//     {
//         char ch = str[i];

//         if(ch =='{')
//         {
//             curly++;
//         }
//         else if (ch =='(')
//         {
//             parentheses++;
//         }
//         else if (ch =='[')
//         {
//             bracket++;
//         }
//         else if (ch =='}')
//         {
//             curly--;
//         }
//         else if (ch ==')')
//         {
//             parentheses--;
//         }
//         else if (ch ==']')
//         {
//             bracket--;
//         }
//     }

//     // all the parentheses are properly closed means its balance:)
//     if( curly==0 && parentheses==0 && bracket==0)
//     {
//         return true;
//     }

//     return false;
// }

// int main()
// {
//     string str = "{([])}";

//     if(bp(str)){
//         cout<<"Balanced"<<endl;
//     }else{
//          cout<<"Unbalance"<<endl;
//     }

//     return 0;
// }

// --------------friend function-----------

// #include <iostream>
// using namespace std;

// class a
// {
//     int b = 47; // member::
//     friend void ansh(a obj);
// };

// void ansh(a obj)
// {
//     cout<<obj.b - 36;
// }

// int main()
// {
//     a obj;
//     ansh(obj);

// }

// more----------------

// #include <iostream>
// using namespace std;

// class a
// {
//     int b =  10;
//     friend class b;

// };

// class b
// {
//     public: void ansh( a obj)
//     {
//         cout<<obj.b;
//     }

// };

// int main()
// {
//     a obj;
//     b obj1;
//     obj1.ansh(obj);
// }

// ------------all in one----------

// #include <iostream>
// using namespace std;

// // This is our toy box called ansh
// class ansh
// {
//     int y; // The toy inside the box,which can  hold a number currently not ;)
// public:
//     // The magic rule to put a number inside the toy
//     ansh(int x)
//     {
//         y = x; // The box gets filled with the number x
//     }

//     // The magic button to show the number inside the toy
//     void show()
//     {
//         cout << y; // It shows the number inside the box
//     }
// };

// int main()
// {
//     ansh obj(10); // Make a box with the number 10 inside
//     obj.show(); // Press the button to see the number inside
//     return 0;
// }

// ------------------lil diff but same output-----------------

// #include <iostream>
// using namespace std;

// // This is our toy box called ansh
// class ansh
// {
//     int y; // The toy inside the box,which can  hold a number currently not ;)
// public:
//     // The magic rule to put a number inside the toy
//     ansh(int x)
//     {
//         y = x; // The box gets filled with the number x
//     }

//     // The magic button to show the number inside the toy
//     void show()
//     {
//         cout << y; // It shows the number inside the box
//     }
// };

// int main()
// {
//     ansh obj(10); // Make a box with the number 10 inside
//    ansh obj1(obj);  // we can do it that way create same but lil different...
//    obj1.show();  // output will be the same
//
// }

// ------------ constructor--------------

// #include <iostream>
// using namespace std;

// In C++, a constructor is a special member function of a class that is automatically
// called when an object of that class is created. Its main purpose is to initialize
// the object's data members (i.e., set initial values for the attributes of the
// object).

// A constructor has the following characteristics:

//     Same name as the class.
//     No return type (not even void).
//     It is automatically called when an object is created.
//     It can have parameters (to initialize objects with specific values) or
//     be parameterless (default constructor).

// class ansh
// {
//     int y;  // just use as it is "no use"
//     public: ansh()
//     {
//         cout<<"i am a constructor";
//     }

// };

// int main()
// {
//     ansh obj;

// }

// --------------hcf and LCM--------------

// The Least Common Multiple (LCM) of two or more numbers is the smallest number that is a
//  multiple of each of them. In other words,it is the smallest number that both numbers
//   divide without leaving a remainder.


// The Highest Common Factor (HCF) or Greatest Common Divisor (GCD) of two or more numbers is
//  the largest number that divides each of the numbers without leaving a remainder.


// #include <iostream>
// using namespace std;

// int main()
// {
    
//     int hcf,lcm;
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
    
//     for (int i =1; i<=a && i<=b; i++)
//     {
//         if(a%i == 0 && b%i ==0)
//         {
//             hcf = i;
//             // cout<<i;
//         }
        
//     }
    
//     cout<<"the hcf is : "<<hcf<<endl;
    
//     lcm = a*b/hcf;
    
//     cout<<"the lcm is : "<<lcm<<endl;
      
//     return 0;
    
    
// }

// ---------------with function lcm and hcf------------------

// #include <iostream>
// using namespace std;


// void hcflcm(int a , int b)
// {
//      int hcf;
//      int lcm;
    
    
//     for (int i =1; i<=a && i<=b; i++)
//     {
//         if(a%i == 0 && b%i ==0)
//         {
//             hcf = i;
//             // cout<<i;
//         }
        
//     }
    
//     cout<<"the hcf is : "<<hcf<<endl;
    
//     lcm = a*b/hcf;
    
//     cout<<"the lcm is : "<<lcm<<endl;
    
    
    
// }

// int main()
// {
    
   
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
    
//     hcflcm(a,b);
    
    
    
//     return 0;
    
    
// }

// ---------------two class a and b , using constructor to initialize the value in class a
//and class b using getY() function to show it after and before using the pass by reference 
//of the vlaue with &:::


// #include <iostream>
// using namespace std;

// class a {
//     int y = 10;  // Default value for y is 10
// public:
//     a(int aka) : y(aka) {}  // Constructor to initialize y with the value aka
//     friend class b;  // Declare class b as a friend of class a
//     int getY() const { return y; }  // Getter function to access y
// };

// class b {
// public:
//     void show(a &obj, int aka) {  // Pass obj by reference to modify the original object
//         obj.y = aka;  // Modify y in the original obj
//     }
// };

// int main() {
//     a obj(47);  // Create an object of class a with y initialized to 47
//     b obj1;  // Create an object of class b
    
//     // Print the initial value of y
//     cout << "Initial value of y: " << obj.getY() << endl;  // Output: 47
    
//     // Modify y using the show function of class b
//     obj1.show(obj, 200);  // Call show() to change y to 200
    
//     // Print the updated value of y
//     cout << "Updated value of y: " << obj.getY() << endl;  // Output: 200
    
//     return 0;
// }

// -------------------------best example SETTER / GETTER  AND of using copy cons...or  constructor and using classes and inheritance  OOP---------

// #include <iostream>
// using namespace std;

// class a{
    
//     private:
//     double salary;
//     string name;
    
//     public:
//     string course;
//     string game;
//     string books;
    
//     a (){
//         cout<<"i am constructor"<<endl;
//     }
    
//     // string name;
//     int rollno;
    
//     void setter(double s, string n){
//         salary = s;
//         name = n;
//     }

//     //GETTER
//     int getsalary(){
//         return salary;
      
//     }
    
//     string getname() {
//         return name;
//     }
    
// };


// class b : public a{
//    //custom constructer:: 
   
//    public:
//     b(const b &obj) {
//         this->game = obj.game;
//         this->books = obj.books;
//         this->course = obj.course;
//     }
    
//      // Default constructor for class b
//     b() {
//         cout << "I am constructor of class b" << endl;
//     }
    
    
// };



// int main()
// {
//     a obj;
    
//     obj.setter(25000, "ansh");
//     cout<<obj.getsalary()<<endl;
//     cout<<obj.getname()<<endl;
    
    
    
//     b obj1;
//     obj1.course = "python dev";
//     cout<<obj1.course<<endl;
    
//     obj1.game = "GTA 6";
//     obj1.books = "Good Habits";
//     cout << "Game: " << obj1.game << endl;
//     cout << "Books: " << obj1.books << endl;
    
    

//     //copy construtor:::
//     b obj2 = obj1;
//     cout << "Copied Course: " << obj2.course << endl;
//     cout << "Copied Game: " << obj2.game << endl;
//     cout << "Copied Books: " << obj2.books << endl;
    
    
   
    
    
    
//     return 0;
// }

// ----------------------------Constructor in c++-----------------------------------

//defination::
// if a class contains multiple constructors "where each type of constructor have different parameter list" or we can say "each with a different set of parameters."

// #include <iostream>
// using namespace std;

// class A{
    
//     private:
//     // int a,b;
//     // float c;
//     double d;     //anywhere it will work 
    
//     public:
    
//       int a,b;
//     float c;
//     // double d; 
    
    
//     A(int aka){
//         cout<<"i am a constructor: ";
//         a = aka;
//         cout<<a<<endl;
        
//     }
//     //default
//     A(){
//         cout<<"enter two numbers  :";
//         cin>>a>>b;
//         cout<<a<<" "<<b<<endl;
//     }
    
//     //parameterised constructor::
//     A(int x, int y){
//         a = x;  b =y;
//         cout<<a<<" "<<b<<endl;
//     }
    
//     A(int x, float y, double z){
//         a = x;  c = y;  d = z;
//         cout<<a<<" "<<c<<" "<<d<<endl;
//     }
    
    
// };

// int main()
// {
//     //we can call this way as well::::
    
//     A obj0(47),obj,obj1(11,12),obj2(80,80.2f,74.11); //(in this are the arugument we are apssing)
    
//     //this way as well:::
    
//     // A obj0(47);
//     // A obj;
//     // A obj1(100,200);
//     // A obj2(12,10.1f, 12.11);
    
    
    
// }


// ----------------------------------COPY CONSTRUCTOR IN C++----------------------------------


#include <iostream>
using namespace std;

  class A{
       
      private:
    //   int x;
    //   int *p;
       
      public:
      
      int x;
      int *p;
      
      
    //with or without complier will generate copy constructor:: it will show blank
       
      A() {
        //   cout<<"ansh"<<endl;  //make default if is also a expl of C-C..
        x = 5;
        p = new int(5);
      }
      
      //constructor which is define by the user is call user define or custom copy constructor
    
    // if we want to check the behaviour of complier C-C hide this  ...
    
    //   A ( const A &obj){
    //       cout<<"user define copy constructor"<<endl;
    //   } 
    
    // ...
    
    
    // complier generated C-C   // it's doing "automatically" if we hide. casue it is created automatically by complier.
    // A (A &obj){
    //     x = obj.x;
    //     p = obj.p;
    // }
    
    //user define / custom C-C
    // A (A &obj){
    //     x = obj.x;
    //     p =  new int;  //this will take new address seperate from another object.
    //     *p = *(obj.p);
    // }
    
  
  };
   
   
int main()
{
    //copy constructor is used to copy properties of one object into aother object.
    
    A obj1; // default constructor
    A obj2(obj1);   //copy of "default constructor" to same class but different obj.
    
    
    // why do we need copy constructor if complier generates automatically.
    
    cout<<"before changes:"<<endl;
    cout<<obj1.x<<endl;
    cout<<*(obj1.p)<<endl;
    cout<<obj2.x<<endl;
    cout<<*(obj2.p)<<endl;
    
    
    //modify the value of  x and p :::
    
    obj1.x = 10;
    *(obj1.p) = 10;
    
    
    cout<<"After changes:"<<endl;
    cout<<obj1.x<<endl;      //change
    cout<<*(obj1.p)<<endl;   //change
    cout<<obj2.x<<endl;      // we did't change and that's why not gonna change.
    cout<<*(obj2.p)<<endl;    //change and unexpected issue with complier generated C-C.

  // complier C-C only wroks with nornal varible not with * other it will change value
  //of another obj value as well.
  
  //complier generated C-C do shallow copy::
  
//   IMP::::::::

// 1.shallow copy or member wise copy is perfomed in complier generated C-C or default 
// 2.deep copy is performed in user defined / custom copy constructor.
// 3.if a class don't have any pointer member varible, then complier generated copy constructor is enough.
// 4. if a class have any pointer member varible,then we need to go for user defined / custom C-C.
    
}  
  
// ---------------------------------------Some practice C-C or Parameterised constructor questions -----------------------------------  

// 1 **********************/
// #include <iostream>
// using namespace std;

// class A{
    
//     private:
    
//     public:
//     int x = 47;
    
    
//     //user define or custom C-C  we can't define M -variable in private.
//     int a;
//     int b;

//     A() {}
    
     
//     //copy constructor:::
//     A( const A &obj ){
//         this->a = obj.a;
//         this->b = obj.b;
//     }
    
//     A(int xi){
//         x = xi;
//         cout<<x;
//     }
    
    
// };

// int main()
// {
//     A obj;
//     A obj1(obj);
    
    
    
//     obj1.a = 11;
//     obj1.b = 12;
    

//     cout<<obj.x<<endl;
//     cout<<obj1.a<<endl;
//     cout<<obj1.b<<endl;
  
   
// }


// 2 -----------------------


// #include <iostream>
// using namespace std;

// class A{
    
//     private:
//     double salary;
    
//     public:
//     int x;
// //even if we are using parameterised constructor we can't use M- variable in private A-SPECIFIER
    
//     A(int aka){
//         x = aka;
        
//         cout<<x<<endl;
//     }
    
//     A(){
//         cout<<"i am constructor :"<<endl;
//     }
    
//      void setsal(double sal){
//        salary =  sal;
//     }
    
//     double getsal()
//     {
//         return salary;
//     }
// };


// int main()
// {
//     // A obj1;
//     A obj2(111); 
//     A obj3; //setter and getter::: function making:::
    
//     obj3.setsal(25000);
    
//     // cout<<obj2.x<<endl;  // if we gave on constructor we don't need to give it.
//     cout<<obj3.getsal();
    
    
//     return 0;
// }


// 3 -----------------------


// #include <iostream>
// using namespace std;

// class A {
    
//     private:
    
//     int x;
//     double salary;
    

//     public:
//     // Default constructor
//     A() {
//         cout << "I am constructor" << endl;
//     }

//     // Parameterized constructor for x
//     A(int aka) {
//         x = aka;
//          cout<<x<<endl;
//     }

//     // Parameterized constructor for salary
//     A(double sal) {
//         salary = sal;
//         cout<<salary<<endl;
//     }

// };

// int main() {
//     A obj1;            // Calls the default constructor
//     A obj2(10);         // Calls the parameterized constructor for int (x = 10)
//     A obj3(25000);      // Calls the parameterized constructor for double (salary = 25000)

 

//     return 0;
// }


// --------------Virtual function---------------

// #include <iostream>
// using namespace std;

// class A{
//     public:
//     int x;
//     float y;
    
//     //   void ansh(){
//       virtual void ansh(){   // with virtual keyword on the basis of obj, function will be called
//         cout<<"ansh from A";
//     }
    
// };

// class B : public A{
    
//     public:
    
//      void ansh(){
//          cout<<"ansh from B";
//     }
    
// };

// int main()
// {
    
//     A *ptr;
// // B aa;   //it will works the same if we use any obj until we define "VIRTUAL" in base class
//     B aa;   // using keyword VIRTUAL will work on the basis of OBJECT ASSIGNED.
//     ptr = &aa;
//     ptr->ansh();
    
//     return 0;
// }


// -------------------------------revision c++-------------
// making two classes a and b, b  is a frnd of a and making functions and calling thru A and B classes....

// #include <iostream>
// using namespace std;

// class A{
    
//     private:
//     double salary;
    
//     public:
//     string name;
//     string course;
    
//     void ansh( double S){
        
//         salary = S;
//         cout<<salary<<endl;
        
//     }
    
//      int getsal() { 
//         return salary;
        
//     }
    
    
    
// };

// class B : public A{
    
//     public:
    
//     void getit(string c){
//         course = c;
//         cout<<course<<endl;
//     }
    
    
    
// };

// int main()
// {
    
//     A obj;
//     B obj1;
//     obj.name = "Ansh";
//     // obj1.course = "dev";
//     obj.ansh(25000);
//     obj1.getit("developer");
//     cout<<obj.name;
//     // cout<<obj1.course;
//     // cout<<obj.getsal();
    

//     return 0;
// }

// ---------------------abstract class----------------------

// abstact class is a class which has no object means we can't instantiated, it contain alt least one pure virtaul function in it, it serves as a bllueprint for their
//derived classes.

// #include <iostream>
// using namespace std;

// class abstract{
//     public:
    
//     virtual void show() = 0;
    
//     void showabs(){
//         cout<<"this is a abstract class";
//     }
    
    
// };

// class derived : public abstract{
    
//     public:
//     void show(){
//          cout<<"this is from derived class";
//     }
    
    
// };

// int main()
// {

//     derived obj;
//     obj.show();
//     obj.showabs();  we can call the normal function in abstract class with the derived class
    
    
    
//     abstract *ptr;
//     derived obj;
//     ptr = &obj;
//     ptr->showabs();
    
    
    
    
//     return 0;
// }

// ----------------------------------------------------------------------------------







