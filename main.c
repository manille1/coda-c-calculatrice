#include<stdlib.h>
#include<stdio.h>

int main()
{
	int nb_1;
	int nb_2;
	char operateurs;

	printf("Bonjour, choisissez un opérateurs parmis : +, -, *, /, %% :\n");
	scanf("%s", &operateurs);

	printf("Merci, maintenant choisissez le premier nombre de votre opération.\n");
	scanf("%d", &nb_1);

	printf("Maintenant saisissez votre second nombre.\n");
	scanf("%d", &nb_2);

	if(operateurs='+')
	{
		int resultat=nb_1+nb_2
		printf("addition\n");
		
	}
	else if(operateurs='-')
	{
		int resultat=nb_1-nb_2
		printf("soustraction\n");
		
	}
	else if(operateurs='*')
	{
		int résulat=nb_1*nb_2
		printf("multiplication\n");
		
	}
	else if(operateurs='/')
	{
		int resultat=nb_1/nb_2
		printf("division\n");
	}
	else if(operateurs='%')
	{
		int resultat=nb_1%nb_2
		printf("modulo\n");
	}
	else
	{
		printf("L'opérateur n'est pas reconnu\n");
	}
}