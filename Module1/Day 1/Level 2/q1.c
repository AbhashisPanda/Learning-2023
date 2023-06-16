#include <stdio.h>
int main() {
     int a,b,c ;
     printf("Enter three numbers\n");
     scanf("%d,%d,%d\n",&a,&b,&c);
    if (a > b) {
		if (a > c) {
			printf("Biggest number %d\n",a);
		}
		else {
			printf("Biggest number %d\n",c);
		}
    }
    else if(b > a) {
        if (b > c) {
			printf("Biggest number %d\n",b);
		}
		else {
			printf("Biggest number %d\n",c);
		}
    }
	return 0;
}