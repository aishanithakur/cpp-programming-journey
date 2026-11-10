# include <iostream>
using namespace std;

int countEven(int a[], int size){
    int countEv=0;               //initialised countev to 0
    for(int i=0; i<size; i++){
        if(a[i]%2==0){           //array element is even
            countEv++;           //countev will increase by 1 each time element is even
        }
    }
    return countEv;             //function yields countev
}
int countOdd(int a[], int size){
    int countodd=0;              //initialised countodd to 0
    for(int i=0; i<size; i++){
        if(a[i]%2!=0){          //array element is odd
            countodd++;         //countodd will increase by 1 each time element is odd
        }
    }
    return countodd;           // //function yields countodd
}
int main(){
    int size, a[size];
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements of array: ";
    for(int i=0; i<size; i++){     //loop is run to input elements of array
        cin >> a[i];
    }
    cout << "Number of odd elements: " << countOdd(a,size) << endl;     //invoking countodd function
    cout << "Number of even elements: " << countEven(a, size) << endl;  // //invoking counteven function
return 0; 
}
