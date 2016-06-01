#include<stdio.h>
#include<string.h>
int set(char);
char reset(int);
main()
{ int i,j;
  char str[100];
  char key[100];
  char s[100];
  printf(" Enter plaintext ");
  scanf("%s", str);
  printf(" Enter key ");
  scanf("%s", key);
  for(i=0;str[i]!='\0';i++)
    str[i] = reset( (set(str[i]) + set(key[i%(strlen(key))])) %26 ) ;
  printf(" Ciphertext %s",str);
  printf("\n");
}

int set(char a)
{ return ((int)a)-65;
}

char reset(int b)
{ char A[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  return A[b];
}