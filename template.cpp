#include "iostream"
#include "vector"
using namespace std;

vector<int> v1={1,2,3};
vector<int> v2={2,3,4};

template <typename T>
int compare(T T1,T T2){
    if(T1==T2)
        return 0;
    return T1>T2 ? -1:1;
}

template<typename T> T add(T num1,T num2);

template<typename T,typename U>
class num{
private:
        T num1;
        U num2;
public:
        friend T add<T>(T num1,T num2);
};

template<typename T>
T add(T num1,T num2){
    return num1+num2;
}

int main(){
    cout<<add<string>(to_string(v1[2]),string("1"));
    //cout<<add<int>(1,2);
    //cout<<compare<vector<int>>(v1,v2);
}