#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i <= n - 1; i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i = 0; i <= n - 1; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"largest number of an array:"<<" "<<max<<endl;
    return 0;
}