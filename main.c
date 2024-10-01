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

	if(operateurs=='+')                          // ADDITION
	{
		int resultat=nb_1+nb_2;
		printf("addition\n");
		printf("%d %c %d = %d\n", nb_1, operateurs, nb_2, resultat);
	}
	else if(operateurs=='-')                     //SOUSTRACTION
	{
		int resultat=nb_1-nb_2;
		printf("soustraction\n");
		printf("%d %c %d = %d\n", nb_1, operateurs, nb_2, resultat);
	}
	else if(operateurs=='*')                     //MULTIPLICATION
	{
		int resultat=nb_1*nb_2;
		printf("multiplication\n");
		printf("%d %c %d = %d\n", nb_1, operateurs, nb_2, resultat);
	}
	else if(operateurs=='/')                     //DIVISION
	{
		if(nb_2==0)
		{
			printf("Vous ne pouvez pas diviser par 0.\n");
		}
		else
		{
			double resultat=nb_1/nb_2;
			printf("division\n");
			printf("%d %c %d = %.2f\n", nb_1, operateurs, nb_2, resultat);
		}
	}
	else if(operateurs=='%')                     //MODULO
	{
		if(nb_2==0)
		{
			printf("Vous ne pouvez pas calculer le modulo par 0.\n");
		}
		else
		{
			int resultat=nb_1%nb_2;
			printf("modulo\n");
			printf("%d %c %d = %d\n", nb_1, operateurs, nb_2, resultat);
		}
		
	} 
	else                                        //AUTRES
	{
		printf("L'opérateur n'est pas reconnu\n");
	}
	exit(0);
}