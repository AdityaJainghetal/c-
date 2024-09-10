#include <iostream>
using namespace std;

void delete_element(int a[],int index,int size){
	for(int i=index;i<size;i++){
		a[i]=a[i+1];
	}
}

int main(){
	int array[]={1,2,3,3,5,6,7,8,9};
	int size=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<size;i++){
		cout<<array[i]<<"\t";
	}
	
	
	delete_element(array,2,size);
	cout<<endl;
	for(int i=0;i<size-1;i++){
		cout<<array[i]<<"\t";
	}

}
