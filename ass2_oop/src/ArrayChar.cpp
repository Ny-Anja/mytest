#include "ArrayChar.h"
#include <iostream>

//initialize static variable Max
IntChar ArrayChar::Max={0};
//default constructor
ArrayChar::ArrayChar()
{
    // default ctor
}
//constructor int parameter
ArrayChar::ArrayChar(int x){
Arraysize=x;
p=new char[Arraysize];
if(Arraysize>Max.x){
    Max.x=Arraysize;
    Max.s=p;
}
}

//constructor string parameter
ArrayChar::ArrayChar(char* s){
    Arraysize=0;
    Arraysize=strlen(s);
    p=new char[Arraysize];
    for(int i=0;i<=Arraysize;i++) p[i]=s[i];
    if(Arraysize>Max.x){
    Max.x=Arraysize;
    Max.s=p;
}
}
//copy constructor
ArrayChar::ArrayChar(const ArrayChar &obj){
    Arraysize=obj.Arraysize;
    p=new char[Arraysize];
    for(int i=0;i<Arraysize;i++) p[i]=obj.p[i];
}

//print word
void ArrayChar::print()const{
for(int i=0;i<Arraysize;i++) cout<<p[i];
cout<<endl;
}
//operator ++
ArrayChar ArrayChar::operator++(int){
            ArrayChar temp(p);

            for(int i=0;i<=Arraysize;i++){
              temp.p[i]=p[i];

            }
            for(int i=0;i<Arraysize;i++){
                p[i]++;
            }
            return temp;

}
ArrayChar ArrayChar::operator++(){
    for(int i=0;i<Arraysize;i++)
        p[i]++;
    return*this;
}
ArrayChar ArrayChar::operator--(int){
    ArrayChar temp(p);
    for(int i=0;i<Arraysize;i++){
        p[i]--;
    }
    return temp;
}
ArrayChar ArrayChar::operator--(){
    for(int i=0;i<Arraysize;i++){
        p[i]--;
    }
    return *this;
}
ostream & operator<<(ostream & os, const ArrayChar &arr){
    string s;
    s=(string)arr.p;
    os<<s;
    return os;
}

istream& operator>>(istream&is, ArrayChar &arr){
    cout<<endl<<"Enter string size:";
    is>>arr.Arraysize;

    arr.p=new char[arr.Arraysize];
    cout<<endl<<"Enter string:";
    is>>arr.p;
    return is;
}
ArrayChar::~ArrayChar()
{
    delete[]p;
    //dtor
}
