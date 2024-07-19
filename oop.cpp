//double dimension arary
//#include<iostream>
//using namespace std;

//int main()
//{
  //  int arr[2][2] ={{1,2},{2,3}};
    //cout<<arr[1][1];
    //return 0;
//}


//strings:sequence of characters
//#include<iostream>
//using namespace std;

//int main()
//{
   //string str ="Tasneem";
   //cout<<str<<endl;
  //  return 0;
//}

// methods are prebuilt functions for easier programming
//size of the function

//#include<iostream>
//using namespace std;

//int main()
//{
  // string str2 ="Tasneem";
   //string str1="Vijay";
  // cout<<str2<<endl;
   //cout<<str1<<endl;
   //cout<<str2.size()<<endl;
   //cout<<str1.size();
    //return 0;
//}

//concat of string

//#include<iostream>
//using namespace std;

//int main()
//{
 //string str = "Tasneem";
 //string str1= "Vijay";
 //string marry= str + " " + str1;
 //cout<<marry;
 //return 0;   
//} 


//append method 
//#include<iostream>
//using namespace std;

//int main()
//{
   // string str ="lets upgrade";
    //string str1 ="Hello";
    //string res = str + " " + str1;
  //  cout<<str[1];//return the value at index
//}


//oops(polymorphism,encapsulation,inheritance)
// there are two things in oops ,they are class and object

//#include<iostream>
//using namespace std;

//class Animal{  //animal class created 
 //public:       //access modifiers tell which all properties have the access //by default access modifier is private
                // three types of access modifiers : public,private(can not be used outside class),protected.
// void eat(){ //can create any function

      //  cout<<"I can eat"<<endl;
    //}
    //void sleep(){
    // cout<<"I can sleep";
  //  }
//};//says that class has ended
//int main()
//{
  //Animal dog;//create a object in animal class 
  //dog.eat();//accessing the properties of animal class
  //dog.sleep();

  //return 0;
//}

//consturctor are the first instance that are called when an object is made
//destuctor are the last instance that are called when the object is made 
//#include<iostream>
//using namespace std;

//class Animal{  
// public:
 //Animal() {  //constructor should have same name as the class
   // cout<<"Animal constructor called"<<endl;
 //}      
 //void eat(){ 

      //  cout<<"I can eat"<<endl;
    //}
    //void sleep(){
     //cout<<"I can sleep"<<endl;
    //}
    //~Animal(){  //destructor 
    //    cout<<"Animal destructor called"<<endl;
  //  }
//};
//int main()
//{
  //Animal dog; 
  //dog.eat();
  //dog.sleep();

  //return 0;
//}


//inheritance:inheriting the properties of the parent 
//#include<iostream>
//using namespace std;

//class Animal{  
 //public:
 //Animal() {  //constructor should have same name as the class
   // cout<<"Animal constructor called"<<endl;
 //}      
 //void eat(){ 

      //  cout<<"I can eat"<<endl;
    //}
    //void sleep(){
    // cout<<"I can sleep"<<endl;
    //}
    //~Animal(){  //destructor 
    //    cout<<"Animal destructor called"<<endl;
  //  }
//};
//class Animaltwo : public Animal {
    //public:
    // void bark(){
      //  cout<<"I can bark"<<endl;
    // }
    
  //  }; //new class has been created
//int main()
//{
  //Animaltwo dog; 
  //dog.eat();
  //dog.sleep();
  //dog.bark();
  //  return 0;
//}



//polymorphism: many ways
//#include<iostream>
//using namespace std;

//class Animal{  
 //public:
 //Animal() {  //constructor should have same name as the class
   // cout<<"Animal constructor called"<<endl;
 //}  
 //void eat(){
   // cout<<"I can eat"<<endl;
 //}    
 
//};
//class Animaltwo : public Animal {
    //public:
     //void eat(){
      //  cout<<"I can bark plus i can eat "<<endl;
    // }
    
  //  }; //new class has been created
//int main()
//{
  //Animaltwo dog; 
  //dog.eat();
//  return 0;
//}



//encapsulation:example private constructor cannot be added out side the class but some variables can be accessed using
#include<iostream>
using namespace std;

class Animal{  
 public:
 Animal() {  //constructor should have same name as the class
    cout<<"Animal constructor called"<<endl;
 }      
 void eat(){ 

        cout<<"I can eat"<<endl;
    }
    private:
    void sleep(){
     cout<<"I can sleep"<<endl;
    }
    public:
    void getsleep(){ //trying to access with in the class
        sleep();
    }
    ~Animal(){  //destructor 
        cout<<"Animal destructor called"<<endl;
    }
};
class Animaltwo : public Animal {
    public:
     void bark(){
        cout<<"I can bark"<<endl;
    }
    
}; //new class has been created
int main()
{
  Animaltwo dog; 
  dog.eat();
  dog.getsleep();//cannot directly accessble bcoz of private but we created the void inside itself which help to access.
  dog.bark();
    return 0;
}
