//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Sunday, September 22, 2019  */
/* Description: Program Description  */

int main() {
  
  /*Code here*/
  int l=0, h=9, key = 25;
  int A[10]={6,8,13,17,20,22,25,28,30,55};
  
  while (l<h) { // first condition check then process
   int mid=(l+h)/2;
   if (key==A[mid]) {
    printf("Key is found at %d ",mid);
    //getch();
    //return 0;
   } else if (key<A[mid]) {
      h=mid-1;
     } else {
        l=mid+1;
       }
   
  }
  
  if (l>h) {
    printf("Not found:");
    
  }
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|