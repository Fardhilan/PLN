#include <stdio.h>
#include <stdlib.h>

int main()
{
int pemakaian,biaya;
	printf ("Fardhilan Galang Priarto");
	printf ("\n");
	printf ("312210264");
	printf ("\n");
	printf ("Masukkan Pemakaian ke Rekening Listrik: ");
	scanf ("%d", &pemakaian);
	if (pemakaian<=100) {
		biaya=100000;
	}
	else if (pemakaian<=500) {
		biaya=100000+((pemakaian-100)*1500);
	}
	else
			biaya=700000+((pemakaian-500)*2000);
			printf ("Biaya Pemakaian %d", biaya);
}

