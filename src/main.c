#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../include/font.h"

int main(int argc, char* argv[]){


    FILE *font = fopen("fonts/big_money_nw", "r");
    if (font == NULL){
        fprintf(stderr, "[ERR] can't open file");
        exit(-1);
    }
    int i, j;

    /*-------------------------------------\\
    //------	LOADING FONTS	-------\\
    //-------------------------------------*/

    alphabet_t alph = load_font(font);

//    for (i=0; ALPH_SIZE; i++) {
//        printf("%s", alph[i].icon);
//    }

    printf("Font Loaded :)\n");

    /*-------------------------------------\\
    //-------------------------------------\\
    //-------------------------------------*/

    //print_banner("ab", "big_money_nw");
    return 0;
}
