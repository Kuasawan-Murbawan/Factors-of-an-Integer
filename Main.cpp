
// Author: Afiq Husyairi
// Date: 10 November 2020
// Input: asks the user to enter a positive integer
// Output: and prints all the factors of the integer

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int x;
    cout << "Enter positive integer : ";
    cin >> x;
    
   
    
    if (x>0)
    {
        cout << "The factors of "<<x<<" : ";
        for (int i=1; i<=x; i++)
        {
            if (x%i==0)
            {cout<< i << " " ;}
        }
    
        cout<<endl;
    }
    else
        cout << "Invalid ! Please enter positive integer."<<endl;
    
    return 0;
}
