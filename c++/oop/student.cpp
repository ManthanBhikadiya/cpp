#include <iostream>
using namespace std;

class student{
    public:
        string name;
        int number;
        int grid;
    public:
    student(string name,int number,int grid){
        this->name=name;
        this->number=number;
        this->grid=grid;
    }
    void print(){
        cout<<"name-> "<<this->name<<" number-> "<<this->number<<" grid-> "<<this->grid;
    }
};
int main(){
    student *std=new student("manthan",878037024,9273);

    std->print();
    return 0;
}