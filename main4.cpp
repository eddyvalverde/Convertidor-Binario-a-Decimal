
// Simple C++ program to display "Hello World"
 
// Header file for input output functions
#include <iostream>
#include <string>          
 
using namespace std;
 
// main function -
// where the execution of program begins

// Function to convert binary to decimal
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}

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
    int option=0;    
    string binaryNumber = "";
    while (option!=3)
    {
        
        cout<<"*******************Menu*******************"<<endl;
        cout<<"********1-Convert Decimal to Binary*******"<<endl;
        cout<<"********2-Convert Binary to Decimal*******"<<endl;
        cout<<"******************3-Exit******************"<<endl;
        cin >> option;
        switch(option){
            case 1:
                cout<<"######### Write a Decimal Number #########"<<endl;
                cin >> decimalNumber;
                cout << decimalToBinary(decimalNumber) << endl;
            break;
            case 2:
                cout<<"######### Write a Binary Number #########"<<endl;
                cin >> binaryNumber;
                cout << binaryToDecimal(binaryNumber) << endl;
            break;
            case 3:
                break;
            break;
            default:
                system("cls");
                cout<<"    "<<endl;
                cout<<"              Pick a Valid Option  "<<endl;
                cout<<"    "<<endl;
        }
    }
     
    return 0;
}