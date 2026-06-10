#include<iostream>
using namespace std;

int getLowBound(int arr[], int n, int target){
    int st = 0; 
    int end = n-1; 
    int ans = -1; 

    while(st<=end){
        int mid = st +(end - st)/2;

        if(arr[mid] >= target){
            ans = mid; 

          end = mid -1; 
        }else{
            st = mid+1; 
        }
    }
    return ans; 
}
int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int target = 45;
    int ans = getLowBound(arr,8,target);
    cout<<"ans: "<< ans<<endl; 
}
