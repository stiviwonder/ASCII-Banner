#include <stdio.h>
#include <string.h>

#include "../include/font.h"

int main(int argc, char* argv[]){

    letra* alph;
    alph = init_alphabet();

    int i;


    printf("\n");

    char letter_c [6][9] =
    {
	"        ",
	"  ____  ",
	"_/ ___\\ ",
	"\\  \\___ ",
	" \\___  >",
	"     \\/ "
    };
    for(i=0;i<6;i++){
        printf("%s%s\n",alph[0].graffiti[i],alph[1].graffiti[i]);
    }
    return 0;
}
