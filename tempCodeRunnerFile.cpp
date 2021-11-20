#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int DecToBase(int base, int n){
    int num=0;
    int quo=n;
    int remainder = 0;
    int i=0;
    
    while (quo != 0) {
    remainder = quo%base;
    quo = quo/base;
//     cout<<remainder<<endl;
// cout<<remainder<<" "<<pow(10,i);
int nm= (remainder * pow(10,i));
       // cout<<nm<<endl;
    num = nm + num;
//     cout<<num<<endl;

    i++;
    }    
    return num;
}
int main(){
//     int n;
//     cin>>n;
//     int base_n = DecToBase(2,n);
    string s = "1111111111111111";
    cout<<s<<endl;
    char arr[s.length()];
    strcpy(arr, s.c_str());
   
    int count = 1;
    int counts=0;
    for (int i=1; i<s.length(); i++) {
      
        if (arr[i]==arr[i-1] && arr[i]=='1') {
        count = count + 1;
        }
        else{
               if(count > counts){
             counts=  count;
               }
               count = 1 ;
        }
       
    }if(counts>count){
    cout<<counts;
    }
    else{
        cout<<count;
    }
    return 0;
}

        // int farr1[sum];