#include <iostream>
#include <conio.h>
using namespace std;
class sample{
private:
int a, b;
public:
void setData(){
a=20;
b=40;
}
friend float mean(sample s); //Friend function
};
float mean(sample s){
return float(s.a+s.b)/2;
}
int main(){
sample s;
s.setData();
cout<<"Mean of two numbers="<<mean(s);
getch();
return 0;
}
