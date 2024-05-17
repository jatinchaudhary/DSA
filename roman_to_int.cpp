#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<char,int> roman_mapper= {
    {'I', 1},
    {'V' , 5},
    {'X' , 10},
    {'L' , 50},
    {'C' , 100},
    {'D' , 500},
    {'M' , 1000}
    };

int roman_to_int(string input){
 


 int result = 0;



 for(int index = (input.length()-1); index>=0 ; index--){
   
    if( index!=0 && ( ( roman_mapper.find(  (input[index]) )->second ) > (roman_mapper.find( input[index-1])->second)) ) {
      result += ( ( roman_mapper.find(  (input[index]) )->second ) - (roman_mapper.find( input[index-1])->second));
      index--;
    }
    else{
           result +=  ( roman_mapper.find(  (input[index]) )->second );
    }
}
return result;
}

int main()
{
    string input;
    cin>>input;

    cout<<roman_to_int(input);

}