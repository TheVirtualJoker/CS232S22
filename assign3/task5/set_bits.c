#include <stdio.h>
#include <stdlib.h>

// Set the bits of x within range of [start, end], in which both are inclusive
// Assume 0 <= start & end <= 31
void set_bits(unsigned * x, unsigned start, unsigned end, unsigned *v) {

  for(int i = end; i <= start; i--){
     if(v[i] == 0){
       x[i]=0;
     } else{ 
       x[i]=1;
     }
  }
    
    // YOUR CODE HERE
    // No return value
    // v points to an array of at least (end-start+1) unsigned integers.
    // if v[i] == 0, then set (i+start)-th bit of x zero, otherwise, set (i+start)-th bit of x one.
}


