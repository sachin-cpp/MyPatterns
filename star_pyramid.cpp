//    *
//   ***
//  *****
// *******
//*********   
//here we will print star pyramid.

#include<iostream>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Here we will print the Star Pyramid."<<endl;
	cout<<"Enter the number of stars you want to print in last row."<<endl;
	cin>>n;
	
		for(int i=1;i<=n;i+=2){
			int k=1;
			
			while(k<=(n-i)/2){
				cout<<" ";
				 k++;
			}
				for(int j=1;j<=i;j++){
				cout<<"*";
				}
			cout<<endl;
		}
			
return 0;
} 
