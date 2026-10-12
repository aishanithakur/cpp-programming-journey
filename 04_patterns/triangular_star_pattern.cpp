# include <iostream>
using namespace std;

void starPattern(int n){
int i; int j;
for(i=1; i<=n; i++){
    for(j=1; j<=i; j++){
      cout << "*";
    }
      cout << endl;
    }
}
int main(){
int n;
cout << "Enter n: ";
cin >> n;
starPattern(n);
return 0;
}
