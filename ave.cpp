 # include <iostream>
 
 using namespace std;
 
 
 
 double average(int a[],int size){
 	double add=0;
 	for(int i=0;i<size;i++){
 		 add=add+a[i];
	 }
 	
 	return add/size;
 	
 }
 
 
 int main(){
 	
 	int arr[]={12,33,44,55,566,66};
 	int size=sizeof(arr)/sizeof(arr[0]);
 	double res=average(arr,size);
 	cout<<res<<endl;
 	
 	
 	
 	
 }
