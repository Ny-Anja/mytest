#include <iostream>
#include "ArrayChar.h"

using namespace std;
int ChartoInt(char x);
void PrintArray();
int k=0;
ArrayChar *s = new ArrayChar[10];
int choice;
int main()
{

    while(1){
    cout<<"1- Add a new string"<<endl;
    cout<<"2- Show all added strings"<<endl;
    cout<<"3- Copy a string to another"<<endl;
    cout<<"4- Concatenate 2 strings"<<endl;
    cout<<"5- Reverse a string"<<endl;
    cout<<"6- Find length of a string"<<endl;
    cout<<"7- Get the largest string"<<endl;
    cout<<"8- Get a character in a string by index"<<endl;
    cout<<"9- Change a character in a string by index"<<endl;
    cout<<"10- Get first and last character string"<<endl;
    cout<<"11- Repeat a string for number of times n"<<endl;
    cout<<"12- Add 1 to string characters"<<endl;
    cout<<"13- Subtract 1 from string characters"<<endl;
    cout<<"14- Exit"<<endl;



    cout<<"Choice?";
    cin>>choice;
    if(choice==1){
            string p;
        ArrayChar arr;

        cin>>arr;
        //cout<<arr;
        s[k]=arr;
        cout<<s[k++]<<endl;
    }
    if(choice==2){
        PrintArray();
    }
    if(choice==3){
        PrintArray();
        char c;
        cout<<"Which string to copy?";
        cin>>c;
        ArrayChar word(s[ChartoInt(c)]);
        s[k++]=word;
        cout<<"String copied to another"<<endl;
        PrintArray();
    }
    if(choice==4){

        char a1,b1;
        cout<<"Strings:"<<endl;
        PrintArray();
        cout<<"Which string to concatenate?";
        cin>>a1>>b1;
        ArrayChar x(s[ChartoInt(a1)]);
        ArrayChar y(s[ChartoInt(b1)]);
        ArrayChar word1=x+y;
        s[k++]=word1;
        PrintArray();
    }
    if(choice==5){
        PrintArray();
        cout<<"Which string to reverse?"<<endl;
        char a;
        cin>>a;
        int x=ChartoInt(a);
        s[x]=s[x].Reverse();
        PrintArray();
    }
    if(choice==6){
        PrintArray();
        char a;
        int x;
        cout<<"Which string?";
        cin>>a;
        x=ChartoInt(a);
        cout<<"Length= "<<s[x].Length()<<endl;
    }
    if(choice==7){
        cout<<"The largest string:";
        cout<<s[0].Max.s<<endl;
    }
    if(choice==8){
            char a;
            int x,y;
        PrintArray();
        cout<<"Which string?";
        cin>>a;
        x=ChartoInt(a);
        cout<<s[x]<<endl;
        cout<<"Which index?";
        cin>>y;
        cout<<"Character: "<<s[x][y]<<endl;
    }
    if(choice==9){
        int x,index;
        char a,b;
        PrintArray();
        cout<<"Which string?";
        cin>>a;
        x=ChartoInt(a);
        cout<<"Enter index:";
        cin>>index;
        cout<<"Enter character:";
        cin>>b;
        s[x].ChangeChar(index,b);
        s[x].print();
    }
    if(choice==10){
        char a;
        int x;
        PrintArray();
        cout<<"Which string?";
        cin>>a;
        x=ChartoInt(a);
        cout<<"First character: "<<s[x].First()<<endl;
        cout<<"Last character: "<<s[x].Last()<<endl;
    }
    if(choice==11){
        PrintArray();
        char a;
        int x,y;
        cout<<"Which String?";
        cin>>a;
        x=ChartoInt(a);
        cout<<"How many times?: "<<s[x]<<"*";
        cin>>y;
        s[x]=s[x]*y;
        s[x].print();
    }
    if(choice==12){
            int x;
            char a;
        PrintArray();
        cout<<"Which String?";
        cin>>a;
        x=ChartoInt(a);
        s[x]++;
        cout<<s[x]<<endl;
    }
    if(choice==13){
        int x;
        char a;
        PrintArray();
        cout<<"Which String?";
        cin>>a;
        x=ChartoInt(a);
        s[x]--;
        cout<<s[x]<<endl;
    }
    if(choice==14){
            cout<<"Goodbye!";
            for(int i=0;i<k;i++){
                s[i].~ArrayChar();//delete all added string
            }
            break;}
    }
    return 0;
}
int ChartoInt(char x){
    int asci=int(x);
    return(asci-97);
}
void PrintArray(){
for(int i=0;i<k;i++){
    cout<<char(97+i)<<'-'<<s[i]<<endl;
        }
}

