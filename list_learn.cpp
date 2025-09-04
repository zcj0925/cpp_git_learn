//
// Created by zcj on 2025/9/4.
//
#include "iostream"
#include "list"

using namespace std;

template <typename t>
void print_list(list<t> mylist){
    typename list<t>::iterator iter;
    for(iter =mylist.begin();iter!=mylist.end();iter++){
        cout<<*iter;
    }
    cout<<endl;
}

int main(){
    list<int> l1={1,2,3,4};

    print_list(l1);
}