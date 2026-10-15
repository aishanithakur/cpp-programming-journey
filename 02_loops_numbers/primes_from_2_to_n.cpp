# include <iostream>
using namespace std;

bool isPrime(int n){
  if(n<2){
    return false; // 1 is not prime.
  }
  for(int i=2; i*i<=n; i++){
    if(n%i==0){
      return false;   //since prime have no divisors except 1 and no. itself
    }
  }
  return true; 
}  

void printPrime(int n){
  for(int i=2; i<=n; i++){
  if(isPrime(i)){      //if isPrime function is true, or the number is prime
    cout << i << endl; 
    }
  }
}
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  printPrime(n);
  return 0;
}
