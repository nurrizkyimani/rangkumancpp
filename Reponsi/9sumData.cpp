#include <iostream>
using namespace std; 

int main(){
	
int sum, n, b, arr[100];
	
cout << "Enter the amount of input : ";	
cin>> n;

for (int i=0; i< n;i++)
{
	cout << "Enter number " << i+1 << ": ";
	cin >> b;
	arr[i]= b;
	sum +=b;
}

cout << "Input data: ";
for (int i=0; i<n; i++){
	cout << arr[i] <<" ";
}

cout <<endl<< "Jumlah total: " <<sum << endl;

for (int i; i < n ; i ++){
	if(arr[0]>  arr[i])
		arr[0]=arr[i];
}

cout << "Min : "<< arr[0] << endl;

for (int i; i < n ; i ++){
	if(arr[0]<  arr[i])
		arr[0]=arr[i];
}

cout << "Max : "<< arr[0];



}
