#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/font.h"

letra* init_alphabet(){
    letra* alphabet = malloc(26*sizeof(struct letter));
    int indx;

    letra a;
	memcpy(a.graffiti[0], "        ", strlen("        ")+1);
	memcpy(a.graffiti[1], "_____   ", strlen("_____   ")+1);
	memcpy(a.graffiti[2], "\\__  \\  ", strlen("\\__  \\  ")+1);
	memcpy(a.graffiti[3], " / __ \\_", strlen(" / __ \\_")+1);
	memcpy(a.graffiti[4], "(____  /", strlen("(____  /")+1);
	memcpy(a.graffiti[5], "     \\/ ", strlen("     \\/ ")+1);

	alphabet[0] = a;

    letra b;
	strcpy(b.graffiti[0], "___.    ");
	strcpy(b.graffiti[1], "\\_ |__  ");
	strcpy(b.graffiti[2], " | __ \\ ");
	strcpy(b.graffiti[3], " | \\_\\ \\");
	strcpy(b.graffiti[4], " |___  /");
	strcpy(b.graffiti[5], "     \\/ ");

	alphabet[1] = b;
    letra c;
    char letter_c [6][8] =
    {
	"        ",
	"  ____  ",
	"_/ ___\\ ",
	"\\  \\___ ",
	" \\___  >",
	"     \\/ "
    };
 //   strcpy(c.graffiti, letter_c);

    alphabet[2] = c;
    letra d;
    letra e;
    letra f;
    letra g;
    letra h;
    letra i;
    letra j;
    letra k;
    letra l;
    letra m;
    letra n;
    letra o;
    letra p;
    letra q;
    letra r;
    letra s;
    letra t;
    letra u;
    letra v;
    letra w;
    letra x;
    letra y;
    letra z;
    return alphabet;
}

void print_banner(char* text, char* font, char* color){
    int graffiti = strcmp(font, "graffiti");
    int nw_3d = strcmp(font, "nw_3d");
}
