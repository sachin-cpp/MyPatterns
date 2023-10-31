#include<bits/stdc++.h>
using namespace std;
int findMin(int n, char a[]){
        // code here
        int cr=0,cb=0,cg=0;
        for(int i=0;i<n;i++){
            if(a[i]=='R') cr++;
            else if(a[i]=='B') cb++;
            else  cg++;
        }
        cout<<"cr: "<<cr<<"cb: "<<cb<<"cg: "<<cg<<endl;
        if((cr==0 and cb==0) || (cr==0 and cg==0) || (cg==0 and cb==0)) return n;
        else if((cr%2==0) and (cb%2==0) and (cg%2==0)) return 2;
        else if((cr%2!=0) and (cb%2!=0) and (cg%2!=0)) return 2;
        else return 1;
    }
   
