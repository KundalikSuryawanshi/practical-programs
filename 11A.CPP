#include<iostream.h>
#include<conio.h>

class myarray{
 public:
 int *a,i,n;
 void get(){
  cout<<"how much element you want to stored"<<endl;
  cin>>n;
  cout<<"enter array element"<<endl;
  for(i=0;i<n;i++){
   cin>>a[i];
  }
 }
 void display(){
 cout<<"enter elements is:"<<endl;
 for(i=0;i<n;i++){
 cout<<a[i]<<endl;
 }
 }
};

void main(){
 clrscr();
 myarray arr;
 arr.get();
 arr.display();
 getch();
}