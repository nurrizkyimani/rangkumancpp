#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int NISN;
	int value;
};
Student data[100];


int main () {
	
	data[0].name = "Handi Ramadhan" ;
	data[0].NISN = 699 ;
	data[0].value = 90 ;
	
	data[1].name = "Rio Alfandra" ;
	data[1].NISN = 682 ;
	data[1].value = 55 ;
	
	data[2].name = "Ronaldo Valentino Uneputty" ;
	data[2].NISN = 962 ;
	data[2].value = 80 ;
	
	data[3].name = "Achmad Yaumil Fadjri R." ;
	data[3].NISN = 750 ;
	data[3].value = 60 ;
	
	data[4].name = "Alivia Rahma Pramesti" ;
	data[4].NISN = 945 ;
	data[4].value = 70 ;
	
	data[5].name = "Ari Lutfianto" ;
	data[5].NISN = 180 ;
	data[5].value = 65 ;
	
	data[6].name = "Arief Budiman" ;
	data[6].NISN = 989 ;
	data[6].value = 60 ;
	
	int temp, temp3, min; string temp2;
	
	for (int i=0; i<7-1; i++){
		min=i;	
		for (int j=i+1; j<7; j++){
			if (data[j].NISN < data[min].NISN)
			{
				min=j;
			}	
		}
		temp=data[i].NISN;
 		temp2=data[i].name; 
		temp3=data[i].value;
		
		data[i].NISN=data[min].NISN; 
		data[i].name=data[min].name; 
		data[i].value=data[min].value;

		data[min].NISN=temp; 
		data[min].name=temp2; 
		data[min].value=temp3 ;
		
	}
	
	for (int k=0; k<7; k++){
	cout << data[k].NISN << " " << data[k].name << " " << data[k].value << endl;
	}
	
	// binary search
	int i = 0, j = 6, k , query = 962;
	bool found = false;
	//searchalgos	cout<< endl ;
	while(!found&&i<=j){
		k=(i+j)/2;
		if(data[k].NISN<query){
			i=k+1;
		}else if(data[k].NISN == query){
			found=true;
		}else {
			j=k-1;
		} }
	//print 
	if(!found){
		cout<<"Tidak ditemukan.";
	}else{
		cout<<"Ditemukan.";
	}
}

