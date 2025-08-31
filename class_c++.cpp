#include "iostream"
#include "string"
#include "cstring"

using namespace std;

class Sheep{
public:
    Sheep(){
        sheep_name="default_sheep";
        sheep_color= "default_color";
    }
    Sheep(string name,string color){
        sheep_name=name;
        sheep_color=color;
    }
    void sheep_call(){
        cout<<"my name is "<<sheep_name<<endl;
        cout<<"my color is "<<sheep_color<<endl;
    }

    //拷贝函数，传入的值是另外一个对象
    Sheep(const Sheep& anothter){
        sheep_name=anothter.sheep_name;
        sheep_color=anothter.sheep_color;
    }

private:
    string sheep_name;
    string sheep_color;
};

class student{
public:
    student(const char *name,int age){
        int len= strlen(name)+1;
        student_name=new char[len];
        strcpy(student_name,name);
        student_age=age;
    }
    void show(){
        cout<<student_name<<endl;
        cout<<student_age<<endl;
    }
private:
    char *student_name;
    int student_age;
};

int main(){
//    Sheep s("zzz","white");
//    s.sheep_call();
//    Sheep s1;
//    s1.sheep_call();
//    Sheep s2(s);
//    s2.sheep_call();
    const char *name="zhang";
    student s(name,25);
    s.show();
    student s1(s);//浅拷贝
    s1.show();
}