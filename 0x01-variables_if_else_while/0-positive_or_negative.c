 #include <stdio.h>

int main() {
    int num1 , num2 , num3;
    num1 = 0;
    while (num1 < 8) {
        num2 = num1 + 1;
        while (num2 <9) {
	num3 = num2 + 1;
        while (num3 < 10){
	    putchar((num1 % 10( + '0'
                );
            putchar((num2 % 10) + '0'
                );
            putchar((num3 % 10) + '0'
	        );
        if (num 1 ! = 7 || num2 !=8 ||
            num3 != 9) {
            putchar(',');
            putchar(' ');
            }
            num3++;
        }
        num2++;
    }
    num1++;
 }
 return 0; 
