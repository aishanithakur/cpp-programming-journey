# include <iostream>
using namespace std;
// program to check if number is prime 
bool primeCheck(int n){
if (n<=1){
return false;         //since 1 is neither prime nor composite
}
for(int i=2; i * i <= n; i++){   // checking from 2 
if(n % i==0){
return false;
}
}
return true;
}
int main(){
int n;
cout << "Enter the number: ";
cin >> n;
if (primeCheck(n)) {
        cout << "The number is prime." << endl;
    } else {
        cout << "The number is not prime." << endl;
    }

    return 0;
}




















