#include <iostream>
#include<iomanip>
using namespace std;

int main() {
  // float annualSalary;
  // cout << "How much is your salary?\n";
  // cin >> annualSalary;
  // cout << "your monthly salary is ";
  // cout << "$" << annualSalary/12;
  //>>UNDERSTANDING ASCII>>
  // cout <<int('+');

  //GET ASCI CODE FOR ANY WORD
  // cout << "Give five letters of any word of choice and lets check it's ASCII code" <<endl;
  // char c1, c2, c3, c4, c5;
  // cin >> c1 >> c2 >> c3 >> c4 >> c5;
  // cout << "All ASCII values for each letter within the given five letters are:"<<endl 
  // << int(c1) << " " << int(c2) << " " << int (c3) << " " << int(c4) << " "<< int(c5);

  //SETTING VARIABLE LENGTH

int number[5] = {2, 4, 6, 8, 10};
  cout << "Say my name Yo!" << endl;
  // char name[2];
  // cin.get(name, 2);
  cout << *number;

  //DECODING ASCII ALPHABET
  //Interchange the int and char to achive decodeing back to asciis
 // *****************************
  // int c1, c2, c3, c4, c5;
  // cout << "input your five letter ASCII code" ;
  // cin >> c1 >> c2 >> c3 >> c4 >> c5;
  // cout << char(c1) << char (c2) << char(c3) << char(c4) <<char(c5);


  //IF CONDITIONAL STATEMENT
  // int number;
  // cout << "put a nuber and lets devide by 2" <<endl;
  // cin >> number;
  // if( number % 2 == 0)
  //  {
  //    cout << " you typed in an even number";
  //  }
  //  else {
  //    cout << "you typed in an odd number";
  //  }

  //GET TRIANGLE SIDES TO DETERMINE WHICH TRINGLE IS IT
  // float a, b, c;
  // cout << "input the three sides of a triangle" << endl;
  // cin >> a >> b >> c;
  // if (a==b && b==c) cout << "This is an Equilateral Triangle";
  // else {
  //   if(a!=b && a!=c && b!=c) cout << "This is a scalene triangle";
  //   else cout << "This is an Isoscelese triangle";
  // }



  // return 0;
  // system("pause>0");


  // int counter = 100;
  // while(counter<=500){
  //   if(counter%3 ==0 && counter%5==0)
  //     cout<< counter << " is divisible \n";
 
  //   counter++;
  // }


//Counting Numbers
  // int number;
  // cout <<" Please enter a number of choice: \n";
  // cin >> number ;
  // if(number ==  0){
  //   cout<<  "Please enter a number greater than 0" << endl;
  // }
  // else{
  //   if(number<0){
  //     number = -1*number;
  //   }
  //   int counter = 0;
  //   while (number > 0){
  //   number/=10;
  //   counter ++;
    
  // }
  // cout << "Number contains " << counter <<" digits\n";
  // }

  //Reverse Number

  // int number, reversedNumber=0;
  // cout << "Please enter a number of choice  \n";
  // cin >> number;
  // while(number != 0){
  //   reversedNumber*=10;
  //   reversedNumber+=number%10;
  //   number/=10;
  // }
  // cout << "Reversed number is " << reversedNumber;
 
//Pin Iterator
// int userPin =1234, pin, errorCounter = 0;
// do{
//   cout <<"Please enter your pin\n";
//   cin >> pin;
//   if (pin != userPin  )
//   {
//     errorCounter++;
//   } 
//  3275
   

// } while(errorCounter<3 && pin!=userPin);
// if (errorCounter<3)
// {
//   cout <<"App is loading...";
// }
// else
// {
//   cout << "App is bloacked after 3 failed attempts";
// }

//Factorail Numbers

// int number;
// cout << " Please enter a number\n";
// cin >> number;
// int factorial =1;
// for (int i = 1; i <= number; i++)

// {
//  factorial*=i;
// }
// cout << number << "! = "<< factorial;

// int a =5, b = 4;
// // cout<< a + (b++)<< endl;
// cout<< (--a) + b<< endl;
// cout<<(true && false || true) << endl;
// int y = 3;
// cout<<(y==y++)<<endl;
// cout<< (++x <= 9 && x+2 >= 10)<<endl;

//BMI Calc
// float weight, height, bmi;
// cout<< "Your Weight(kg):"<<endl;
// cin>> weight;
// cout<< "Your Height(m):"<<endl;
// cin>> height;
// bmi = weight/(height*height);
// if(bmi <18.5){
//   cout <<"Underweight"<<endl;
// }
// else if(bmi>25){
//   cout<<"Overweight"<<endl;
// }
// else 
//   cout<< "Normal weight"<<endl;
//   cout << "Your bmi is "<<bmi;


//TENERAY OPERATION

// int hostNumber, guestNumber;
// cout <<"Host Number"<<endl;
// cin>> hostNumber;
// system("cls");
// cout<<"Guest Number"<<endl;
// cin>>guestNumber;
// (hostNumber == guestNumber)?cout<<"Correct Guess!" :cout<<"Wrong Guess";

//Calc
// int num1, num2;
// char operation;
// cout<<"Normal  Number Calculator"<<endl;
// cin>> num1 >> operation >>num2;
// switch (operation)
// {
// case '-': cout<< num1 <<operation <<num2 <<"= "<< num1-num2;  break;
// case '+': cout<< num1 <<operation <<num2 <<"= "<< num1+num2;  break;
// case '/': cout<< num1 <<operation <<num2 <<"= "<< num1/num2;  break;
// case '*': cout<< num1 <<operation <<num2 <<" = "<< num1*num2; break;
// case '%': 
//   bool isNum1, isNum2;
//   isNum1 = ((int)num1 == num1);// if num1 = 5.2, (int)num1 == 5
//   isNum2 = ((int)num2 == num2);
//   (isNum1 && isNum2)? cout<< num1%num2 :cout<< "Not Valid"; break;

// default:cout << "Not a fucking valid operation dumb fuck!!";  break;
// }

//Year and month counters ---Knowing which months of the year has 28 days, 31 days and 30 days.
// int year, month;
// cout <<"Enter year"<<endl;
// cin >> year;
// cout <<"Enter month"<<endl;
// cin >> month;

// switch (month)
// {
// case 2: 
//   (year %4 == 0 && year % 100 !=0 || year %400 ==0 ) ? cout<<"29 days in a month":cout <<"28 days in amonth ";
//   break;
// case 4:
// case 6:
// case 9:
// case 11: cout <<"30 days in a month"; break;
// case 1:
// case 3:
// case 5:
// case 7:
// case 8:
// case 10:
// case 12: cout<<"31 days in a month"; break;


// default: cout<< "Not a valid month";
//   break;
// }

//Understnding While Loop --- counting number from 100 to 500 and see which one is devisible by 3 and 5
// int counter = 100;
// while (counter <=500)
// {
//   if(counter % 3 == 0 && counter % 5 == 0)
//     cout << counter<<" is divisible" <<endl;
//     counter ++;
  
  
// }

// Counting Sheeps
// int number;
// cout<< "Please enter number"<<endl;
// cin>> number;
// if(number == 0)
// cout<<"you entered the number 0\n";
// else{
//   if(number<0){
//     number = number*-1;
//   }
//   int counter =0;
// while (number>0)
// {
  
//   number/=10;
//   counter++;
// }
// cout <<"You entered a " <<counter<<" digit number"<<endl;
// }
//Reversing Numbers
// int number, reversedNum = 0;
// cout << "Please enter number\n";
// cin >> number;


// while (number !=0)
// {
//   reversedNum *=10;
//   reversedNum += number % 10;
//   number /=10;
// }

// cout << "Reversed number is " <<reversedNum<<endl;

//Do While
// int userPin = 1234, pin, errorCounter = 0;

// do
// {
//   cout <<"PIN: ";
//   cin>>pin;
//   if(pin != userPin){
//     errorCounter++;
//   }
// } while (errorCounter<3 && userPin != pin);
// if(errorCounter<3){
//   cout << "Loading..";
// }
// else 
// cout << "Blocked";

//FActorial using for loop
// int number;
// cout <<"Enter any number of choice to know it factorial value: "<<endl;
// cin >> number;
// system("cls");
// int factorial = 1;
// for (int i = 1; i <= number; i++)
// {
//   factorial = factorial*i;
//   cout <<factorial<<"*"<<i<<" = "<< factorial <<endl;
// }
// cout <<number << "! = "<< factorial;


//Grade counter

// float grade, sum = 0;
// for (int i=0;  i<3; i++){
//   do
//   {
//     cout << "Enter Grade" << i+1 << ": "<<endl;
//     cin >> grade;

//   } while (grade <3 || grade >5);
//   sum+=grade;
  
// }
// cout << "Sum: " << sum <<endl;
// cout << "Average grade:  " << (float)sum/3.0 <<endl;

//Multiplication Table
// for (int i = 1; i <=10; i++)
// {
//   for (int j = 1; j <=10; j++)
//   {
//     cout << i << " * "<<j << " = "<< i*j << endl;
//   }
// cout << endl;  
// }

//Symbol multiplication

// int width, height;
// cout <<"Enter width"<<endl;
// cin >> width;
// cout << "Enter height" << endl;
// cin >> height;
// char symbol;
// cout << "Enter Symbol" << endl;
// cin  >> symbol;

// for (int i = 0; i < height; i++)
// {
//  for (int j = 0; j < width; j++)
//  {
//   cout << setw(3) << symbol;
//  }
//   cout << endl;

// }






// system("pause>0");
}