#include<string.h>
#ifndef ARRAYCHAR_H
#define ARRAYCHAR_H
#include <iostream>
using namespace std;
struct IntChar{
int x;
char *s;
};
class ArrayChar
{
    private:
        int Arraysize;
        char *p;

    public:
        ArrayChar();
        ArrayChar(int x);
        ArrayChar(char* s
                  );
        ArrayChar(const ArrayChar &obj);
        static IntChar Max;
        void print() const;
        int Length()const{return Arraysize;};
        string GetString(){
            string s=(string)p;
                return s;
            }
        void setArraysize(int x){Arraysize=x;}
        char First(){return p[0];}
        char Last(){return p[Arraysize-1];}
        ArrayChar operator++(int);
        ArrayChar operator++();
        ArrayChar operator--(int);
        ArrayChar operator--();
        char operator[](int x){return p[x];}
        ArrayChar operator+(const ArrayChar &obj)const{
            ArrayChar temp;
            temp.Arraysize=Arraysize+obj.Arraysize;
            temp.p=new char[temp.Arraysize];
            temp.p=strcat(p,obj.p);
                if(temp.Arraysize>Max.x){
                Max.x=temp.Arraysize;
                Max.s=temp.p;
                }
            return temp;
        }

        ArrayChar operator*(int x){
            ArrayChar temp;
            int j=0;
            temp.Arraysize=x*Arraysize;
            temp.p=new char[temp.Arraysize];
        for(int i=0;i<temp.Arraysize;i++){
            temp.p[i]=p[j++];
            if(j==Arraysize) j=0;
        }
        return temp;
        }
        ArrayChar Reverse(){
            int i;
            ArrayChar temp(Arraysize);
            int Size=temp.Arraysize;
            temp.p=new char[Arraysize];
            for(i=0;i<Arraysize;i++){
                temp.p[i]=p[Size-1-i];
            }
            temp.p[i]='\0'; //so that the reversed string ends with '\0'
            return temp;
        }
        void ChangeChar(int index,char c){
            p[index]=c;
        }
        friend ostream& operator<<(ostream&os,const ArrayChar &arr);

        friend istream& operator>>(istream&is, ArrayChar &arr);
        virtual ~ArrayChar();




};

#endif // ARRAYCHAR_H
