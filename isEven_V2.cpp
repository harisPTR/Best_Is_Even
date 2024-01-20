#include <iostream>
using namespace std;

bool isEven(int x){
	int i=0;
	for(i;i<x;i+=2){};
  return i!=x;
}

int main() {
  int x;
  cin >> x;
    
  if(isEven(x)){
    cout << "Odd";
  }else{
		cout << "Even";
	}
  
  return 0;
}
