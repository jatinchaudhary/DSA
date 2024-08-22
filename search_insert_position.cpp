#include<iostream>
#include<vector>
using namespace std;


    int searchInsert(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size()-1;
        int mid  = 0;
        cout<<start<<" - "<<end<<endl;

        while(start<=end){

            cout<<"Step : "<<start<<" - "<<end<<endl;
            if(end == start){
                if(target>nums[end])
                return end+1;
                else
                return end;
            }
            else{
                mid = (end+start)/2;

                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]>target){
                    end = mid-1;

                    if(end<start){
                if(target>nums[start])
                return start+1;
                else
                return start;                        
                    }
                }
                else{
                    start = mid+1;

                if(end<start){
                if(target>nums[end])
                return end+1;
                else
                return end;                        
                    }                    
                }
            }
           
        }

        return 0;
        
    }


int main(){
vector<int> input  = {1,3,5,6};
int target = 2;


cout<<searchInsert(input,target);

return 0;
}
