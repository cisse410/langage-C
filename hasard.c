#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
//#include <math.h>
int main(int argc, char const *argv[])
{
	int NM,nombre_saisi_par_user,choix,njoueur1,njoueur2,njoueur3,nombre_essai=0;//NM = nombre mystère; njoueur représente le nombre saisi par un joueur ensuite les indices 1,2,3 identifient les joueurs, nombre_saisi_user correspond au nombre saisi par un utilisateurqui jouera avec l'ordinateur.
	int max = 100,min = 1;
	char joueur1[50],joueur2[50],joueur3[50],reponse[5];
	srand(time(NULL));
	NM = (rand() % (max - min + 1)) + min;//génération du nombre mystère par l'odinateur
	system("color 3");//changement du couleur de la police en bleu
	printf("\t\tBIENVENUE AU JEU DE TIRAGE AU HASARD\n");
	printf("\nLe jeu ne dispose pour le moment que deux types de parties.\n");
//	sleep(2);
	printf("\nTapez 1 pour jouer le mode ordinateur\t \tTaper sur 2 pour jouer avec votre ou vos ami(s)\n");//présentation des parties du jeu disponible pour le moment
//	sleep(2);
	printf("\nPreciser le mode de jeu que vous voulez jouer: ");
	scanf("%d",&choix);
	if (choix == 1)
	{
		system("color 2f");//changement du couleur de fond en vert 
		printf("\nDans cette partie vous avez trois niveau a choisir:\n");
		printf("\n\t1: Facile(nombre compris entre 1 et 10)\n\t2: Moyen(nombre compris entre 1 et 100)\n\t3: Difficile(nombre compris entre 1 et 1000)\n");//présentation des niveau de jeu pour le mode ordinatuer
		printf("\nDonner votre choix: ");
		scanf("%d",&choix);
		printf("\n\t*** chargement de la partie..... ***");
		Sleep(3000);
		system("cls");
		switch (choix)
		{
			case 1:
				max = 10;min = 1;
				printf("\n\tDans ce niveau, l'ordinateur generera un nombre compris entre 1 et 10\n");
				srand(time(NULL));
				NM = (rand() % (max - min + 1)) + min;//génération du nombre mystère par l'odinateur
				do
				{
					do//controle de saisi pour imposer le joueur à donner un nombre compris entre 1 et 10
					{
						printf("\nVeuillez saisir un nombre compris entre 1 et 10: ");
						scanf("%d",&nombre_saisi_par_user);
						nombre_essai++;
					}while(nombre_saisi_par_user>10 || nombre_saisi_par_user<1);
					
					if (NM > nombre_saisi_par_user)//comparaison entre le nombre saisi par le joueur et celui genere par l'ordinateur
					{
						printf("%d est plus petit que le nombre tire\n",nombre_saisi_par_user);
					}
					else if (NM < nombre_saisi_par_user)
					{
						printf("%d est plus grand que le nombre tire\n",nombre_saisi_par_user);
					}
					else
					{
						printf("Bravo, tu es parvenu a trouver le nombre tire apres %d essai\n",nombre_essai);
					}
				} while (NM != nombre_saisi_par_user);
				break;
			case 2:
				max = 100;min = 1;
				printf("\n\tDans ce niveau, l'ordinateur generera un nombre compris entre 1 et 100\n");
				srand(time(NULL));
				NM = (rand() % (max - min + 1)) + min;//génération du nombre mystère par l'ordinateur
				do
				{
					do//controle de saisi pour imposer le joueur la saisi d'un nombre compris entre 1 et 100
					{
						printf("\nVeuillez saisir un nombre compris entre 1 et 100: ");
						scanf("%d",&nombre_saisi_par_user);
						nombre_essai++;
					}while(nombre_saisi_par_user>100);
					if (NM > nombre_saisi_par_user)//comparaison entre le nombre genere par l'ordinateur et celui saisi par le joueur
					{
						printf("%d est plus petit que le nombre tire\n",nombre_saisi_par_user);
					}
					else if (NM < nombre_saisi_par_user)
					{
						printf("%d est plus grand que le nombre tire\n",nombre_saisi_par_user);
					}
					else
					{
						printf("Bravo, tu es parvenu a trouver le nombre tire apres %d essai\n",nombre_essai);
					}
				} while (NM != nombre_saisi_par_user);
				break;
			case 3:
				max = 1000; min = 1;
				printf("\n\tDans ce niveau, l'ordinateur generera un nombre compris entre 1 et 1000\n");
				srand(time(NULL));
				NM = (rand() % (max - min + 1)) + min;//génération du nombre mystère
				do
				{
					do //controle de saisi pour imposer le joueur à donner un nombre compris entre 1 et 1000
					{
						printf("\nVeuillez saisir un nombre compris entre 1 et 1000: ");
						scanf("%d",&nombre_saisi_par_user);
						nombre_essai++;
					}while(nombre_saisi_par_user>1000);
					if (NM > nombre_saisi_par_user)//comparaison entre le nombre saisi par le joueur et celui génrer par l'ordinateur
					{
						printf("%d est plus petit que le nombre tire\n",nombre_saisi_par_user);
					}
					else if (NM < nombre_saisi_par_user)
					{
						printf("%d est plus grand que le nombre tire\n",nombre_saisi_par_user);
					}
					
					else
					{
						printf("Bravo, tu es parvenu a trouver le nombre tire apres %d essai\n",nombre_essai);
					}
				} while (NM != nombre_saisi_par_user);
				break;
			default:
				printf("Ce niveau de difficultte n'est pas encore disponible\n\n");
				break;
		}
	}
	else if (choix == 2)
	{
	//mode amis
		system("color 1f");//changement du couleur de fond en bleu
		printf("\tBIENVENUE, vous allez entre vous\n");
		printf("\nDans cette partie vous avez trois niveau a choisir:\n");
		printf("\n\t1: MODE DEUX JOUEURS\n\t2: MODE TROIS JOUEURS\n");
		printf("\nDonner votre choix: ");
		scanf("%d",&choix);
		printf("\n\t*** chargement de la partie..... ***");
		Sleep(3000);
		system("cls");
		switch(choix)
		{
			case 1:/*mode deux joueurs*/
				system("color 4b");//changement du couleur de fond en rouge
				
				printf("\n\tBIENVENUE VOUS ALLEZ JOUE A DEUX\n");
			/*enregistrements des noms des joueurs*/
				printf("\nDonner le nom du premier joueur: ");
				fflush(stdin);
				gets(joueur1);
			//	scanf("%s",&joueur1);
				printf("\nDonner le nom du deuxieme joueur: ");
				gets(joueur2);
			//	scanf("%s",&joueur2);
			/*entré en jeu du premier joueur*/
				printf("%s, veuillez saisir un nombre: ",joueur1);
				scanf("%d",&njoueur1);
				system("cls");		
				do
				{
					//entré en jeu du deuxieme joueur
					printf("%s, veuillez saisir un nombre: ",joueur2);
					scanf("%d",&njoueur2);
					nombre_essai++;
					if(njoueur1 > njoueur2)//comparaison des nombres saisis par le premier et le deuxieme joueur
					{	
						printf("\nLe nombre saisi par %s est superieur a celui que tu as fourni\n",joueur1);
					}
					else if (njoueur1 < njoueur2)
					{
						printf("\nLe nombre saisi par %s est inferieur a celui que tu as fourni\n",joueur1);
					}
					else
					{
						printf("\n%s, Vous avez saisi le meme nombre que %s apres %d essai\n",joueur2,joueur1,nombre_essai);
					}
				
				}while(njoueur1 != njoueur2);
				break;
			case 2:/*mode trois joueurs*/
				system("color 3f");//changement du couleur de fond en bleu ciel
				printf("\n\tBIENVENUE VOUS ALLEZ A TROIS\n");
			/*présentation du partie*/
				printf("\nBIENVENUE, vous allez joue a trois c'est-a-dire le niveau le plus difficile. Tenez vouz pret!!!\n");
			/*enrégistrements des joueurs*/
				printf("\nDonner le nom du premier joueur: ");
				fflush(stdin);
				gets(joueur1);
			//	scanf("%s",&joueur1);
				printf("%s, Bienvenue sur le jeu tu vas donner un nombre en premier lieu\n",joueur1);
				printf("\nDonner le nom du deuxieme joueur: ");
				gets(joueur2);
			//	scanf("%s",&joueur2);
				printf("%s, Bienvenue sur le jeu tu vas donner un nombre en deuxieme lieu apres %s\n",joueur2,joueur1);
				printf("\nDonner le nom du troisieme joueur: ");
				gets(joueur3);
			//	scanf("%s",&joueur3);
				printf("%s, Bienvenue sur le jeu tu vas donner un nombre en troisieme lieu apres %s et %s\n",joueur3,joueur1,joueur2);
			/*-----------------------------------------------------------------------------------------------------------------------------*/
				printf("\nLe principe est simple, chacun d'entre vous trois donnera un nombre et celui entre %s et %s, trouvera en premier lieu le nombre donne par %s aura une recompense de notre part. Allez vouz y etes presque...\n",joueur2,joueur3,joueur1);
		
				printf("\n\t\t\tDEMARRAGE DU PARTIE.....\n");
				printf("\n\n\n");
				Sleep(4000);
				system("cls");
				printf("\n\tTOP LE JEU A DEMARRE\n");
				printf("\n%s, Saisir un nombre: ",joueur1);
				scanf("%d",&njoueur1);
				do
				{
					printf("\n%s, Saisir un nombre: ",joueur2);
					scanf("%d",&njoueur2);
					printf("\n%s, Saisir un nombre: ",joueur3);
					scanf("%d",&njoueur3);
					if(njoueur1 < njoueur2 && njoueur1 < njoueur3 && njoueur2 < njoueur3)
					{
						printf("Le nombre saisi par %s est plus grand que celui saisi  par %s et celui saisi par %s",joueur3,joueur1,joueur2);
					}
					else if (njoueur1 < njoueur2 && njoueur1 > njoueur3 && njoueur2 > njoueur3)
						printf("Le nombre saisi par %s est plus grand que celui saisi  par %s et celui saisi par %s",joueur2,joueur1,joueur3);
					else if (njoueur1 > njoueur2 && njoueur1 > njoueur3 && njoueur2 < njoueur3)
						printf("Le nombre saisi par %s est plus grand que celui saisi  par %s et celui saisi par %s",joueur1,joueur2,joueur3);
					else
						printf("Bravo vous avez saisi les memes nombres que %s",joueur1);
				}while(njoueur1 != njoueur2 || njoueur1 != njoueur3);
				break;
			default:
				printf("\n\tCE NIVEAU DE DIFFICULTE N'EST PAS DISPONIBLE");
				break;
		}	
	}
	else
	{
		printf("\n\tCE MODE N'EST PAS ENCORE DISPONIBLE\n");
	}
}
