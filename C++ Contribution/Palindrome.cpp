#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;
     if(num<=0)
     {
          cout<<"enter a positive number"<<endl;
          cin>>num;
     }
     n = num;
     while (num != 0)
    {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
    }

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
