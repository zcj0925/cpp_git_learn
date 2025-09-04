#include "iostream"
#include "vector"

using namespace std;



int main(){
    vector<int> v1={1,2,3};
    //v1.assign(2,3);
    v1.reserve(3);
    vector<int>::iterator pos;
    pos =v1.begin();
    cout<<*pos<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    cout<<"capacity="<<v1.capacity()<<endl;
    cout<<"size="<<v1.size()<<endl;


}