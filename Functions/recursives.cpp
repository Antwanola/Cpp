#include<iostream>
using namespace std;

int recursive(int m, int n){
    if( m== n)
    return m;
    
    return m * recursive(m+1, n);
}

int main(){
int m=1, n=6;
// for (int i = m; i <= n; i++)
// {
//     sum+=i;
//     cout <<sum << endl;
// }


cout << "Sum of all is "<<recursive( m, n)<<endl;


    system("pause > 0");
}