#include <iostream>

using namespace std;

int getsum(int a , int b){
    int value = a+ b ;
    return value;
};

int main(){
    // cout<<"Hello world"<<" ";
    // cout<<"Abhinandan"<<endl;
    //float int string a bool true /false char
    int a;
    int b ;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

    cout<< getsum(a,b);
}
