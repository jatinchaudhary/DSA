#include<iostream>
#include<vector>
using namespace std;

bool validParan(string input){
    vector<char> stack;

    for(int i=0;i<input.length();i++){

        if(input[i]=='[' || input[i]=='{' || input[i]=='('){
            stack.push_back(input[i]);
        }else if(stack.size()!=0){
            if(input[i] == ']'){
                if(stack[stack.size()-1] == '['){
                    stack.pop_back();
                }else{
                    return false;
                }
            }
            else if(input[i] == ')'){
                if(stack[stack.size()-1] == '('){
                    stack.pop_back();
                }else{
                    return false;
                }
            } 
            else  if(input[i] == '}'){
                if(stack[stack.size()-1] == '{'){
                    stack.pop_back();
                }else{
                    return false;
                }
            }
            else return false;
        }
        else return false;
    }


return stack.size()==0?true:false;
}

int main(){

    string input = "{{[([])]}";

   cout<< validParan(input);

}