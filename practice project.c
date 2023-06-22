#include<stdio.h>
#define MAXN 100
#include<string.h>
#define MAX 100


char brand[MAXN][MAXN];
char product[MAXN][MAXN];
double price[MAX];
char type[MAXN][MAXN];
int cc[MAXN];
char brnam[MAX];
char productname[MAXN];
double pricevalue;
char typena[MAXN];
int ccvalue;

void addvalue(int *n){
	brand[*n][MAXN]=brnam[MAXN];
	product[*n][MAXN]=productname[MAXN];
	price[*n]=pricevalue;
	type[*n][MAXN]=typena[MAXN];
	cc[*n]=ccvalue;
	(*n)++;
}
	
void printvalue(int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%s ", brand[i]);
		printf("%s ", product[i]);
		printf("%lf ", price[i]);
		printf("%s ", type[i]);
		printf("%d ", cc[i]);
	}
}

int main(){
	int choice;
	int n = 0;
	do {
		printf("\nenter choice: ");
		scanf("%d", &choice);
		switch (choice){
			case 1:
				fflush(stdin);
				printf("\nenter the brand: ");
				gets(brnam);
				fflush(stdin);
				printf("\nenter the product:");
				gets(productname);
				printf("\nenter the price: ");
				scanf("%lf", &pricevalue);
				fflush(stdin);
				printf("\nenter the type of the bike: ");
				gets(typena);
				printf("\nenter the cc of the byke: ");
				scanf("%d", &ccvalue);
				addvalue(&n);
				break;
			case 2:
				printvalue(n);
				break;
				
		}
	}while (choice !=0);
	return 0;
} 


