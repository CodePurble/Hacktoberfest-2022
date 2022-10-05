#include<iostream>
using namespace std;

template <class T>
class add{
    public:
        T first;
        T second;
        add(T a, T b){
            first=a;
            second=b;
        }
        void result(){
            cout<<"\nGeneral Result is: " <<first+second <<endl;
        }
};

template<>
class add<char>{
    public:
        char first;
        char second;
        add(char a, char b){
            first=a;
            second=b;
        }
        void result(){
            cout<<"\nCharacter Result is: " <<first <<second <<endl;
        }
};

int main(){
    
    add<int> number(1,3);
    number.result();

    add<char> character('p', 'k');
    character.result();
    

    return 0;
}