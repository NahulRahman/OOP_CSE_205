#include<iostream>
using namespace std;
class student{
    public:
    int id;
    float cg;
    int batch;
    void ip(){
        cin>>id>>cg>>batch;
    }
    void op(){
        cout<<id<<endl<<cg<<endl<<batch<<endl;
    }
};
int main(){
    student s1;
    s1.ip();
    s1.op();
}
