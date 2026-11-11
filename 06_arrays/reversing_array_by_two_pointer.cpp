# include <iostream>
using namespace std;

void swapedArray(int a[], int size){
int start=0;         //pointer starting at the beginning of the array
int end= size-1;     // pointer starting at the last element of the array
while(start<end){    //swap till the pointers meet in the middle of array
        swap(a[start], a[end]); //swap first and last indice
        start++;                 //start pointer moves forward by 1 in each loop
        end--;                   //end pointer moves backward by 1 in each loop

    }
}
int main(){
    int size, a[size];
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements of array: ";
    for(int i=0; i<size; i++){
        cin >> a[i];              //loop to take array elements as input from the user
    }
    swapedArray(a,size);          //call the function to reverse the array
    for(int i=0; i<size; i++){    //loop to print the final reversed array
        cout << a[i] << " ";     
    }

return 0;
}
