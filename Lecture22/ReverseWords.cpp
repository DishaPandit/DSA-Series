/*
i/p : My name is disha
o/p : yM eman si ahsid

*/
//Made logic on my own. However i made two mistakes
//1. used assignment operator instead of equals
//2. did not made string terminator condition properly


#include<iostream>
#include<string.h>

using namespace std;

void reverse(string &str){

    int s=0, e=0, n=str.size();

    for(int i=0; i<n; i++)
    {
        
        if(str[i]==' ' || i==n-1)
        {
            e=i-1;
            if(i==n-1)
                 e=i;

            while(s<e)
            {
                swap(str[s], str[e]);
                s++;
                e--;
            }
            s=i+1;
        }
    }
}

int main(){
    string s="My name is Disha";
    cout<<s<<endl;
    cout<<"After reverse "<<endl;
    
    reverse(s);
    cout<<s<<endl;
    return 0;
}