#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node {
    char * value; //must use dynamic allocation 
    struct node* next;
} node_t;

node_t * construct_3_strs() {
    char* CS232 = "CS232";
    char* is = "is";
    char* awesome = "awesome";
    node_t* x;
    node_t* y;
    node_t* z;
    x = (node_t*)malloc(sizeof(node_t));
    y = (node_t*)malloc(sizeof(node_t));
    z = (node_t*)malloc(sizeof(node_t));
    x->next= y;
    y->next= z;
    z->next= x;
    x->value=malloc(strlen(CS232) + 1);
    memcpy(x->value, CS232, strlen(CS232)+1);
  
    y->value =malloc(strlen(is) + 1);
    memcpy(y->value, is, strlen(is)+1);
  
    z->value =malloc(strlen(awesome) + 1);
    memcpy(z->value, awesome, strlen(awesome)+1);
    return x;
    //just to pass compiler, please edit as needed.
}

//You can ignore the following code for testing
int dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * x = construct_3_strs();
    return dump_all(x);

}

int dump_all(node_t * x) {
    printf("x -> %s", x->value);
    node_t * y = x->next;
    printf(" %s", y->value);
    node_t * z = y->next;
    printf(" %s\n", z->value);
    if(z->next != x) {
    	printf("failed");
	return -1;
    } else {
        return 0;
    }
}
