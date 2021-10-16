//  Find the maximum in a rang 
//  Brute Force O(n)
//  seg trees = O(logn)

#include<bits/stdc++.h>
using namespace std;
int a[100005],seg[4*100005];
//build is completed...
void build(int ind,int low,int high)
{
    if(low==high)
    {
        seg[ind] = a[low];
        return ;
    }
    int mid = low + (high-low)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    seg[ind] = max(seg[2*ind+1],seg[2*ind+2]);
}
int queries(int ind,int low,int high,int l,int r)
{
    //completely lies
    if(low>=l && high<=r)
        return seg[ind];
    // not lies
    if(low>r || l>high)
        return INT_MIN;
    int mid = low+(high-low)/2;
    int left = queries(2*ind+1,low,mid,l,r);
    int right = queries(2*ind+2,mid+1,high,l,r);
    return max(left,right);
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    build(0,0,n-1);
    //queries
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<queries(0,0,n-1,l,r);
    }
    return 0;
}5
5 4 3 2 1
1
2 4