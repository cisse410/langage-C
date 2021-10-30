#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
int main(int argc, char *argv[])
{
	int choix,prix_plat,prix_boisson=300,monnaie,somme,depense,compteur;
	char reponse,nom_client[50],prenom_client[50],sexe;
	//char salutation[20]={'B','O','N','J','O','U','R',' ','E','T',' ','B','I','E','N','V','E','N','U','E'};
    char salutation[20] = "BONJOUR ET BIENVENUE";
	printf("Fichier compile le %s a %s\n",__DATE__,__TIME__ );
	printf("\t");
    for(compteur = 0;compteur < 20;compteur++)
    {
        printf("%c",salutation[compteur]);
        Sleep(500);
    }
	printf("\n");
	printf("\n\tCHEZ NOUS, LES CLIENTS SONT NOS PATRONS\n");
	printf("\nAvant d'avoir une appercu du menu du jour, vous devez vous renseigner en preciser votre prenom et votre nom.\n");
	printf("\nVeuillez saisir votre prenom: ");
	fflush(stdin);
	gets(prenom_client);
	printf("\nVeuillez saisir votre nom: ");
	gets(nom_client);
	printf("Veuillez preciser votre sexe(M/F): ");
	scanf("%c",&sexe);
	if(sexe == 'M')
	{
		printf("Bonjour M. %s %s, voila le menu du jour\n",prenom_client,nom_client);
	}
	else if(sexe == 'F')
	{
		printf("Bonjour Mme %s %s, voila le menu du jour\n",prenom_client,nom_client);
	}
	else
	{
		//sonnerie d'alerte
		printf("\a");
		printf("Bonjour %s %s, voila le menu du jour \n",prenom_client,nom_client);
	}
	Sleep(1500);
	system("cls");
	printf("\t\t\t\t =====================================\n");
	printf("\t\t\t\t|   *                            *   |\n");
	printf("\t\t\t\t| *   *      MENU DU JOUR      *   * |\n");
	printf("\t\t\t\t|   *                            *   |\n");
	printf("\t\t\t\t =====================================\n");
	printf("\n\t1: Mafee\n");
	printf("\t2: Riz au poisson\n");
	printf("\t3: Mbaxal\n");
	printf("\t4: Paella\n");
	printf("\t5: Yassa\n");
	printf("\n\t\tVeuillez entrer votre choix: ");
	scanf("%d",&choix);
	switch (choix)
	{
		case 1:
			printf("Vous avez choisi le mafee\n");
			break;
		case 2:
			printf("Vous avez choisi le riz au poisson\n");
			break;
		case 3:
			printf("Vous avez choisi le mbaxal\n");
			break;
		case 4:
			printf("Vous avez choisi le paella\n");
			break;
		case 5:
			printf("Vous avez choisi la yassa\n");
			break;
		default:
			printf("Votre choix n'existe pas\n");
			break;
	}
	printf("Voulez vous un plat de combien? ");
	scanf("%d",&prix_plat);
	printf("Voulez vous un repas accompagne de boisson (o/n): ");
	scanf("%s",&reponse);
	printf("S'il vous plait tapez la somme que vous voulez verser: ");
	scanf("%d",&somme);
	//PLAT + BOISSON
	if(reponse == 'o')
	{
			//PRESENTATION DES BOISSONS DISPONIBLES POUR LE CLIENT QUI VEUT UN PLAT ACCOMPAGNE DE BOISSON
			printf("voila les boissons disponibles aujourd'hui: \n1:PUNCH \n2:FANTA \n3:COCA-COLA \n3:3 XL\n4:PRESEA\n");
			printf("Veuillez preciser le nom du boisson que vous voulez en choisissant le numero correspondant: ");
			scanf("%d",&choix);
				if(choix == 1)
				{
					printf("Vous devez payer %d pour le prix du boisson\n",prix_boisson);
				}
				else if(choix == 2)
				{
					printf("Vous devez payer %d pour le prix du boisson\n",prix_boisson);
				}
				else if(choix == 3)
				{
					printf("Vous devez payer %d pour le prix du boisson\n",prix_boisson);
				}
				else if(choix == 4)
				{
					printf("Vous devez payer %d pour le prix du boisson\n",prix_boisson);
				}
				else
				{
					//sonnerie d'alerte
					printf("\a");
					printf("Soi raisonnable le numero choisi n' a aucun correspondance su la liste presente\n");
				}
				//CALCUL DE LA DEPENSE TOTALE
		depense = prix_plat + prix_boisson;
		//COMPARAISON DE LA DEPENSE ET DU PRIX DONNE PAR LE CLIENT
		if(depense < somme)
		{
			//CAS OU LE CLIENT DOIT RECEVOIR UNE MONNAIE
			monnaie = somme - depense;
			printf("Votre depense totale est de %d\n",depense);
			printf("Veuillez vous rendre au guichet pour retirer votre monnaie qui est %d\n",monnaie);
		}
		else if(depense == somme)
		{
			//CAS OU LE CLIENT A DEPENSER TOUS SON ARGENT
			monnaie = 0;
			printf("votre depense totale est de %d\n",depense);
			printf("Veuillez vous rendre au guichet pour retirer votre monnaie qui est %d\n",monnaie);
		}
		else
		{
			printf("votre depense totale est de %d\n",depense);
			printf("Pas de monnaie a recevoir");
		}
		printf("Votre demande est en cours de traitement...\n");
		Sleep(2000);
		printf("\tREQUETE BIEN PRISE EN CHARGE!!!");
		printf("Vous aurez votre plat accompagne de boisson\n");
		printf("\n\n\n\n");
		//PRESENTATION DE RECU DU CLIENT
			printf("\t\t\t******************\n");
			printf("\t\t\t* RECU DU CLIENT *\n");
			printf("\t\t\t******************\n");
			printf("\n\tClient(e): %s %s\n",prenom_client,nom_client);
			printf("\tPrix du plat: %d\n",prix_plat);
		//	printf("\tNom du boisson: %d\n",nom_boisson);
			printf("\tPrix du boisson: %d\n",prix_boisson);
			printf("\tSomme verse: %d\n",somme);
			printf("\tDepense totale: %d\n",depense);
			printf("\tSomme restante: %d",monnaie);
			printf("\n\n\tMERCI DE VOTRE CONFIANCE ET A LA PROCHAINE POUR DE NOUVEAU PLATS DELICIEUX\n");
	}
	//PLAT UNIQUEMENT C'EST A DIRE SANS BOISSON
	else
	{
		depense = prix_plat;
		if (depense < somme)
		{
			//CALCUL DE LA MONNAIE A RENDRE AU CLIENT, CE DERNIER A DONNER UN MONTANT SUPERIEUR A LA DEPENSE 
			monnaie = somme - depense;
			printf("Votre depense totale est de %d\n",depense);
			printf("Veuillez vous rendre au guichet pour retirer votre monnaie qui est %d\n",monnaie);
		}
		else if (depense == 0)
		{
			//LE CLIENT A DEPENSER TOUT SON ARGENT
			monnaie = 0;
			printf("Votre depense totale est de %d\n",depense);
			printf("Veuillez vous rendre au guichet pour retirer votre monnaie qui est %d\n",monnaie);
		}
		else
		{
			printf("Votre depense totale est de %d\n",depense);
			printf("Pas de monnaie a recevoir\n");
		}
		printf("Votre demande est en cours de traitement...\n");
		Sleep(2000);
		printf("\tREQUETE BIEN PRISE EN CHARGE!!!");
		printf("Vous aurez votre plat\n");
		printf("\n\n\n\n\n");
		//PRESENTATION DE RECU DU CLIENT QUI A ACHETER UN PLAT SANS BOISSON 
			printf("\t\t\t******************\n");
			printf("\t\t\t* RECU DU CLIENT *\n");
			printf("\t\t\t******************\n");
			printf("\n\tClient(e): %s %s\n",prenom_client,nom_client);
			printf("\tPrix du plat: %d\n",prix_plat);
			printf("\tSomme verse: %d\n",somme);
			printf("\tDepense totale: %d\n",depense);
			printf("\tSomme restante: %d",monnaie);
			printf("\n\n\tMERCI DE VOTRE CONFIANCE ET A LA PROCHAINE POUR DE NOUVEAU PLATS DELICIEUX\n");
	}
}
