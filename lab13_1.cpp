#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	for(int s=1; s<N; s++){
		int idx;
		for (int i = 0;i < N;i++){
			if (i==s) cout<<"["<<d[i]<<"]";
			else cout<<" "<<d[i]<<" ";
		} 
		cout << "=>";
		for(int i=s; i>0; i--){
			if(d[i] > d[i-1]) {
				idx=i-1;
				swap(d,i,i-1);
			}else{
				idx=i;
				break;
			}
		}
		for (int j = 0;j < N;j++){
			if (j==idx) cout<<"["<<d[j]<<"]";
			else cout<<" "<<d[j]<<" ";
		}
		cout<<"\n";
	}
}
//Write your code here.


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
