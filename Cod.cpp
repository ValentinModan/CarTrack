#include<stdio.h>
#include<iostream>
#include<vector>
#include<string.h>
#include<map>

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

//vector<String,vector<automobil>> 

int x[10][5000][5000];
map<string, int> index;

	

int main()
{
	int x;

	freopen("test.in","r",stdin);
	freopen("test.out","w",stdout);


	for(int i=1;i<=1;i++)
	{
		printf("Introdu o comanda\n");
		printf("1. Inroducere masina\n");
		printf("2. Afisare detalii masina\n");

		scanf("%d",&x);
		switch(x){
			case 1:
				printf("Introdu numar, latitudine (grade,minute,secunde) longitudine(grade,minute,secunde)\n");
				int numar_inmatriculare;
				coordonate latitudine1;
				coordonate longitudine;
				scanf("%d",&numar_inmatriculare);
				scanf("%d %d %d",&latitudine1.grade, &latitudine1.minute,&latitudine1.secunde);
				printf("%d %d %d",latitudine1.grade, latitudine1.minute,latitudine1.secunde);
				break;


			case 2:
				break;
		}
	}

	
	
}