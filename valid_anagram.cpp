#include<iostream>
#include<unordered_map>
using namespace std;


bool check_anagram(string a,string b){

  if(a.size()!=b.size())
  return false;

  unordered_map<char,int> map_a,map_b;

  for(int index=0;index<a.size();index++){

    if(map_a.find(a[index])==map_a.end()){
        map_a.insert({a[index],1});
    }
    else{
        map_a[a[index]]= map_a[a[index]]+1;
    }

    
    if(map_b.find(b[index])==map_b.end()){
        map_b.insert({b[index],1});
    }
    else{
          map_b[b[index]]= map_b[b[index]]+1;
    }
  }

for(auto i = map_a.begin();i!=map_a.end();i++){
cout<<i->first<<"-"<<i->second;
}


for(auto i = map_b.begin();i!=map_b.end();i++){
cout<<i->first<<"-"<<i->second;
}



  if(map_a.size()!=map_b.size())
  return false;


  for(auto i = map_a.begin();i!=map_a.end();i++){

    if( !(map_b.find(i->first)!=map_b.end() && map_b[i->first]==i->second )){
        return false;
    }
  }
return true;
}

int main(){

    string a = "aacc";
    string b = "acaa";

    cout<<check_anagram(a,b);

}
