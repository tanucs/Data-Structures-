#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	   int A,B,C,D;
	   cin>>A>>B;
	   C=A*1;
	   D=B*1;
	   if(C>D){
	       cout<<D<<endl;
	   }
	   else if(C<D){
	       cout<<C<<endl;
	   }
	   else if(C==D){
	       cout<<D<<endl;
	   }
	}
	return 0;
}
