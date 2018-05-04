#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int len;
int longestString;
char currentChar;

void silly(char StringA[], char StringB[]){

  char* stringPrintA = (char*) malloc(strlen(StringA));
  for (int i = 0; i < strlen(StringA); i++){
    int len = strlen(stringPrintA);
    currentChar = StringA[i];
    stringPrintA[len] = currentChar;
    stringPrintA[len+1] = '\0';
    printf("%s", stringPrintA);
  }

  for(int j = 0; j < strlen(StringB); j++){
    for(int k = 0; k < strlen(StringB) - j; k++){
      printf("%c", StringB[k]);
    }

  }
}

int main(){
    silly("phone", "booth");
    printf("\n");
}
