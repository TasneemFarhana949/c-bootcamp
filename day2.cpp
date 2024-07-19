// for

#include<iostream>
using namespace std;


//function
//void add_nos(int i,int j){ // declaration
   //int sum =i+j;//parameter
    //cout<<sum<<endl;
//} 
//void means empty nothing not expected to return something
//int main()
//{
      //add_nos(10, 20);//argument&invoke

//if we want void to return something
//int add_no(int i,int j){
    //int sum=i+j;
    //return sum;// if we use anyother method instead of void return keyword is necessary
//}
//int main()
//{
    //int rec_sum = add_no(100,200);
    //cout<<rec_sum;

   // return 0;
//}

    //for(int i=1;i<=100;i++){
      //  cout<<i<<endl;
  //  } // i++ == i=i+1
    
    //while loop
    //int i=1;
    //while(i<=100){
        //cout<<i<<endl;
        //i++;
    //}
    //return 0;
//}


//function overloading
//int add_no(int i,int j){
    //int sum=i+j;
  //  return sum;// if we use anyother method instead of void return keyword is necessary
//}
//int add_no(int i,int j,int k){
    //int sum=i+j+k;
  //  return sum;// if we use anyother method instead of void return keyword is necessary
//}
//int main()
//{
    //int rec_sum = add_no(100,200);
    //int rec_sum2= add_no(100,200,300);
    //cout<<rec_sum<<endl;
    //cout<<rec_sum2;
  // return 0;

//memory two types stck ,heap 
// pointers are variable which stores the address of another variable
 //int main()
//{
 
 //int i=10;
 //int j=20;
//int *r=&j;
 //int *var = new int;// pointer
 //*var = i;//pointer storing the address of i
 //cout<<var<<endl;
//delete var;

//}


//arrays
//int main()
//{
    //int arr[4] ={1,2,3,4};
   // cout<<arr[2];//index number returns the value at the index
   //if we want to print all the values of the array
  //for(int i=0;i<4;i++){
    //cout<<arr[i]<<endl;
  //}
//}

// if you want to pass a function to array 
void fn(int arr[]){
     cout<<arr[2];
}
int main()
{
    int arr[4] ={1,2,3,4};
  fn(arr);
}
