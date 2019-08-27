#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

#define NR_AUTOMOBILE 100

typedef struct coordonate {
	int grade;
	int minute;
	int secunde;
}coordonate;

typedef struct automobil{
	coordonate latitudine;
	coordonate longitudine;
}automobil;

automobil automobil1[NR_AUTOMOBILE];

int main()
{
	int x;

	freopen("test.in","r",stdin);
	freopen("test.out","w",stdout);

	printf("Afiseaza un numar");
	scanf("%d",&x);

	printf("%d\n",x);
	printf("Afiseaza un numar");

	
	
}