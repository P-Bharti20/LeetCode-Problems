#include<bits/stdc++.h>
using namespace std;
string str="";
int i=0,j=0,index=0;
while(i<n && j<m){
    if(ans[index]!=s1[i]){
        str=str+s1[i];
        i++;
    }else{
        str=str+ans[index];
        index++;
        i++;
        j++;
    }

}