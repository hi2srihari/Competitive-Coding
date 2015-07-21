#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    bool present[26]= {};
    getline(cin,s,'\n');
    for(int i=0; i<s.length(); i++) {
        if (s[i]>=65&&s[i]<=90&&present[i-65]==false) { //cap letters
            present[i-65]=true;
        }
        if(s[i]>=97&&s[i]<=122&&present[i-97]==false) {
            present[i-65]=true;
        }
    }
    for(int i=0; i<26; i++) {
        if(s[i]==false) {
            cout<<"not pangram";
            return 0;
        }
    }
    cout<<"pangram";
    return 0;
}
