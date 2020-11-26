#include <stdio.h>
#include <stdlib.h>
#include "keyword.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int is_whitespace(char a)
{
	if(a==' '||
	   a=='\n'||
	   a=='\r'||
	   a=='\t'||
	   a=='(' )
	return 1;
	
	else
	return 0;
}

int fget_word(FILE *fp, char* word){

    char c;
    int cnt;
    
	while((c=fgetc(fp))!=EOF) {
		
		if(is_whitespace(c) == 0)
		break;
	}
	
	if (c==EOF)
	return 0;
	
	cnt =0;
	word[cnt++] = c;
	word[cnt] = '\0';
	
	while((word[cnt]=fgetc(fp))!=EOF){
		
		if(is_whitespace(word[cnt]) == 1)
		{
			word[cnt] = '\0';
			break;
		}
		cnt++;
	}
	return cnt;
}



int main(int argc, char *argv[]) {
	
	FILE *fp;
	char file[100];
	char word[100];
	int cnt;
	
	printf("input file: ");
	scanf("%s",file);  //배열이름(포인터)  
	
	 
	if((fp = fopen(file,"r")) == NULL)
	 {
	 	printf("invaild file(%s)\n", file);
	 	return -1;    //프로그램 종료  
	 }
	 

    
    while(fget_word(fp,word)!=0){
    	count_word(word);
	}
	
	print_word();
	
	fclose(fp); 
	 

	
	
	return 0;
}
