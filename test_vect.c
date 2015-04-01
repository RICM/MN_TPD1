#include <stdio.h>
#include <stdlib.h>

#include "vecteur.h"

int main(int argc, char* argv[])
{
	VectSM sv1, sv2, sv3;
	VectBG bv1, bv2, bv3;

	VectFSM fsv1, fsv2, fsv3;
	VectFBG fbv1, fbv2, fbv3;

	double sc = 3.2456;

	if(argc == 4){
		int loop = 100000;
		switch(argv[1][0]){
			case 'd' :
				switch(argv[2][0]){
					case 's' :
						read_vect(sv1);
						read_vect(sv2);
						switch(argv[3][0]){
							case 'a' :
								printf("Affichage de l'addition : \n");
                                for (int i = 0; i < loop; i++){
                                    add(sv1, sv2, sv3);
                                }
								//print_vect(sv3);
								break;
							case 'm' :
								printf("Affichage de la multiplication par un scalaire : \n");
                                for (int i = 0; i < loop; i++){
                                    mult (sv1, sc, sv3);
                                }
								//print_vect(sv3);
								break;
							case 's' :
								printf("Affichage du produit scalaire : \n");
								for (int i = 0; i < loop; i++){
                                    scal (sv1, sv2, &sc);
                                }
								printf("%lf\n", sc);
								break;
							default :
								break;
						}
						break;

					case 'b' :
						read_vectBG(bv1);
						read_vectBG(bv2);
						switch(argv[3][0]){
							case 'a' :
								printf("Affichage de l'addition : \n");
                                for (int i = 0; i < loop; i++){
                                    addBG(bv1, bv2, bv3);
                                }
                                //print_vectBG(bv3);
								break;
							case 'm' :
								printf("Affichage de la multiplication par un scalaire : \n");
								for (int i = 0; i < loop; i++){
                                    multBG(bv1, sc, bv3);
                                }
                                //print_vectBG(bv3);
								break;
							case 's' :
								printf("Affichage du produit scalaire : \n");
								for (int i = 0; i < loop; i++){
                                    scalBG(bv1, bv2, &sc);
                                }
								//printf("%lf\n", sc);
								break;
							default :
								break;
						}
						break;
				}
				break;

			case 'f' :
				switch(argv[2][0]){
					case 's' :
						read_vectF(fsv1);
						read_vectF(fsv2);
						switch(argv[3][0]){
							case 'a' :
								printf("Affichage de l'addition : \n");
                                for (int i = 0; i < loop; i++){
                                    addF(fsv1, fsv2, fsv3);
                                }
                                //print_vectF(fsv3);
								break;
							case 'm' :
								printf("Affichage de la multiplication par un scalaire : \n");
								for (int i = 0; i < loop; i++){
                                    multF(fsv1, sc, fsv3);
                                }
                                //print_vectF(fsv3);
								break;
							case 's' :
								printf("Affichage du produit scalaire : \n");
								for (int i = 0; i < loop; i++){
                                    scalF(fsv1, fsv2, &sc);
                                }
                                //printf("%lf\n", sc);
								break;
							default :
								break;
						}
						break;

					case 'b' :
						read_vectFBG(fbv1);
						read_vectFBG(fbv2);
						switch(argv[3][0]){
							case 'a' :
								printf("Affichage de l'addition : \n");
								for (int i = 0; i < loop; i++){
                                    addFBG(fbv1, fbv2, fbv3);
                                }
                                //print_vectFBG(fbv3);
								break;
							case 'm' :
								printf("Affichage de la multiplication par un scalaire : \n");
								for (int i = 0; i < loop; i++){
                                    multFBG(fbv1, sc, fbv3);
                                }
                                //print_vectFBG(fbv3);
								break;
							case 's' :
								printf("Affichage du produit scalaire : \n");
								for (int i = 0; i < loop; i++){
                                    scalFBG(fbv1, fbv2, &sc);
                                }
                                //printf("%lf\n", sc);
								break;
							default :
								break;
						}
						break;
				}
				break;

			default :
				break;
		}
		printf("%d\n",loop );
	}
	else
		printf("Erreur : [d ou f] [s ou b] [a ou m ou s] [int pour l'iteration]\n");

	return 0;
}