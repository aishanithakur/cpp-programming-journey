# include <iostream>
using namespace std;

int factorial(int n){ //defining factorial
  int facto=1;
  for(int i=n; i>=1; i--){
    facto*=i; 
  }
  return facto;
}
int strongNumber(int n){
  int original=n, sum=0, rem; 
while(n>0){
 rem=n%10;
 factorial(rem);
 sum+=factorial(rem);
 n/=10;
}
if(original == sum){
  cout << "Strong Number";
}
else{
  cout << "Not a strong number";
}
return 0;
}
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  strongNumber(n);
  return 0;
}
