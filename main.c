#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{

	int     ID;
	char    name[100];
	double  grade;
	};

int main(int argc, char *argv[]) {
	
    struct student s1 = {68, "minseo", 4.3};
    
    s1.ID = 2013;
    s1.grade = 4.0;
    
	printf("ID : %d  name : %s  grade :%f", s1.ID,s1.name,s1.grade );
	
	return 0;
}
