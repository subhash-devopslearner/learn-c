#include<stdio.h>
#include<stdlib.h>

int main(){
FILE *fin, *fout;
char ch;

// Opening a file to read
fin=fopen("source_file.txt", "r");

// Opening a file to write
fout=fopen("dest_file.txt", "w");

if(fin==NULL){
  printf("myfile not found");
  exit(0);
}

// Reading source till EOF and writing to destination
while((ch=fgetc(fin))!=EOF){
  fputc(ch, fout);
}

fclose(fin);
fclose(fout);

return 0;
}
