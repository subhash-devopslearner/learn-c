#include<stdlib.h>
#include<stdio.h>
int main()
{
FILE *fin;
char ch;

// Opening a file
fin=fopen("data.txt", "r");

if(fin==NULL){
 printf("File not found.");
 exit(0);
}

// Reading file upto EOF
while((ch=fgetc(fin))!=EOF)
{
printf("%c",ch);
}

return 0;
}
