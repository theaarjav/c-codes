#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, j, temp, temp2;
    cin>>n;
    vector<int> num;
    vector<int> que;
    for (int i=0; i<n; i++) {
        // int temp;
    cin>>temp;
    num.push_back(temp);
    }  
   
    cin>>j;
    
     for (int i=0; i<j ;i++) {
        // int z;
         cin>>temp2;
         que.push_back(temp2);
     }
    
     sort(num.begin(),num.end());
      for (int i=0; i<que.size(); i++) {
           bool b = true;
            vector<int> :: iterator low ;
           low =  lower_bound(num.begin(),num.end(),que[i]);
        //    cout<<*(low)<<endl;
           for (int k=0; k<num.size(); k++) {
               if(que[i]==num[k]){
                  
                   
                   cout<<"Yes "<<(low- num.begin()) + 1<<endl;
                   b = false;
                   break;
                   
               }
               
               
           }
           if(b==true){
               cout<<"No "<<(low- num.begin()) + 1<<endl;
           }
      }
    return 0;
}
