#include<iostream>
using namespace std;
int main(){
    int usrinp=0,isPrime=2;
    bool p;
    cout<<"Enter Number:";
    cin>>usrinp;
    if(usrinp>0){
        for(isPrime;isPrime<=usrinp-1;isPrime++)
        {
          if(usrinp%isPrime==0){
      p=false;
      break;
          }
          else{
            p=true;

          }
        }
    }
    if(p){
        cout<<"Prime Number!";
    }
    else
    {
        cout<<"NOt Prime!";
    }
    return 0;
}
