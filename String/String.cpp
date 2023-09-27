#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    there is two way to create string in cpp first 
    1.Array of character 
    2.String class
        here string class has extra methode and customization and char array has inbuild methode(function)
        to use this feature we have to include string.h header file
    string array different from other data type aaray it print without loop or we can use loop also
    */

    char str[20]="vishalbhargav";
    // cin>>str;

    // cin.getline(str,100);



    // cout<<str;

    string s;
    getline(cin,s);

    cout<<s;
    return 0;
}