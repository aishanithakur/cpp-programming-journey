# include <iostream>
using namespace std;

int largestElement(int a[], int size){
    int largest=INT_MIN;        //minimum value (-2147483648) is assigned as largest
    for(int i=0; i<size; i++){
        if(a[i]>largest)        //if element is larger than largest, then largest is updated each time in loop
        largest=a[i];           
    }
    return largest;            //loop ends and function yields largest element
}

int smallestElement(int a[], int size){
    int smallest=INT_MAX;       //maximum value (+2147483648) is assigned as smallest
    for(int i=0; i<size; i++){
        if(a[i]<smallest)       //if element is smaller than smallest, then smallest is updated each time in loop
        smallest=a[i];
    }
    return smallest;          //loop ends and function yields smallest element
}
int main(){
    int size, a[size];
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements of array: ";
    for(int i=0; i<size; i++){   //loop is run to input elements of array
        cin >> a[i];
    }
    cout << "The largest element of array is: " << largestElement(a, size) << endl;  //fun is invoked
    cout << "The smallest element of array is: " << smallestElement(a, size) << endl; //fun is invoked
    
return 0;
}
