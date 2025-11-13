#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 'a';

    int *iptr;      
    iptr = &i;      

    char *cptr;     
    cptr = &c;      

    int *iptr2;     
    iptr2 = iptr;   

    printf("i : %p\n%p (size:%zu)\n", iptr, &i, sizeof(iptr));
    printf("c : %p\n%p (size:%zu)\n", cptr, &c, sizeof(cptr));
    printf("iptr2 : %p, %d\n", iptr2, *iptr2);

    return 0;
}

	
	
	
	
	return 0;
}
