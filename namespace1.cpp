#include<iostream>
using namespace std;
namespace A{
    int a=10;
    void print(){
    cout<<"hello"<<endl;
    }
}
namespace B{
    int a=10;
    void print(){
        cout<<"Hi"<<endl;
    }
}
int main(){
    cout<<A::a<<endl;
    cout<<"A:"<<A::a<<endl;
    cout<<"B:"<<B::a<<endl;
}
