#include<iostream>
#include<vector>
using namespace std;



void merge(vector<int>& arr, int p, int q, int r) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  vector<int> L = vector<int>(n1,0), M = vector<int>(n2,0);

   

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k; 
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(vector<int>& arr, int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}



vector<int> twoSum(vector<int>& nums,int target){

mergeSort(nums,0,nums.size());

//for(int i=0;i<nums.size();)

for(int i=nums.size()-1;i>-1;i--){
    cout<<'*';

    for(int j=0;j<i;j++){

        if(target == (nums[i]+nums[j])){
            cout<<nums[i]<<'-'<<nums[j]<<'\n';
            return vector<int>{i-1,j-1};
        }
    }

}

}


int main(){

int a = 0;
vector<int> arr = {17,0,4,15,7,5,3};

cout<<"Enter the value";

vector<int> res = twoSum(arr,9);


for(int i=0;i<res.size();i++){
    cout<<res[i];
}

return 0;
} 