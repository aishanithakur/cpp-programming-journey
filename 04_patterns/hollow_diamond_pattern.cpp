# include <iostream>
using namespace std;

void hollowDiamond(int n){
    int i; int j; 
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
        cout << " ";          //spaces 
    }
    cout << "*";              //stars

    
    if(i!=1){
        for(j=1; j<=(2*i)-3; j++){
            cout << " ";         //spaces
        }
        cout << "*";            //stars
    }
    cout << endl;              //top half ends here
}
    //bottom
    for(i=1; i<=n-1; i++){
        for(j=1; j<=i; j++){
            cout << " ";       //spaces
        }
        cout << "*";          //stars  
    
    if(i!=n-1){
        for(j=2*(n-i)-3; j>=1; j--){
            cout << " ";         //spaces
        }
        cout << "*";             //stars
    }
    cout << endl;               //bottom half ends here
}
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    hollowDiamond(n);
    return 0;
}
