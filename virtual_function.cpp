#include "iostream"

using namespace std;

class animal{
public:
    virtual void speak();
    virtual ~animal(){
        cout<<"animal ���ͷ�"<<endl;
    };
};

class dog:public animal{
public:
    virtual void speak();
    ~dog(){
        cout<<"dog���ͷ�"<<endl;
    }
};

class cat: public animal{
public:
    virtual void speak();
    ~cat(){
        cout<<"cat ���ͷ�"<<endl;
    }
};

void animal::speak() {
    cout<<"�������"<<endl;
}

void dog::speak() {
    cout<<"����"<<endl;
}

void cat::speak() {
    cout<<"è��"<<endl;
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

    //�ͷŻ�����������������ͷ���������ڴ�
    delete a1;
    delete a2;


}