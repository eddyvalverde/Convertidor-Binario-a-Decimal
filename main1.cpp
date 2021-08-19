
// Simple C++ program to display "Hello World"
 
// Header file for input output functions
#include <iostream>
#include <string>          
 
using namespace std;
 
// main function -
// where the execution of program begins

string decimalToBinary(int n) {
   int binaryNumber[100], num=n;
   int i = 0;
   string result="";
   while (n > 0) {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   for (int j = i - 1; j >= 0; j--)
      result = result + to_string(binaryNumber[j]);
   return result;
}



int main()
{
    int decimalNumber = 0;

    cout<<"######### Write a Decimal Number #########"<<endl;
            cin >> decimalNumber;
            cout << decimalToBinary(decimalNumber) << endl;
    
     
    return 0;
}