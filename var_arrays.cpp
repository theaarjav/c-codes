#include<iostream>
using namespace std;

int main(){
    
    long i,j;
   
// cout<<"enter size of your arrays"<<endl;
     cin>>i>>j;
 int num_array[i];
//  int main_arr[i][int(100000/i)];
 int arrnum[i+1];
arrnum[0]=0;
int sum = 0;
int farr1[10000];
 int temp;
    for (int x=0;x<i;x++){
        // cout<<"enter elements for array with index "<<x<<endl;
        cin>>num_array[x];
         temp = sum;
        sum = sum + num_array[x];
        // int farr1[sum];
        
        
        for(int y=0;y<num_array[x];y++){
            cin>>farr1[y+temp];
            // cout<<y+temp<<endl;
            // cout<<num_array[x]<<","<<y<<endl;
        }
        
        arrnum[1+x] = num_array[x];
        // cout<<x<<arrnum[1+x]<<endl;

    }
    
       
    // for(int a = 0;a<num_array[0];a++){
    //     cout<<main_arr[0][a]<<endl;
    // }
    int index[j];
    int sub_index[j];
    int out[j];
                // int out_arr[j][2];
                // for(int a = 0;a<j;a++){
                //     cin>>out_arr[j][0]>>out_arr[j][1];
                // }
            
                // for(int w=0;w<j;w++){
                //     cout<<farr1[(arrnum[out_arr[j][0]])+out_arr[j][1]]<<endl;
                // }

    // cout<<"enter queries";
    
        for(int q=0;q<j;q++){
          cin>>index[q]>>sub_index[q];
    out[q]=arrnum[index[q]]+ sub_index[q];
     cout<<farr1[out[q]];
        }
      for(int q=0;q<j;q++){
         
    // out[q]=arrnum[index[q]]+ sub_index[q];
        }
    
    
    
    // for(int w=0;w<j;w++){
    //    cout<< arr[5];
    // }
    return 0;
}
