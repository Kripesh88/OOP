#include <iostream>
#include <conio.h>
using namespace std;
class A {
private:
int x;
public:
A() { a = 0; }
friend class B; // Friend Class
};
class B {
private:
int b;
public:
void show(A a)
{
// Since B is friend of A, it can access private members of A
cout << "Private member of class A accessed from friend class B: " << a.x;
}
};
int main()
{
A a;
B b;
b.show(a); 
getch();
return 0;
}
