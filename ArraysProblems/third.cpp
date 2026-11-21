// Reverse an array --> with extra space
#include<iostream>
using namespace std;
void PrintArr(int *arr , int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arr[] = { 5 , 4 , 3 , 9 ,2};
    int n = sizeof(arr)/sizeof(int);
    int copyArr[n];
    for(int i = 0; i < n; i++){
        int j = n - i - 1;
        copyArr[i] = arr[j];
    }
    for(int i = 0; i < n; i++){
        arr[i] = copyArr[i];
    }
    PrintArr(arr , n);
    return 0;
}




// Reverse an Array --> without extra space

#include<iostream>
using namespace std;
void PrintArr(int *Arr , int n){
    for(int i = 0; i < n; i++){
        cout<<Arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arr[]= {5 ,4 , 3 , 9 ,2};
    int n  = sizeof(arr)/ sizeof(int);
    int start = 0 , end = n - 1;
    while(start < end){
        swap(arr[start] , arr[end]);    
    }
    PrintArr(arr , n); 
    return 0;
}
