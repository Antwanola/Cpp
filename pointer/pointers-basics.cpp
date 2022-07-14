#include <iostream>
using namespace std;


// template<typename Tp>
// void storedVal(Tp* a){
//     cout << *a<< endl;
// }
// template<typename Tp>
// void storedAdd(Tp* a){
//     cout<<&a<< endl;
// }



// int main(){
// int t = 6;
// char g = 'w';
// char* val = &g;
// storedVal(&t);
// storedAdd(&g);


//     system("pause>0");
// }

// Using void pointer

// void print(void* ptr, char type){
//     switch (type)
//     {
//     case 'i':
//         cout<<*((int*)ptr)<< endl;
//         break;

//         case 'c':
//         cout<<*((char*)ptr)<< endl;
//         break;
//     }

// }

int main(){
int n = 5;

// read "n" memory address
cout<< &n<< endl;
// Store address in "ptr" variable
int* ptr = &n;
//Read address in stored variable
cout<< ptr<< endl;
//Read value of stored variable otherwise called dereferencing.
cout<< *ptr<< endl;
//Write a new value to the address of the old variable
*ptr = 10;
//Read newly stored value.
cout<< *ptr<<endl;
//Proof newly stored value by checking "n"
cout<< n<<endl;



//     char letter ='G';
//     int number = 7;
// print(&number, 'i');
    system("pause>0");
}