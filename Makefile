all : gen_aleat test_vect 

gen_aleat.o : gen_aleat.c 
	@echo creation de gen_aleat.o :
	gcc -O3 -c -std=c99 gen_aleat.c 
	@echo -------------------------------

test_vect.o : test_vect.c vecteur.h 
	@echo creation de test_vect.o :
	gcc -O3 -c -std=c99 test_vect.c 
	@echo -------------------------------

vecteur.o : vecteur.c vecteur.h 
	@echo creation de vecteur.o :
	gcc -O3 -std=c99 -c vecteur.c 
	@echo -------------------------------

# Executables #

gen_aleat : gen_aleat.o 
	@echo creation de gen_aleat :
	gcc -o gen_aleat gen_aleat.o 
	@echo -------------------------------

test_vect : test_vect.o vecteur.o 
	@echo creation de test_vect optimisation O :
	gcc -o test_vect test_vect.o vecteur.o 
	@echo -------------------------------


clear :
	rm *.o gen_aleat test_vect 
