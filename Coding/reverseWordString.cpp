#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// create a funtion for revserse the Word String
string reverseString(string str){
     // inbuild function
     reverse(str.begin(),str.end());
     // inseert the space at end
     str.insert(str.end(),' ');
     int j=0;
      for(int i=0;i<str.length();i++){
        if(str[i]== ' '){
             reverse(str.begin()+j,str.begin()+i);
           j=i+1;
        }
       
      }
       //str.pop_back();
      //remove the space at end of the 
     return str;
}
int main(){
    string str=" I Like Watching cricket";
    string rev=reverseString(str);
    cout << rev;
    

    
}