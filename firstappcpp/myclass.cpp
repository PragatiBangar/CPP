#include "myclass.h"
using namespace std;
#include <iostream>
	myclass::myclass(){
	}
	
  myclass::myclass(int a, int b){
		this->first=a;
		this->second=b;		
	}

	int myclass:: add(){
    int first;int second;
    cout<<"\n"<<"Enter firstnumber:"; 
    std::cin>> first;
    cout<<"Enter secondnumber:";
    std::cin >> second;
    int m=first+second;
    return m; 
	}
	
	int myclass::substract(int c, int d){
		
	int q = c-d;
	return q;
	}
	
	int myclass::multiplication(){	
	int p = this->first*this->second;
	return p;	
	}
	

