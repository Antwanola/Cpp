#include <iostream>
// #include<functional>
using namespace std;

// void introduction( string name, string city, int age);


// int main(){
//     introduction("Antwan", "lagos", 23);
//     cout << "Hellow from this side"<< endl;
   

//     system("pause>0");
// }

// void introduction(string name, string city, int age){
//     cout <<"My name is  " << name<< " and i am from "<< city <<" . Iam "<< age <<" years old";
// }


// bool isPrime( int number) {
//     for (int i = 2; i < number; i++)
//     {
//         if(number % i == 0)
//         return false;
//     }
//     return true;
// }

// int main() {
//     for (int i = 1; i < 1000; i++)
//     {
//         if (isPrime(i))
//         {
//             cout << i << " is a prime number\n";
//         }
        
//     }
    
    

// First outcome type

//     int number;
//     cout << "Enter Number\n";
//     cin >> number;
     
//      if(isPrime(number))
//         cout << "The number "<< number <<" is a prime number";
//         else
//         cout << number << " is not a prime number";


//     system("pause>0");
// }


// Sums



// int sum(int a, int b);
// double sum( double a, double b);
// float sum(float a, float b, float c);


// int main() {
//  cout << sum(3,4) << endl;
//  cout << sum(3.3,4.498466) << endl;
//  cout << sum(3.3, 4.4 ,5.589768) << endl;
    

// }

//    int sum( int a, int b){
//         return a+b;
//     }

//     double sum( double a, double b){
//         return  a+b;
//     }

//     float sum(float a, float b, float c){
//         return a + b + c;
//     }


//Bank Issues
//  void showMenu(){
//     cout<< "********** Menu **********\n";
//     cout << "1. Check Balance. \n";
//     cout << "2. Deposit. \n";
//     cout << "3. Withdrawal. \n";
//     cout << "4. Exit. \n";
//     cout<< "********************\n";
    
//  }



// int main(){
// // Check Balance, Deposit, Withdrawal, Menu

//  int option;
//  double balance = 500.00;
 


//  do
//  {
//     showMenu(); 
//      cout << "Choose Option\n";
//      cin >> option;   
//     switch (option)
// {
// case 1 :

//    cout << "Your balance is "<< balance << endl;
//     break;
// case 2:
//     cout<< "Please deposit amount of choice\n";
//     double depositeAmount;
//     cin>> depositeAmount;
//     balance+=depositeAmount;

//     cout <<"Your new balance is "<< balance << endl;
//     break;

// case 3:
//     cout<< "How much do you want to withdraw?\n";
//     double withdrawAmount;
//     cin>> withdrawAmount;

//     if (withdrawAmount <= balance)
//     {
        
//     balance-=withdrawAmount;
//     cout << "Your new balance is "<< balance << endl;
//     }
//     else
//     cout <<"You cannot withdraw beyond balance\n";


//     break;
// }
//  } while (option!=4);
 




//     system("pause>0");

// }

//For the template, you can use "typename" or "class"
template<class Tp>
void Swap(Tp& a, Tp& b){
    Tp temp = a;
    a = b;
    b = temp;

}

// void swap(int& a, int&b){
//     int temp =a;
//     a = b;
//     b = temp;

// }


int main(){
    int a;
    int b;
    cout << "input a and b"<< endl;
    cin>> a;
    cout << "input  b"<< endl;
    cin >> b;

    cout <<"Normal input order is "<<a <<" - "<< b <<endl;
    Swap(a, b);
    cout <<"Swaped input order "<< a<< " - "<<b <<endl;


    system("pause>0");

}