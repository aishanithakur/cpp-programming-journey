# include <iostream>
using namespace std;

int facto(int n){
  int fact=1;        // Initialize factorial to 1
    // Multiply numbers from n down to 1
  for(int i=n; i<=n; i--){   
    fact*=i;
    }
    return fact;
}
int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  cout << "The factorial of " << n << " is: " << facto(n) << endl;
  return 0;
}
