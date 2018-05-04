#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void rotate(int k, char s[]){
  printf("The string is: %s ", s);

if ( k < 0 ) {
printf("You need a value greater than 0\n");
exit(-1);
}

  if(k ==0){
    printf("\nThe final string is : %s", s);
    exit(-1);
  }

  int len = strlen(s);
  char newString[len];

int numIterations = k % len;
  printf("\nbefore loop");
for( int i = 0; i < numIterations; i++ ) {
for( int j = 0; j < len; j++ ) {
newString[j] = s[(j + i + 1) % len];
}
}
  newString[len-1] = s[numIterations - 1];
  newString[len] = '\0';
printf("\nThe final string is: %s ", newString);
}


int main() {
  rotate(1000000000, "abcdefghijklmnopqrstuvwxyz");
}
}
