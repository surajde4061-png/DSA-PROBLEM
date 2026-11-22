
//--> Print Subrarry <--       -->Time Complexity = O(n3)<--
#include<iostream>
using namespace std;
void printSubArray(int *arr , int n){
    for(int start = 0 ; start < n ; start++ ){
        for(int end = start; end < n; end++){
            for(int i = start; i <= end; i++){
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}
int main(){
    int arr[] = {1 , 2 , 3 , 4 , 5};
    int n = sizeof(arr)/sizeof(int);
    printSubArray(arr , n);
    return 0;
}
//--> Brute Force Approach <--     -->Time Complexity = O(n3)<--
#include<iostream>
using namespace std;
void maxSubarraySum(int *arr , int n){
    int maxSum = INT16_MIN;
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int currSum = 0;
            for(int i = start; i <= end; i++){
                currSum += arr[i];
            }
            cout<<currSum<<",";
            maxSum = max(maxSum , currSum);
        }
        cout<<endl;
    }
    cout<<"maximumm Subarray Sum =" <<maxSum<<endl;
}
int main(){
    int arr[] = {2 , -3 , 6 , -5 , 4 , 2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum(arr , n);
    return 0;
}

// Max Subarray Sum --> Slightly Optimized <--     --> Time Complexity = O(n2)<--


#include<iostream>
using namespace std;
void maxArraySum2(int *arr , int n){
    int maxSum = INT16_MIN;
    for(int start = 0; start < n; start++){
        int CurrSum = 0;
        for(int end = start; end < n; end++){
            CurrSum +=  arr[end];
            maxSum = max(maxSum , CurrSum);

        }
        cout<<endl;
    }
    cout<<"maximum Subarray sum = "<<maxSum<<endl;
}
int main(){
    int arr[] = {2 , -3 , 6 , -5 , 4 , 2};
    int n = sizeof(arr)/sizeof(int);
    maxArraySum2(arr , n);
    return 0;
}

//<--  KADANE'S ALGORITHM -->     --> Time Complexity = O(n) <---
#include<iostream>
using namespace std;
void maxSubarraySum3(int *arr , int n ){
    int maxSum = INT16_MIN;
    int currSum = 0;
    for(int i = 0; i < n ; i++){
        currSum += arr[i];
        maxSum = max(maxSum , currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"maximum SubarraySum = "<<maxSum<<endl;
}    
int main(){
    int arr[] = {2 , -3 , 6 , -5 , 4 , 2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum3(arr , n);

    return 0;
}
