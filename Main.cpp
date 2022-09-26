//Ibrahim Sammy Ayyad, Data Structures ASSIGNEMNT 1
//Tues-Thurs 4:00-5:15 class.

using namespace std;
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "function.h"

//print function to check array


int * a_ints = new int[20];


ifstream ints1;



int main(){    


    cout << "Reading floats" << endl;
    ints1.open("int_file.txt");


    cout << "first batch of input\n" << endl;
    try
      {
    
        while (ints1.eof() == false){
              for (int i = 0; i < 19; i++){
                string line;
                //float convline;
                
                //(getline(floats1, line));
                ints1 >> line;
               // istringstream iss(line);
                int convline = stoi(line);
                a_ints[i] = convline;
                cout << a_ints[i] << endl;
                
          }
        
        }
  
    }
    catch(...){
        cout << "carry on\n";
    }
    
    cout << "running check function\n";
    check_e(a_ints, 34567);

    cout << "running change function\n";
    replace(&a_ints, a_ints, 3, 69696);

    cout << "running add function\n";
    add(&a_ints, a_ints, 42042);

    cout << "running print function\n";
    printa(a_ints);

    cout << "running delete function\n";
    adelete(&a_ints, a_ints, 0);

    cout << "running print function\n";
    printa(a_ints);


    ints1.open("int_file.txt");
    return 0;
}


