#include<iostream>
// #define and &&
#define ll long long int
#define ld long double
// #define or ||
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);

    int t; // number of testcase;
    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        int n;
        cin>>n;
        string old_pass;
        cin>>old_pass;
        bool cap = false,sl=false,digit = false,sp = false;
        for(char c:old_pass)
        {
            if(c>='0' and c<='9')
                digit = true;
            if(c>='a' and c<='z')
                sl = true;
            if(c>='A' and c<='Z')
                cap = true;
            if(c=='#' or c == '@' or c=='*' or c== '&')
                sp = true;
        }

        if(!sp)
            old_pass.push_back('#');
        if(!digit)
            old_pass.push_back('1');
        if(!cap)
            old_pass.push_back('A');
        if(!sl)
            old_pass.push_back('a');
        

        while(old_pass.size()<7)
            old_pass.push_back('1');

        cout<<"Case #"<<i<<": "<<old_pass<<endl;
        
    }

    return 0;
}
