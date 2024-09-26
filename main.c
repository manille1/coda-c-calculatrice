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
		printf("addition\n");
	}
	else if(operateurs='-')
	{
		printf("soustraction\n");
	}
	else if(operateurs='*')
	{
		printf("multiplication\n");
	}
	else if(operateurs='/')
	{
		printf("division\n");
	}
	else if(operateurs='%')
	{
		printf("modulo\n");
	}
	else
	{
		printf("L'opérateur n'est pas reconnu\n");
	}
}