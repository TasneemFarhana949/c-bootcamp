// we may have bugs during coding so handling the bugs is called exceptional handling
//catch and throw can be used when ourself want to handle error
//if and else would be same as catch and throw but if and else would show error but try and catch would be in our hand saying what to print when error happens
#include<iostream>
using namespace std;

int main()
{
   int age =25;
   //tri block gives you the flexibility to try out things
  try{
    if(age>=24){
        cout<<"you have the access to apply to DL driving license" ; 
    }
    else{
        throw(age);
    }
  return 0;
  }
  catch(int age){
    cout<<"you are not eligible to apply for driving license ";
  }
  return 0;
}