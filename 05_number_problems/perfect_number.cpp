# include <iostream>
using namespace std;

bool divisor(int n, int i){
  if(n%i==0){
    return true;
  }
return false;
}

void perfectNumber(int n){
  int sum=0;
    for(int i=1; i<n; i++){
      if(divisor(n, i)){
     sum+=i;
    }
  }
  if( sum==n){
    cout << "Perfect Number";
  }
  else{
    cout << "Not a perfect number";
  }
}
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  perfectNumber(n);
  return 0;
}
