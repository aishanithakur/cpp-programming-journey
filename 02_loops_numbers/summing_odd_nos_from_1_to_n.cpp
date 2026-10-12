# include <iostream>
using namespace std;

int sumOdd(int n){
  int sum=0;
  for(int i=1; i<=n; i++){
    if(i%2!=0){
      sum+=i;
    }
  }
  return sum;
}
int main(){
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  cout << "The sum of odd number from 1 to " << n << "is: " << sumOdd(n) << endl;

  return 0;
}
