
#include "function.h"



void printa(int atp[]){
    for (int i =  0; i < 19; i++){
        cout << atp[i] << endl;
    }
}



int add(int *x[], int orig[], int a){
    int i;
    *x = new int[20];
            for (i = 0; i < 19; i++){
                (*x)[i] = orig[i];
          }
        (*x)[i] = a;
        return 0;
}

int adelete(int *x[], int orig[], int t){

    *x = new int[20];
            for (int i = 0; i < 19; i++){
                (*x)[i] = orig[i];
          }

          (*x)[t] = 0;
          cout << "Deleted a_ints[" << t << "].\n";
          return 0;
}

int replace(int *x[], int orig[], int t, int r){
    int hold;
    *x = new int[20];
            for (int i = 0; i < 19; i++){
                (*x)[i] = orig[i];
          }
          hold = (*x)[t];
          (*x)[t] = r;
          cout << "Changed " << hold << " to " << (*x)[t] << endl;
          return 0;
}

void check_e(int fints[], int test){
    for (int i = 0; i < 19; i++){
        
  
        
        if (test == fints[i]){
                cout << "Your number " << test << " was located at position " << i << ".\t";
                break;
            }
        else{
             

            }
        }
    
}
