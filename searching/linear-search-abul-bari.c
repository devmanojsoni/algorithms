#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, September 21, 2019  */
/* Description: Linear search program by abdul bari  */

int main() {
  
    /*Code here*/
    int key, A[10];
    printf("Enter 10 array elements:");
    
    // take input with for-loop using user keyboard
    for (int i=0,n=10; i<n; i++) { // i=0 only initialized once
    scanf("%d", &A[i]);// after init --> CPU 1: Condition check, 2: Process statements, 3:Update
    }
    
    printf("Enter key:");
    scanf("%d", &key);  
    
    for (int i=0,n=10; i<n; i++) { // i=0 only initialized once

        if (key==A[i]){
        //tab to code
        printf("Found at %d ",i);
        getch();// getch(); should always be before return0; in vscode// DO NOT WRITE THIS IN EXAM
        return 0;   
        }

    }
    printf("Not found:");
    // people just get confused here, they think they should write not found just after the if else
    // No, you should only say NOT FOUND after you completely scan the array, and for that you have come out scanning the
    // for loop and say not found
  
  
  
  //system("pause");
  getch();// getch(); should always be before return0; in vscode// DO NOT WRITE THIS IN EXAM
  return 0;
}