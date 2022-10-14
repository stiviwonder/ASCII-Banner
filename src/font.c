#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/font.h"

alphabet_t init_alphabet(int row, int col){
    alphabet_t alph;

    alph.letters = malloc(ALPH_SIZE*sizeof(letter_t));
    alph.row = row;
    alph.col = col;

    int i;

    for (i=0; i<ALPH_SIZE; i++) {
        alph.letters[i].icon = malloc(row*col*sizeof(char));
    }

    return alph;
}

void free_alph (alphabet_t alph){
    int i;
    for (i=0; i<ALPH_SIZE; i++)
        free(alph.letters[i].icon);
    free(alph.letters);
}

alphabet_t load_font(FILE *font){
    int row, col;
    int i, j, k;
    size_t len;

    printf("load fonts ...\n");

    printf("scanning ...\n");
    fscanf(font, "%d\n", &row);
    fscanf(font, "%d\n", &col);

    alphabet_t alph = init_alphabet(row, col);

    printf("AA\n");
    char *line;

    i = 0;
    j = 0;

    printf("row: %d col: %d \n", row, col);

    // read line
    while (getline(&line, &len, font) != -1){
//        printf("%s", line);

        for (k=0; k<col; k++) {
            alph.letters[i].icon[j*col + k] = line[k];
        }
        if (j == row){
//            printf("i: %d j: %d \n",i,j);
            i++;
            j = 0;
        }
        j++;
    }

    for (i=0; i<ALPH_SIZE; i++) {
        for(j=0; j<row; j++) {
            for (k=0; k<col; k++) {
                printf("%c", alph.letters[i].icon[j*col+k]);
            }
            newline;
        }
    }


    fclose(font);

    return alph;
}

void print_banner(char* text, char* font_name){

    int i,j;
    int row, col;

    char file[30] = "fonts/";
    strcat(file, font_name);

    FILE *font = fopen(file, "r");
    if (font == NULL){
        fprintf(stderr, "[ERR] can't open file");
        exit(-1);
    }

    printf("scanning ...\n");
    fscanf(font, "%d", &row);
    fscanf(font, "%d", &col);

    // Init 3d
    char *** alphabet = (char***)malloc(ALPH_SIZE*sizeof(char **));
    for (i=0; i<ALPH_SIZE; i++){
        alphabet[i] = (char**) malloc(row*sizeof(char*));
        for (j=0;j<row;j++)
            alphabet[i][j] = malloc(col*sizeof(char));
    }




    /*-------------------------------------\\
    //------	LOADING FONTS	-------\\
    //-------------------------------------*/

    //load_font(font, alphabet, row, col);
    char line[50];

    i = 0;
    j = 0;
    while (fgets(line, sizeof(line), font) != NULL ){
        alphabet[i][j] = line;
        //memcpy(alphabet[i][j], line, strlen(line)+1);
        //strcpy(alphabet[i][j], line);
        //printf("%s", alphabet[i][j]);
        if (j == row){
            i++;
            j = 0;
        }
        j++;
        //printf("i: %d j: %d \n",i,j);
    }
    printf("Font Loaded :)\n");
    /*-------------------------------------\\
    //-------------------------------------\\
    //-------------------------------------*/




    char** message = (char**) malloc(strlen(text)*row*sizeof(char*));
    for (i=0;i<strlen(text)*row;i++) message[i] = (char*) malloc(col*sizeof(char));

    //char** message = (char**) malloc(strlen(text)*100*sizeof(char*));
    //for (i=0;i<strlen(text)*100;i++) message[i] = (char*) malloc(100*sizeof(char));

    for (i=0; i<row; i++){

        for (j=0; j<strlen(text);j++){
            switch(text[j]){
                case 'a':
                    strcat(message[i], alphabet[0][i]);
                    break;
                case 'b':
                    strcat(message[i], alphabet[1][i]);
                    break;
                case 'c':
                    strcat(message[i], alphabet[2][i]);
                    break;
                case 'd':
                    strcat(message[i], alphabet[3][i]);
                    break;
                case 'e':
                    strcat(message[i], alphabet[4][i]);
                    break;
                case 'f':
                    strcat(message[i], alphabet[5][i]);
                    break;
                case 'g':
                    strcat(message[i], alphabet[6][i]);
                    break;
                case 'h':
                    strcat(message[i], alphabet[7][i]);
                    break;
                case 'i':
                    strcat(message[i], alphabet[8][i]);
                    break;
                case 'j':
                    strcat(message[i], alphabet[9][i]);
                    break;
                case 'k':
                    strcat(message[i], alphabet[10][i]);
                    break;
                case 'l':
                    strcat(message[i], alphabet[11][i]);
                    break;
                case 'm':
                    strcat(message[i], alphabet[12][i]);
                    break;
                case 'n':
                    strcat(message[i], alphabet[13][i]);
                    break;
                case 'o':
                    strcat(message[i], alphabet[14][i]);
                    break;
            }
        }
        //printf("%s\n", message[i]);
    }
    //free_alph();

}



