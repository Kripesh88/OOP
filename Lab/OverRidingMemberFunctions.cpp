#include<iostream>
#include<conio.h>
using namespace std;
class Parent{
public:
void show(){
cout<<"This is class Parent."<<endl;
}
};
class Child: public Parent{
public:
void show(){
cout<<"This is class Child."<<endl;
}
};
int main(){
Child c;
c.show(); 
c.Parent::show();
getch();
return 0;
}

