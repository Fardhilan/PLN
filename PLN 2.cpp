#include <iostream>
using namespace std;
int main()
{
int pemakaian,biaya;
	cout<<"Fardhilan Galang Priarto"<<endl;
	cout<<"312210264"<<endl;
	cout<<"Masukkan Pemakaian ke Rekening Listrik: ";
	cin>>pemakaian;
	if (pemakaian<=100) {
		biaya=100000;
	}
	else if (pemakaian<=500) {
		biaya=100000+((pemakaian-100)*1500);
	}
	else
			biaya=700000+((pemakaian-500)*2000);
			cout<<biaya;
}
