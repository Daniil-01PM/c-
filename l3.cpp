#include<iostream>
#include<set>
using namespace std;


int main()
{
    multiset<int> mySet = {0, 1, 1,1 ,1, 1, 1, 5, 7, 8, 3, 22, 7, 7, 7, 7, 22, 22, 22};

   auto a = mySet.begin();
   int n, k;

   while (a != mySet.end())
   {
       k = 0;
       n = *a;

       for (auto i = a; i != mySet.upper_bound(n); i++)
       {
           k++;
       }
    
    a = mySet.upper_bound(n);
    cout<< "Item " << n <<" - " << k-1 << " times" << endl;



   }
   
    
    return 0;
}