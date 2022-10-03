#include<iostream>
using namespace std;

class A{
    public:
        int *ptr;
        ~A(){
            cout<<"\n\nDestructor called." <<endl;
            delete ptr;                    // we are specifying delete in destructor, so when A's object is deleted
        }                                  // space allocated for ptr will also get deleted
};

void fun(){
    A alpha;
}

int main(){

    // A *alpha=new A;  

    // cout<<"\nBefore Deleting alpha" <<endl;
    // delete alpha;
    // cout<<"\nAfter Deleting alpha" <<endl;




    return 0;
}