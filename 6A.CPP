#include<conio.h>
#include<iostream.h>

//friend function
class square{
  public:
  int a,b;
  void sarea(){
   cout<<"enter the egde of square"<<endl;
   cin>>a;
   cout<<"area of square is"<<a*a<<endl;
  }
  friend void rarea(square);
};
void rarea(square s){
  cout<<"area of rectangle"<<s.a*s.b<<endl;
}
void main(){
 square s1;
 s1.sarea();
 rarea(s1);
 getch();
}