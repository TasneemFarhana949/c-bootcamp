//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;

//int main()
//{
  //  string st =" LETSUPGRADE";//text that is being transferred
    //string st2;
    //ofstream out("sample.txt");  //(transfering text to sample file which we created)
    //out<<st;   //statement to transfer
    //ifstream in("sample2.txt");
   // in >> st2;// takes only first string of the sentence to print
   //getline(in,st2);//prints the whole sentence
    //cout<<st2;
   // return 0 ; 

//}
//header file is an external file which is not you program



//STL standarad template library(pre defined functions include in data structures)
//vector (in array the size will always be fixed so to counter this drawback we have vectors,as they are dynamic in nature)
//#include<iostream>
//#include<bits/stdc++.h>
//#include<vector>
//using namespace std;

//int main()
//{
  //  vector<int> v1;//syntax to create vector
    //v1.push_back(10);
   // v1.push_back(20);
    //v1.push_back(30);
    //v1.push_back(40);
    //v1.push_back(50);
    //v1.push_back(60);
    //v1.push_back(70);
    //v1.push_back(80);// pushes into vector 
    //v1.push_back(90);

    //v1.pop_back();//pop out value in vector
    //v1.pop_back();

    //sort(v1.begin(),v1.end());
    //for(int i=0;i<v1.size();i++){
      //  cout<<v1[i]<<" ";//gives space 
    //}
    //return 0;
//}
 // if you want to clear the values we can use v1.clear();

 //Another stl MAP datastructure //Map is a structure that stores key and values

//#include<iostream>
//#include<bits/stdc++.h>
//#include<map>
//using namespace std;

//int main()
//{
    
  // map<string,int>mp;
   //mp["Ritik"]=98;
   //mp["Dinesh"]=58;
   //mp["sam"]=2;


   //cout<<mp["sam"];

//     map<string,int> :: iterator itr;//iterator
  //   for(itr=mp.begin();itr!=mp.end();itr++){
    //    cout<<(*itr).first <<" " << (*itr).second<<endl;// as there is no indexing here we are using iterator so that can store the mapping with respective
     //}

    //return 0;
//}


//SET   datatype is dynamic but doesnot have any KEY value and can only store unique  values 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
   set<int>st;
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(10); // trying to give duplicate values ,as set doesnot accept duplicate values(in result we will get only unique values not duplicate)
    set<int>:: iterator itr;
    for(itr=st.begin();itr!=st.end();itr++){
        cout<<(*itr)<<" ";
    }
    return 0;
}

//the interesting usecase of set is to prevent any duplicate entries
//used in banks and students unique ID
