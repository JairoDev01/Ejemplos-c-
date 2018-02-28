#include <iostream>
#include <stdio.h>
using namespace std;
main(){
	int a;
	cout<<"ingrese nota"<<endl;
	cin>>a;
	if(a>=0&& a<61){
		cout<<"reprobado"<<endl;
	}	
	else if (a>61&&a<=100){
	cout<<"aprovado"<<endl;	
	}
	return 0;

	}
