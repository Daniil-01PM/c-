#include <iostream>
#include <set>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  set<int> s1,s2,srez;
  s1.insert(1);
  s1.insert(2);
  s1.insert(3);
  s1.insert(4);
  
  s2.insert(3);
  s2.insert(4);
  s2.insert(5);
  s2.insert(6);

  for(set<int>::iterator pos=s1.begin();pos!=s1.end();pos++){
    if(s2.find(*pos)!=s2.end()) srez.insert(*pos);
  }
  for(set<int>::iterator pos=srez.begin();pos!=srez.end();pos++){
    cout<<*pos<<" ";
  }
    return 0;
}