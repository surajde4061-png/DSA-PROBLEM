// Question -> There is an integer arrays nums sorted in ascending order(with distinct values).


#include<iostream>
using namespace std;
int binarySearch(int *nums , int n , int key){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = (start + end)/2;
        if(nums[mid] == key){
            return mid;
        }else if(nums[mid] > key){
            return mid + 1;
        }else{
            return mid - 1;
        }
    }
    return -1;
}

int main(){
    int nums[] = {4 , 5 , 6 , 7 , 0 , 1 , 2};
    int n = sizeof(nums)/sizeof(int);
    cout<<binarySearch(nums , n , 0);


    return 0;
}