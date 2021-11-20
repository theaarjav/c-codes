#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    protected:
    int age;
    string name;
    public:
    virtual void getdata(){
        int a;
        cin>>a;
        age = a;
    }
    virtual void putdata(){
        cout<<"age is "<<age;
    }
    
    
};
class Professor : public Person{
    protected:
    int pub;
    static int cur_id;
    public:
    
    void getdata(){
        int a;
        int b;
        string s;
        cin>> s>>a>>b;
        name = s;
        age = a;
        pub = b;
        
    }
    void putdata(){
        cur_id++;
        cout<<name<<" "<<age<<" "<<pub<<" "<<cur_id<<endl;
    }
};
int Professor :: cur_id=0;

class Student : public Person{
    protected:
    // int marks[6];
    int total = 0;
    static int cur_id_s;
    public:
    
    void getdata(){
        int a;
        int b[6];
        string s;
        cin>> s>>a;
        for (int i = 0; i<6;i++){
            cin>>b[i];
            
        }
        name = s;
        age = a;
       
       for (int i = 0; i<6;i++){
            // marks[i] = b[i];
            total = total + b[i];
            
        }
       
    }
    void putdata(){
         cur_id_s++;
        cout<<name<<" "<<age<<" "<<total<<" "<<cur_id_s<<endl;
    }
};
int Student :: cur_id_s=0;
// int main(){
//     Person p;
//     p.getdata();
//     p.putdata();
//         return 0;
// }





int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}