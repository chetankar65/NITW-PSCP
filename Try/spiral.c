/*
* Author : Atman Kar
* College : BITS Pilani >> NITW
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n;
    int last_n;

    scanf("%d", &n);

    // the last number is the square of n
    last_n = n*n;
    
    // 1 2 3
    // 8 9 4
    // 7 6 5

    // 01 02 03 04 05
    // 16 17 18 19 06
    // 15 24 25 20 07
    // 14 23 22 21 08
    // 13 12 11 10 09


    int a[n][n];
    int x,y;
    int dir=0; // 0,1,2,3
    x=0;
    y=0;
    memset(a, 0, n*n*sizeof(int));
    int i=1;
   
    while(i<=n*n) {

       if (i == n*n) {
          a[n/2][n/2] = i;
          break;
       }

       switch(dir) {
 
           case 0:
              if (a[y][x + 1] != 0) {
                  dir=1;
                  break;
              }
              if (x == n-1)  {
                  dir=1;
                  break;
              }
	      a[y][x] = i;
              x++;
              i++;
              break;

           case 1:
              if (a[y + 1][x] != 0) {
                  dir=2;
                  break;
              }
              if (y == n-1)  {
                  dir=2;
                  break;
              }
	      a[y][x] = i;
              y++;
              i++;
              break;

           case 2:
              if (a[y][x - 1] != 0) {
                  dir=3;
                  break;
              }
              if (x == 0)  {
                  dir=3;
                  break;
              }
	      a[y][x] = i;
              x--;
              i++;
              break;

           case 3:
              if (a[y - 1][x] != 0) {
                  dir=0;
                  break;
              }
              if (y == 0)  {
                  dir=0;
                  break;
              }
	      a[y][x] = i;
              y--;
              i++;
              break;
       } 


    }

    for (int i=0;i<n;i++) {
       for (int j=0;j<n;j++) {
          printf("%d ", a[i][j]);	
       }
       printf("\n");
    }

    return 0;
}
