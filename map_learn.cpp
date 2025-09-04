#include "iostream"
#include "map"

using namespace std;

void print_m(map<char,int> m){
    pair<char,int> p;
    auto iter=m.begin();
    for(iter;iter!=m.end();iter++){
        p=*iter;
        cout<<p.first<<"->"<<p.second<<endl;
    }
};

int main(){
    map<char,int> m1;
    pair<map<char,int>::iterator ,bool> p;
    p=m1.insert(std::pair<const char, int>('a', 1));
    if(p.second)
        cout<<"insert success"<<endl;
    m1.insert(pair<const char,int>('b',2));
    print_m(m1);
}