# include <iostream>
using namespace std;

int sumDigits(int n){
  int rem; int sum=0;
  while(n>0){
    rem=n%10;
    n/=10;
    sum+=rem;
  }
  return sum;
}
int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  cout << "The sum of digits of " << n << " is: " << sumDigits(n) << endl;
  return 0;
}
