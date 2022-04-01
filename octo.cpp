#include <bits\stdc++.h>
using namespace std;
int main() {
	int N,L,X;
	cin>>N>>L>>X;
	int R=N-L;
    if(N!=0){
	if(L>=R){
	    cout<<R*X<<endl;
	}
	else{
	    cout<<L*X<<endl;
	}
    }
    else{
        cout<<0<<endl;
    }
}
