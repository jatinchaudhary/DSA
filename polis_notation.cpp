#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;


int evaluate(vector<string> input){

    stack<int> st;
    int num1,num2;

for(int i=0;i<input.size();i++){

    if(input[i] == "+" || input[i] == "-" || input[i] == "*" || input[i] == "/"){
       num2 = st.top();
       st.pop();
       num1 = st.top();
       st.pop();
       cout<<num1 <<" - "<<num2;

       if(input[i] == "+"){
        st.push(num1+num2);
       }
       else 
       if(input[i] == "-"){
        st.push(num1-num2);
       }
       else 
       if(input[i] == "*"){
        st.push(num1*num2);
       }
       else 
       if(input[i] == "/"){
        st.push(num1/num2);
       }

    
    }
    else{
        st.push(stoi(input[i]));
    }
}
return st.top();
}

int main(){
    vector<string> input  = {"4","13","5","/","+"};

    cout<<evaluate(input);
}