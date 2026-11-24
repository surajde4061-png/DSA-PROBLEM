// Q1: Given an integer array nums, return true if any value appears at least
// twice in the array, and return false if every element is distinct.



#include<iostream>
using namespace std;
bool dublicateNum(int *nums , int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n ; j++){
            if(nums[i] == nums[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int nums[] = {1 , 2, 3,  4, 1};
    int n = sizeof(nums)/sizeof(int);
    cout<<dublicateNum(nums , n)<<endl;

    return 0;
}