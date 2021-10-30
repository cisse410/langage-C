#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	int choix,compteur,nombre,nombre1,nombre2,nombre3,tmp,nombre_entier,reste,nombre_d_article,produit,PU,TOT;//prix_unitaire pour la r?olution de l'exercice qui permet de calculer le prix ttc; PU = prix unitaire pour la resolution de l'exercice qui permet de calculer le prix total ? payer pour la r?olution de l'exercice 7; TOT = prix des produits
	float longueur,largeur,hauteur,nombre_de_radiateur,moyenne,a,b,c,delta/*a,b,c et delta representent les variables */,base,rayon,PI=3.14,x,f_x,prix_ttc,tva,prix_hors_taxe,QTCOM,PORT,REM,PAP,notes,somme_des_notes;//x == variable utilis? ? l'exercice 16 et f_x la fonction; QTCOM = qantit? command?; REM = remise; PAP = prix total ? payer
	//printf("\t\t\t PROJET PRESENTE PAR CISSE410 LGI 1 UIDT\n\n");
	printf("\t\tPROJET COMPILE LE %s A %s.\n",__DATE__, __TIME__);
	printf("\n\t\tVeuilez patienter, chargement du menu...");
	Sleep(7000);
	system("cls");
					printf("\t\t\t\t ===================================\n");
        			printf("\t\t\t\t |                                 |\n");
        			printf("\t\t\t\t |       PROJET PRESENTE PAR :     |\n");
        			printf("\t\t\t\t |       CISSE 410 LGI1 UIDT       |\n");
       				printf("\t\t\t\t ===================================\n");
	printf("\n");
	
	printf("\tVous voici sur le menu du projet demande par notre professeur de TD, M. DIALLO. Ce projet consiste a un regroupement des differents exercices des TD traites en classe; il nous permet principalement d'appliquer quelques notions de ce precieux langage de programmation c'est-a-dire le langage C ainsi que l'utilisation des ces principales IDE que ce soit CodeBlocks ou Dev C++.\n");
	system("pause");
	system("cls");
	do
	{
		printf("\t\t\t\t =====================================\n");
		printf("\t\t\t\t|   *                            *   |\n");
		printf("\t\t\t\t| *   *      MENU PRINCIPAL    *   * |\n");
		printf("\t\t\t\t|   *                            *   |\n");
		printf("\t\t\t\t =====================================\n");
		printf("\n\n");
		//PRESENTATION DES EXERCICES DUS MENU
		printf("\t\t\t\t\t1:\t EXERCICE 10\n\t\t\t\t\t2:\t EXERCICE 12\n\t\t\t\t\t3:\t EXERCICE 13\n\t\t\t\t\t4:\t EXERCICE 14\n\t\t\t\t\t5:\t EXERCICE 15\n\t\t\t\t\t6:\t EXERCICE 16\n\t\t\t\t\t7:\t EXERCICE 02\n\t\t\t\t\t8:\t EXERCICE 03\n\t\t\t\t\t9:\t EXERCICE 04\n\t\t\t\t\t10:\t EXERCICE 05\n\t\t\t\t\t11:\t EXERCICE 06\n\t\t\t\t\t12:\t EXERCICE 07\n\t\t\t\t\t13:\t EXERCICE 08\n\t\t\t\t\t14:\t EXERCICE 09\n\t\t\t\t\t15:\t EXERCICE 10\n\t\t\t\t\t16:\t EXERCICE 11\n\t\t\t\t\t17:\t EXERCICE 12\n\n\t\t\t\t\t18:\t QUITTER\n");
		printf("\nVeuillez preciser le numero de l'exercice a traiter: ");
		scanf("%d",&choix);
		system("cls");
		switch(choix)
		{
			case 1:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 01       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
							//int nombre,nombre1,nombre2;
							//float longueur,largeur,moyenne;
						printf("Ce programme est compose de quatre sous parties. A noter que la premiere partie vous permet de calculer le perimetre et l'aire d'un rectangle selon les donnees saisies par un utilisateur, la deuxieme partie vous permet de calculer le carre d'un nombre, la troisieme partie vous permet de calculer la  somme de deux carres et enfin la derniere partie qui, vous permet de calculer la moyenne de deux nombres saisis par un utilisateur donne.\n");
						printf("\n\t 1: Partie 1\n \t 2: Partie 2\n \t 3: Partie 3\n \t 4: Partie 4\n");
						printf("Maintenant, c'est a vous de choisir la partie que vous voulez; veuillez saisir votre choix: ");
						scanf("%d",&choix);
						system("cls");
						switch (choix)
						{
							case 1:
								printf("Cette partie vous permet de calculer le perimetre et l'aire d'un rectangle selon la longueur et la largeur que vous lui fournirait.\n");
								printf("Veuillez saisir la longureur du rectangle: ");
								scanf("%f",&longueur);
								printf("Veuillez saisir la largeur du ractangle: ");
								scanf("%f",&largeur);
								printf("Le perimetre du rectangle est de: %.2f\n",(longueur + largeur)*2);
								printf("L'aire du rectangle est de: %.2f\n",longueur*largeur);
								break;
							case 2:
								printf("Cette partie vous permet de calculer le carre d'un nombre.\n");
								printf("Veuillez saisir un nombre: ");
								scanf("%d",&nombre);
								printf("Le carre du nombre saisi est de: %d",nombre*nombre);
								break;
							case 3:
								printf("Cette partie vous permet de calculer la somme de deux carres.\n");
								printf("Veuillez saisir un nombre: ");
								scanf("%d",&nombre1);
								printf("Veuillez saisir un autre nombre: ");
								scanf("%d",&nombre2);
								printf("La somme des carres des deux nombres saisis est de: %d",(nombre1*nombre1)+(nombre2*nombre2));
								break;
							case 4:
								printf("Cette partie vous permet de calculer la moyenne de deux nombres saisis par l'utilisateur.\n");
								printf("Veuillez saisir un nombre: ");
								scanf("%d",&nombre1);
								printf("Veuillez saisir un autre nombre: ");
								scanf("%d",&nombre2);
								//moyenne = (nombre1 + nombre2)/2;
								printf("La moyenne de ces deux nombres est de: %.2f",(nombre1 + nombre2)/2);
								break;
							default:
								printf("\a");
								printf("CETTE PARTIE N'EST PAS PRISE EN CHARGE.\n");
								break;
						}
					break;
			case 2:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 12       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("\nBIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE PERMUTER DEUX VALEURS DONNEES PAR L'UTILISATEUR.\n");
					//DECLARATION DES VARIABLES A UTILISER POUR LE TARITEMENT DE L'EXERCICE
						//int nombre1,nombre2,tmp;//tmp = variable temporaire
						printf("Veuillez saisir un nombre pour a: ");
						scanf("%d",&nombre1);
						printf("Veuillez saisir un nombre pour b: ");
						scanf("%d",&nombre2);
						tmp = nombre1;
						nombre1 = nombre2;
						nombre2 = tmp;
						printf("Apres permutation, a = %d et b = %d",nombre1,nombre2);
					break;
			case 3:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 13       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("BIENVENUE DANS VOTRE PROGRAMME QUI VOUS PERMET DE PERMUTER TROIS VALEURS DONNEES PAR L'UTILISATEUR.\n");
					//DECLARATION DES VARIABLES A UTILISER POUR LE TARITEMENT DE L'EXERCICE
					//	int nombre1,nombre2,nombre3,tmp;//tmp = variable temporaire
						printf("Veuillez saisir un nombre pour a: ");
						scanf("%d",&nombre1);
						printf("Veuillez saisir un nombre pour b: ");
						scanf("%d",&nombre2);
						printf("Veuillez saisir un autre nombre c: ");
						scanf("%d",&nombre3);
						tmp = nombre1;
						nombre1 = nombre3;
						nombre3 = nombre2;
						nombre2 = tmp;
						printf("Apres permutation, a = %d et b = %d et c = %d",nombre1,nombre2,nombre3);

					break;
			case 4:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 14       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("BIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE CALCULER LE NOMBRE DE RADIATEURS D'UNE PIECE DONNEE.\n");
					//DECLARATION DES VARIABLES A UTILISER POUR LE TARITEMENT DE L'EXERCICE
					//	float longueur,largeur,hauteur,nombre_de_radiateur;
						printf("Veuillez saisir la longueur du piece: ");
						scanf("%f",&longueur);
						printf("Veuillez saisir la largeur du piece: ");
						scanf("%f",&largeur);
						printf("Veuillez saisir la hauteur du piece: ");
						scanf("%f",&hauteur);
						nombre_de_radiateur = (longueur*largeur*hauteur)/8;//AVEC 8 LA CAPACITE QU'UN RADIATEUR EST CAPABLE DE CHAUFFER
						printf("Le nombre de radiateur est de %.2f",nombre_de_radiateur);
					break;
			case 5:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 15       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("BIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE CALCULER LE PRIX DE TOUT TAXE D'UN PRODUIT CONNAISSANT LE TVA (Taxe sur la Valeur Ajoutee) AINSI LE PRIX HORS TAXE.\n");
					printf("Veuillez saisir le prix hors taxe: ");
					scanf("%f",&prix_hors_taxe);
					printf("Veuillez saisir le taux de TVA: ");
					scanf("%f",&tva);
					printf("Veuillez saisir le nombre d'article: ");
					scanf("%d",&nombre_d_article);
					prix_ttc = prix_hors_taxe*nombre_d_article*(1+tva);
					printf("Le prix tout taxe comprise est de %.2f",prix_ttc);
					break;
			case 6:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 16       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("BIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE CALCULER L'IMAGE D'UNE FONCTON DONNEE.\n");
					printf("Veuillez saisir la valeur de x: ");
					scanf("%f",&x);
					f_x = (x*x)-(8*x)+7;
					printf("L'image de la fonction f(x) = x^2-8x+7 est de: %.2f avec x= %.2f",f_x,x);
					break;
			case 7:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 02       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("\nBIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE DETERMINER LA VALEUR ABSOLUE D'UN NOMBRE.\n");
					//	int nombre;
					printf("Veuillez saisir un nombre entier: ");
					scanf("%d",&nombre);
					if(nombre > 0)
						printf("La valeur absolue de %d est %d",nombre,nombre);
					else
						printf("La valeur absolue de %d est %d",nombre,-nombre);
					break;
			case 8:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 03       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("\nBIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE SAVOIR SI UN NOMBRE SAISI PAR L'UTILISATEUR EST DIVISIBLE PAR 3 OU PAS.\n");
					//	int nombre_entier;
					printf("Veuillez saisir un nombre entier: ");
					scanf("%d",&nombre_entier);
					if(nombre_entier % 3 == 0)
						printf("%d est un nombre qui est divisible par 3",nombre_entier);
					else
						printf("%d n'est pas un nombre divisible qui est par 3",nombre_entier);
					break;
			case 9:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 04       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("\nBIENVENUE DANS VOTRE PROGRAMME QUI VOUS PERMET DE DETERMINER LE SIGNE D'UN NOMBRE SAISI AU CLAVIER.\n");
					//DECLARATION DES VARIABLES POUR LA RESOLUTION DE L'EXERCICE
					//	int nombre;
					printf("Veuillez saisir un nombre entier: ");
					scanf("%d",&nombre);
					if(nombre > 0)
						printf("Le nombre saisi est positif");
					else if(nombre < 0)
						printf("Le nombre saisi est negatif");
					else
						printf("Le nombre saisi est nul");
					break;
			case 10:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 05       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("BIENVENUE DANS VOTRE PROGRAMME QUI VOUS PERMET DE RESOUDRE UNE EQUATION DU SECOND DEGRE.\n");
					//	float a,b,c,delta;
					//CONTROLE DE SAISIE QUI IMPOSE L'UTILISATEUR DE SAISIR UN ENTIER A POSITIF
					do
					{
						printf("Veuillez saisir la valeur de a: ");
						scanf("%f",&a);
					}while (a == 0);
					printf("Veuillez saisir la valeur de b: ");
					scanf("%f",&b);
					printf("Veuillez saisir la valeur de c: ");
					scanf("%f",&c);
					//calcul du discrimant delta
					delta = ((b*b)-(4*a*c));
					if (delta>0)
					{
						printf("L'equation admet deux solutions reelles qui sont %.2f et %.2f",((-b-sqrt(delta))/2*a),((-b+sqrt(delta))/2*a));

					}
					else if (delta == 0)
					{
						printf("L'equation admet une solution double qui est %.2f",-b/(2*a));
					}
					else
						printf("L'equation n'admet pas de solution reelles");
					break;
			case 11:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 06       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("\nBIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE DETERMINER LE SIGNE D'UN PRODUIT DE DEUX NOMBRES SAISI PAR L'UTILISATEUR.\n");
					printf("Veuillez saisir un nombre entier: ");
					scanf("%d",&nombre);
					printf("Veuillez saisir un autre nombre entier: ");
					scanf("%d",&nombre_entier);
					if(nombre>0 && nombre_entier>0 || nombre<0 && nombre_entier<0)
						printf("Le produit des ces deux nombres est positif");
					else
						printf("Le produit des ces deux nombres est negatif");
					break;
			case 12:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 07       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("BIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE CALCULER LE PRIX TOTAL A PAYER SELON LES PRIX UNITAIRE ET LA QUANTITE COMMANDEE D'UN CLIENT DONNE.\n");
					printf("Saisir la quantite commandee par le client: ");
					scanf("%f",&QTCOM);
					printf("Saisir le prix unitaire: ");
					scanf("%d",&PU);
					TOT = PU * QTCOM;
					if (TOT > 5000)
					{
						PORT = 0;
					}
					else
					{
						PORT = (TOT*2)/100;
					}
					printf("Le port est de %.2f\n",PORT);
					if (TOT >2000 && TOT <10000)
					{
						REM = (TOT*5)/100;
					}
					else
					{
						REM = (TOT*10)/100;
					}
					printf("La remise est de %.2f\n",REM);
					PAP = TOT - REM + PORT;
					printf("Le prix total a payer est de %.2f\n",PAP);
					break;
			case 13:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 08       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("\nBIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE CALCULER LA SUPERFICIE DE QUELQUES FIGURES GEOMETRIQUES.\n");
					printf("Vous avez la possibilite de choisir la figure que vous voulez calculer sa superficie\n");
					//DECLARATION DES VARIABLES POUR LA RESOLUTION DE L'EXERCICE 10 QUI CONSISTE A CALCULER LA SUPERFICIE D'UNE FIGURE SELON LE CHOIX DE L'UTILISATEUR

					char choix;
					printf("Veuillez un choisir un caractere (C , T, R) :");
					scanf("%s",&choix);
					if (choix == 'C')
					{
						printf("Vous allez calculer la superficie d'un cercle\n");
						printf("Veuillez saisir le rayon du cercle: ");
						scanf("%f",&rayon);
						printf("LA superficie du cercle est de %.2f",PI*rayon*rayon);
					}
					else if (choix == 'T')
					{
						printf("Vous allez calculer la superficie d'un triangle\n");
						printf("Veuillez saisir la hauteur du triangle: ");
						scanf("%f",&hauteur);
						printf("Veuillez saisir la base du triangle: ");
						scanf("%f",&base);
						printf("La superficie du triangle est de %.2f",(base*hauteur)/2);
					}
					else if (choix == 'R')
					{
						printf("Vous allez calculer la superficie d'un rectangle\n");
						printf("Veuillez saisir la longueur du rectangle: ");
						scanf("%f",&longueur);
						printf("Veuillez saisir la largeur du rectangle: ");
						scanf("%f",&largeur);
						printf("La superficie du rectangle est de %.2f",longueur*largeur);
					}
					else
					{
						printf("\a");
						printf("ERREUR");
					}
					break;
						break;
			case 14:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 09       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("BIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE FAIRE LA MULTIPLICATION DE DEUX NOMBRES PAR ADDITION SUCCESSIVE.\n");
						do
						{
							printf("Veuillez saisir un nombre entier positif: ");
							scanf("%d",&nombre1);
							printf("Veuillez saisir un autre nombre entier positif: ");
							scanf("%d",&nombre2);
						}while (nombre1<0 || nombre2<0);
						produit = 0;
						for (compteur = 1;compteur<=nombre2;compteur++)
						{
							produit = produit + nombre1;
						}
						printf("Le produit est %d",produit);
					break;
			case 15:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 10       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("\nBIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE DETERMINER LE PGDC D'UN NOMBRE.\n");
					//	int i,n,m,reste;
					printf("Veuillez saisir un nombre: ");
					scanf("%d",&nombre1);
					printf("Veuillez saisir un autre nombre: ");
					scanf("%d",&nombre2);
					while(nombre2 != 0)
					{
						reste = nombre2;
						nombre2 = nombre1 % nombre2;
						nombre1 = reste;
					}
					printf("Le PGDC des deux nombres saisis est %d",nombre1);
					break;
			case 16:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 11       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("BIENVENUE DANS VOTRE PROGRAMME QUI PERMET DE CONTROLER LA SAISI D'UN NOMBRE COMPRIS ENTRE 10 ET 20.\n");
					do
					{
						printf("Veuillez saisir un nombre compris entre 10 et 20: ");
						scanf("%d",&nombre);
						if(nombre > 20)
							printf("Plus petit!!!\n");
						else if(nombre < 10)
							printf("Plus grand!!!\n");
					}while(nombre < 10 || nombre >20);
					break;
			case 17:
						printf("\t\t\t\t    * =============================== *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t*   |   *       EXERCICE 12       *   |   *\n");
        				printf("\t\t\t\t  * | *                             * | *\n");
        				printf("\t\t\t\t    * =============================== *\n");
					printf("BIENVENUE DANS LE PROGRAMME QUI VOUS PERMET DE CALCULER LA MOYENNE DES NOTES LUES AU CLAVIER.\n");
					//compteur = 0;
					do
					{
						printf("Veuillez saisir la note numero %d: ",compteur+1);
						scanf("%f",&notes);
						if (notes >=0 && notes <= 20)
						{
							somme_des_notes = somme_des_notes + notes;
							compteur++;
						}
					} while (notes >=0 && compteur <=1000);
					moyenne = somme_des_notes/compteur;
					printf("La moyenne des notes saisie  est %.2f\n",moyenne);
					break;
			case 18:
						printf("\t\t\t\t ===================================\n");
        				printf("\t\t\t\t |                                 |\n");
        				printf("\t\t\t\t |   AU REVOIR ET A LA PROCHAINE   |\n");
        				printf("\t\t\t\t |       CISSE 410 LGI1 UIDT       |\n");
        				printf("\t\t\t\t ===================================\n");
					break;
			default://CAS OU L'UTILISATEUR A FAIT DE LA CONNERIE
				printf("CET EXERCICE NE SE TROUVE DANS CETTE MAQUETTE\n");
				break;
		}
				printf("\nPour retourner au menu principal, veuillez saisir 1; saisir n'importe quelle touche pour quitter le travail: ");
				scanf("%d",&choix);
				system("cls");
	}while (choix == 1);

}
