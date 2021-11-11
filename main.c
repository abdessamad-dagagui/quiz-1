#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int points = 0;
	int i;
	int x;

	printf("*** Quiz Youcode 2021 ***\n");
	
	      for(i = 1; i <= 3; i++){
	
	    switch(i){
		 case 1: {
			printf("Question1. a? \n 1- a\n 2- b\n 3- c\n");
			scanf("%d", &x);
			 if(x == 1){
				printf("Bonne Reponse + %d point\n", points+=4);
			}else{
				printf("faut reponse - %point\n", points-=1);
			}
			          break;
		 }
		 case 2: {
			printf("Question2.  c? \n 1- a\n 2- b\n 3- c\n");
			scanf("%d", &x);
			 if(x == 3){
				printf("Bonne Reponse  %d Pnts\n", points+=2);
			}else{
				printf("faut reponse - %dPnts\n", points-=1);
			}
			          break;
		 }
	      case 3: {
			printf("Question3.  b? \n 1- a\n 2- b\n 3- c\n");
			scanf("%d", &x);
			if(x == 2){
				printf("Bonne Reponse %d point\n", points+=3);
			}else{
				printf("faut  %dPoint\n", points-=1);
			}
			          break;
		 }
	   }
	   }
	           	printf("Le Resultat final de quiz : %d Points\n", points);
	
	
	
	
	return 0;
}