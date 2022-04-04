#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int D,Oc,Of,Od,Cs,Cb,Cm,Cd;
	cin>>D;
	cin>>Oc>>Of>>Od;
	cin>>Cs>>Cb>>Cm>>Cd;

	int online, classic;

	online = (Oc+(D-Of) * Od);
	classic = Cb + (D*Cd) + (D/Cs) * Cm;

	if(online>=classic)
	{
		cout<<"Classic Taxi"<<endl;
	}
	else 
	{
		cout<<"Online Taxi";
	}


	return 0;
}