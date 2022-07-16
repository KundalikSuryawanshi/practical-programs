//not using friend function
#include<conio.h>
#include<iostream.h>
 class iarray{
 public:
   int iarray[10];
   int i,n;
   void iaccept(){
   cout<<"how many element you want to insert"<<endl;
   cin>>n;
   cout<<"enter integer array element"<<endl;
   for(i=0;i<n;i++){
    cin>>iarray[i];
   }
   }
   void idisplay(){
   cout<<"enter array is:"<<endl;
   for(i=0;i<n;i++){
    cout<<iarray[i]<<endl;
   }
   }
  friend void iaverage(){
   int itotal,i,n;
    for(i=0;i<n;i++){
    itotal = i+iarray[i]/n;
    }
    cout<<"average of integer array ="<<itotal<<endl;
   }
};
 class farray{
 public:

 float farray[10];
 int n,i;
 void faccept(){
  cout<<"enter how many element you want to insert:"<<endl;
  cin>>n;
  cout<<"enter array element:"<<endl;
  for(i=0;i<n;i++){
  cin>>farray[i];
  }
 }
 void fdisplay(){
  cout<<"enterd array element is"<<endl;
  for(i=0;i<n;i++){
  cout<<farray[i]<<endl;
  }
 }
  friend void faverage(){
  float ftotal;
  ftotal = i + farray[i]/n;
  cout<<"average of float array is = "<<ftotal<<endl;
 }
 };


 void main(){
 clrscr();
 iarray a;
 a.iaccept();
 a.idisplay();
 iaverage();

 farray f;
 f.faccept();
 f.fdisplay();
 faverage();
 getch();
 }
