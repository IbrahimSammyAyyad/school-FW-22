
#pragma once

#ifndef main
#define main

//pretty much all of these functions utilize pointers to 
//create a new array, reassign it's values, and then
//perform one final action (add, delete, change, etc)

void printa(int atp[]);

int add(int *x[], int orig[], int a);

int adelete(int *x[], int orig[], int t);

int replace(int *x[], int orig[], int t, int r);

void check_e(int fints[], int test);
}


#endif


