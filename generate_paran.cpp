#include<iostream>
#include<stack>
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

int gen(vector<string>& input,int len,string ss,int count){
  
  if(count==(len*2)){
    
    if(validParan(ss)){ 
    cout<<ss<<"\n";   
    input.push_back(ss);}
    return 1;
  }

  string a = ss + '(';

  gen(input,len,a,count+1);

  string b = ss + ')';

  gen(input,len,b,count+1);

  return 1;
}

int gen2(vector<string>& input,int len,string ss,int count,int right,int left){
  
  if(count==(len*2)){
    
  //  if(validParan(ss)){ 
    cout<<ss<<"\n";   
    input.push_back(ss);
    return 1;
  }




 if(){
  string a = ss + '(';

  gen2(input,len,a,count+1,right,left);
 }

   if(){
    
  string b = ss + ')';  

  gen2(input,len,b,count+1,right,left);

  }

  
  return 1;
}



vector<string> generate(int input){

  vector<string> list;
  gen2(list,input,"",0,0,0);
  return list;
}


int main(){
    int input = 3;
    vector<string> output = generate(input);

}
