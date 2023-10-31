#include<iostream>
using namespace std; 
 int main()
  {
    int row,i,j,s;
    cout<<"Enter size: "; 
    cin>>row;

    if(row%2==0)
       s = 0;
    else
      s  = 1;

     i=1;
     while(i<=row)
      {
	for(int k = row/2; k<=i; k++)
	    cout<<" ";

	for(j=row; j<=i*2-s; j++)  // column
	 {
	   if(j==row||j==i*2-s||i==row)
	     cout<<"*";
	   else
	     cout<<" ";
	 }
	cout<<endl;
	i++;
      }
return 0;
 }