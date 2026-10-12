# include <iostream>
using namespace std;

void butterfly(int n){
    int i; int j;
    //top
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout << "*";  //stars
        }
        if(i!=n){
            for(j=(n-i)*2; j>=1; j--){
                cout << " ";  //spacing
            }
        }
         for(j=1; j<=i; j++){
            cout << "*";   // stars
    }
    cout << endl;
}
// bottom
for(i=1; i<=n; i++){
    for(j=n; j>=i; j--){
        cout << "*";  //stars
    }
    if(i!=1){
        for(j=1; j<=(i-1)*2; j++){
            cout << " ";  //spacing
        }
    }
        for(j=n; j>=i; j--){
           cout << "*";  //stars
    }
    cout << endl;
}
    }
int main(){
    int n;
    cout << "Enter number: ";
    cin >>n;
butterfly(n);    //invoking function 
return 0;
}

