#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../include/font.h"

int main(int argc, char* argv[]){

    letra* alph;
    alph = init_alphabet();

    int i;


  //  char* text = "gei";
  //  char* message = malloc(strlen(text)*54*sizeof(char));
  //  strcpy(message, "");

  //  for(i=0;i<6;i++){
  //      printf("%s%s%s\n",alph[6].graffiti[i],alph[4].graffiti[i],alph[8].graffiti[i]);
  //  }

  //  for(i=0;i<6;i++){
  //      printf("%s",strcat(alph[0].graffiti[i], alph[1].graffiti[i]));
  //      printf("\n");
  //  }
  //  //printf("%s\n", message);

//    printf("\n");
//    for(i=0;i<6;i++){
//        printf("%s\n",alph[0].graffiti[i]);
//    }
	
    char str[20];
    while(1){
	scanf("%s", str);
	print_banner(str);
	printf("\n");
    }
    return 0;
}
