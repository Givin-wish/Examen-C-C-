
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int NewApplication();
int ChargementArmes();
void DureDevie();
void Option();

int main(void)
{

	int isApplicationRunning = 1;
	int PlayerChoice = 1;

	printf("Main Menu\n\n 1) New Adventure \n 2) Load Adventure\n 3) Option \n 4 Quit\n");


	printf("Quel est votre choix ?");

	scanf("%d", &PlayerChoice);

	switch (PlayerChoice)
	{
	case 1:
		printf(" News Avdenture");
		break;

	case 2:
		printf("Load Adventure");
		break;
	case 3:
		printf("Option");
		break;
	case 4:
		printf("Quit");
		break;

	default:
		printf("Choix invalid. Veuillez r�essayer.");
		break;
	}

	return 0;
}
int NewApplication()
{
	printf("Nouvelle aventure en cours ...\n");

	return 0;
}
int ChargementArmes()
{
	printf("Chargement d'armes...\n");
	
	return 0;
}
void Option()
{
	int OptionChoice;
	printf("Menu des options\n\n1) Option 1\n2) Option 2\n");

	printf("Quelle Option choisissez-vous ?");
	scanf("%d", &OptionChoice);

	switch (optionChoice)
	{


	case 1:
		printf("Option 1 s�lectionn�e.\n");
		break;

	case 2:


		printf("Option 2 s�lectionn�e.\n");
		break;

	default:
		printf("Option invalide.\n");
		break;
	}
}
void DureeDeVie()
{
	int age;
	printf("Veuillez entrer votre �ge : ");
	scanf("%d", &age);

	if (age < 18)
	{
		printf("Vous �tes jeune.\n");
	}
	else if (age >= 18 && age < 65)
	{
		printf("Vous �tes adulte.\n");
	}

	else
	{
		printf("Vous �tes un s�nior.\n");
	}
}