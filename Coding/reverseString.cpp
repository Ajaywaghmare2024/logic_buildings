// simple one word reverse string
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 string str="I like cricket";

  // using inbuild function of revserse
  reverse(str.begin(),str.end());

  cout<<str;
  return 0;
}