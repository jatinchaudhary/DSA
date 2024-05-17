#include<iostream>
#include<vector>
#include<string>
using namespace std;


string cal_long_com_pref(vector<string>& input){

int min_input_length = input[0].length();

for(int i=0;i<input.size();i++){
    if(input[i].length()<min_input_length)
        min_input_length = input[i].length();
}


bool match_all = true;
int global_index = 0;

for(;global_index<min_input_length;global_index++){
    for(int index = 0 ; index<input.size();index++){
        if(input[index][global_index]!=input[0][global_index]){
            match_all = false;
            break;
        }
    }
    if(!match_all){
        break;
    }
}

return global_index==0?"":input[0].substr(0,global_index);

}

int main(){

vector<string> input = vector<string>{"flower","flow","flight"};\

cout<<cal_long_com_pref(input);


}