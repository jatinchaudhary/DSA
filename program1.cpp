// 1328. Break a Palindrome


#include<iostream>
#include<string>

using namespace std;

string fun(string str){

if(str.length()==1)
    return "";

  for(int i=0;i<(str.length())/2;i++){
    if(str[i]!='a'){
      str[i]='a';
      return str;
    }
  }

    str[(str.length()-1)] = 'b';

return str;


}
 


int main(){

string str;

cin>>str;

cout<<fun(str);

return 0;   
}