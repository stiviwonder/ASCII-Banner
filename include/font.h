#ifndef font_h
#define font_h

#include <stdio.h>

typedef struct letter{
    char *icon;
}letter_t;

typedef struct alphabet {
    int row;
    int col;
    letter_t* letters;
}alphabet_t;

#define ALPH_SIZE 26
#define newline printf("\n")

alphabet_t init_alphabet();
void free_alph (alphabet_t alph);
alphabet_t load_font(FILE *font);
void print_banner(char* text, char* font_name);
#endif
