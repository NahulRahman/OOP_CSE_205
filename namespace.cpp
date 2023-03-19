#include<iostream>
using namespace std;

namespace employee1{
    void print(){
        cout<<"Hello world"<<endl;
    }
}

namespace employee2{
    void print(){
        cout<<"hello"<<endl;
    }
}
int main(){
    employee1::print();
    employee2::print();
}

