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

automobil automobil1[NR_AUTOMOBILE][360];
int automobile_introduse = 1;

map<int, int> indexMap;

	

int main()
{
	int x;

	freopen("test.in","r",stdin);
	freopen("test.out","w",stdout);

	int timp = 0;
	for(int i=1;i<=2;i++)
	{
		printf("Introdu o comanda\n");
		printf("1. Inroducere masina\n");
		printf("2. Afisare detalii masina\n");

		timp = (timp + 1) %360;
		scanf("%d",&x);
		switch(x){
			case 1:
				printf("Introdu numar, latitudine (grade,minute,secunde) longitudine(grade,minute,secunde)\n");
				int numar_inmatriculare;
				automobil g_automobil;

				scanf("%d",&numar_inmatriculare);

				scanf("%d %d %d",&g_automobil.latitudine.grade, &g_automobil.latitudine.minute,&g_automobil.latitudine.secunde);
				scanf("%d %d %d",&g_automobil.longitudine.grade, &g_automobil.longitudine.minute,&g_automobil.longitudine.secunde);
				
				int index;
				if(indexMap[numar_inmatriculare]==0)
				{
					printf("Introducem un nou automobil:\n");
					index = automobile_introduse;
					indexMap[numar_inmatriculare] = automobile_introduse++;
				}
				else
				{
					index = indexMap[numar_inmatriculare];
				}

				printf("Indexul este %d\n",index);

				automobil1[index][timp] =g_automobil;	
				break;


			case 2:
				printf("Introdu numar inmatriculare\n");
				int index_masina;
				scanf("%d",&index_masina);

				if(indexMap[index_masina]==0)
				{
					printf("Masina nu a fost gasita");
					break;
				}
				index_masina = indexMap[index_masina];
				printf("Afisam masina\n");

				int index_timp = timp;
				while(index_timp>=0 && automobil1[index_masina][index_timp].latitudine.grade==0)
				{
					index_timp--;
				}

				if(automobil1[index_timp]!=NULL)
				{
					printf("Masina a fost ultima data vazuta la:\n");
					automobil au = automobil1[index_masina][index_timp];
					printf("(%d, %d, %d) (%d, %d, %d)\n",au.latitudine.grade,au.latitudine.minute,au.latitudine.secunde,au.longitudine.grade,au.longitudine.minute,au.longitudine.secunde);
					
				}
				else
				{
					printf("Nu am gasit masina\n");
				}
				break;
		}
	}

	
	
}