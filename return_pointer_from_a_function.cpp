#include "iostream"

using namespace std; 


int *largest_int( int *int_ptr1, int *int_ptr2){
 if (*int_ptr1 > *int_ptr2)
 return int_ptr1;
 else
 return int_ptr2;

}
int main(){
int val1 = 5;
int val2 = 10;

int *ptr1 = &val1;
int *ptr2 = &val2;

cout << largest_int(ptr1, ptr2) << endl;

  return 0;
}

//NEVER RETURN A POINTER TO A LOCAL VARIABLE 