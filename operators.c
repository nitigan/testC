#include<stdio.h>

int main()
{
	/*
    printf("Relational operators!\n");
    printf("6 > 2 = \t%d\n", 6 > 2);
    printf("8 >= 3 = \t%d\n", 8 >= 3);
    printf("5 >= 18 = \t%d\n", 5 >= 18 );
    printf("7 == 4 = \t%d\n", 7 == 4 );
    printf("----------------------------------!\n");
    
    printf("Logocal operators!\n");
    printf("(5 == 4 + 1) && (18 <= 6 * 4) = \t%d\n", (5 == 4 + 1) && (18 <= 6 * 4));
	int x = 6 , y = 13 ;
	float z = 4.2 ;
	printf("(x != y/2) || (z <= y ) && (!(z == x / 2)) = \t%d\n", (x != y/2) || (z <= y ) && (!(z == x / 2)));
    printf("!1&&0 = \t%d\n", !1&&0 );
	printf("!(1&&0) = \t%d\n", !(1&&0) );
	printf("100 > 10 = \t%d\n" , 100>10 );
	printf("----------------------------------!\n");
	
	printf("Bitwise operators!\n");
	x = 7;
	printf("x      = \t%d\n", x );
    printf("x << 1 = \t%d\n", x = x << 1);
    printf("x << 3 = \t%d\n", x = x << 3);
    printf("x << 2 = \t%d\n", x = x << 2);
    printf("x >> 1 = \t%d\n", x = x >> 1);
    printf("x >> 2 = \t%d\n", x = x >> 2);
    printf("----------------------------------!\n");
    
    printf("Comma operators!\n");
	x = (y = 3 , y+1);
	printf("x = (y = 3 , y+1)     = \t%d\n", x );  
	y = 10 ;
	x = (y = y - 5 , 25/y);
    printf("x = (y = y - 5 , 25/y)     = \t%d\n", x );
    printf("----------------------------------!\n");
    */
    printf("Compound Assignment!\n");
    int x,y;
    x =10,y=5;
	printf("x : %2d | y: %2d",x,y);
    printf(" | x *= y + 2 : %2d " , x *=y+2);
    printf(" | x is now: %2d\n",x);
    
    x =10 ;
	printf("x : %2d | y: %2d",x,y);
    printf(" | x /= y + 1 : %2d " , x /=y+1);
    printf(" | x is now: %2d\n",x);
    
     x =10 ;
	printf("x : %2d | y: %2d",x,y);
    printf(" | x %%= y - 3 : %2d " , x %=y-3);
    printf(" | x is now: %2d\n",x);
    
    
    
    
    getch(); //Use to get one character input from user, and it will not be printed on screen.
    return 0;
}
