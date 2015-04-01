#include <stdio.h>
#include <stdlib.h>

void init_db(int nb, FILE *file)
{
	int i;
	for(i=0; i<nb; i++)
		fprintf(file, "%lf\n", (double)rand()/(double)(RAND_MAX/100.0));
}

int main(int argc, char* argv[])
{
	FILE *file = NULL;
	int nb;

	if(argc == 2){
		sscanf(argv[1], "%d", &nb);
		file = fopen("test_vect.txt", "w+");
		if (file != NULL){
			init_db(nb, file);
		}
		fclose(file);
	}
	else{
		printf("Nombre de parametres incorrecte...\n");
	}
}