/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="Virat is batsman";
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;

}*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string stringReverse(string str)
{
    // reverse the string by inbuild function
    reverse(str.begin(), str.end());
    // add the space at the end
    str.insert(str.end(), ' ');
    int j = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            reverse(str.begin() + j, str.begin() + i);
            j = i + 1;
        }
    }
    return str;
}
int main()
{
    string str = "Virat Kohli is a batter";
    string rev = stringReverse(str);
    cout << rev;
}