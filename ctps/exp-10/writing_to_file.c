#include<stdio.h>
int main(){

FILE *fout;

char ch, line[]="This string is to write in file input.txt";
int i=0;

// File opening to write
fout=fopen("input.txt","w");

// Reading string of line till NULL
while((ch=line[i++])!='\0'){
  fputc(ch, fout);
}

// File closing
fclose(fout);

return 0;
}
