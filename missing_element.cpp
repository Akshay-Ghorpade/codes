#include<iostream>
using namespace std;
main(){
int n,b,c;
cout<<"enter size of array "<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cout<<"enter elements ";
	cin>>arr[i];
}
b=arr[0];
for(int j=0;j<n;j++){
	if(arr[j]>b){
		continue;
	}
	else{
		b=arr[j];
	}
}
for(int k=0;k<n;k++){
	for(int l=0;l<n;l++){
		c=0;
		if(b==arr[l]){
			c=c+1;
			break;
		}
		else{
		continue;	
		}	
	}
	if(c==0){
		cout<<b<<" is missing ";
	}
	b=b+1;
}
}
