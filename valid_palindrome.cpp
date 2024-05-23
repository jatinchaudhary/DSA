#include<iostream>
using namespace std;

string filterInput(string input){
    string res="";

    for(int index=0;index<input.length();index++){
        if(int(input[index])>=97 && int(input[index])<=122){
            res+= char(int(input[index])-32);
        }
        else if(int(input[index])>=65 && int(input[index])<=90){
            res+=input[index];
        }
         else if(int(input[index])>=48 && int(input[index])<=57){
            res+=input[index];
        }
        else{
            continue;
        } 
    }
    return res;
}

bool isPalindrome(string input){
    input = filterInput(input);

    for(int i=0;i<input.length()/2;i++){

        if(input[i]==input[input.length()-1-i])
        {
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}


int main(){
    string input="";

    cout<<isPalindrome(input);
}