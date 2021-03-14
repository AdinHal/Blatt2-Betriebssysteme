#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAXCHARS (200+1)

int main(int argc, char* arg[])
{

FILE *file= fopen("/etc/passwd","r");
char currentline[200];
if(!file)
{
perror("Error opening file");
return 1;}

while (fgets(currentline, sizeof(currentline), file)!= NULL ){
printf("%s", currentline);
char *c1 = strchr(currentline,':');
printf("%s", c1);


char *name="";

for(int i=0; i < 100000; i++){
if(currentline[i]==':'){
break;}
printf("%s",currentline[i])
}

printf("%s",name);
/*printf("%.*s", c, currentline);*/

char *c2= c1+1;
char *c3= c2+1;


}
fclose(file);
return 0;
}


