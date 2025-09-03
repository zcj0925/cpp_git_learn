#include "iostream"

using namespace std;

class animal{
public:
    virtual void speak();
    virtual ~animal(){
        cout<<"animal 类释放"<<endl;
    };
};

class dog:public animal{
public:
    virtual void speak();
    ~dog(){
        cout<<"dog类释放"<<endl;
    }
};

class cat: public animal{
public:
    virtual void speak();
    ~cat(){
        cout<<"cat 类释放"<<endl;
    }
};

void animal::speak() {
    cout<<"动物叫声"<<endl;
}

void dog::speak() {
    cout<<"狗叫"<<endl;
}

void cat::speak() {
    cout<<"猫叫"<<endl;
}

int main(){
    cat *c=new cat;
    animal *a1=c;
    a1->speak();
    c->speak();
    dog *d=new dog;
    animal *a2;
    a2=d;
    a2->speak();
    d->speak();

    //释放基类的虚析构函数来释放派生类的内存
    delete a1;
    delete a2;


}