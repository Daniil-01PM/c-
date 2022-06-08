#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

bool op(const int& i,const int& k){
  return((i%2==0)&&(i>k));
}

int main(){
  vector<int> v1;
  vector<int>::iterator pos,pos1;
  int count=0,k;
  v1.push_back(3);
  v1.push_back(2);
  v1.push_back(1);
  v1.push_back(0);
  v1.push_back(1);
  v1.push_back(2);

  for(pos=v1.begin();pos!=v1.end();pos++){
    cout<<*pos<<" ";
  }
  pos = find(v1.begin(),v1.end(),0);
  for (pos1=v1.begin();pos1!=pos; pos1++){
    count++;
  }
  cout<<" count ="<<count<<endl;
  cout<<"enter k ";
  cin>>k;
  for(pos=v1.begin();pos!=v1.end();pos++){
    if((*pos%2==0)&&(*pos>k)) cout<<*pos<<" ";
  }
  
    return 0;
}