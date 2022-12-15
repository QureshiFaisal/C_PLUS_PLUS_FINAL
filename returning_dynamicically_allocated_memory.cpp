#include "iostream"

using namespace std;


int *create_array(size_t size, int init_val );
void display(const int*const array, size_t size);

int main (){
  int *my_array = {nullptr};
  size_t size ;
  int init_val ;

  cout << "Enter the size of the array "<< endl ;
  cin >> size;
  cout << "Enter the initial value "<< endl ;
  cin >> init_val;
  my_array = create_array(size, init_val);// create array will return a pointer that poinbts to a variable that will vanish from the call stack when the function is executed, thus we are saving it in main as 'my_array'.
  cout<< "\n................." << endl;
  display(my_array, size);

  delete[] my_array;
  return 0;

}
int *create_array(size_t size, int init_val ){
int *new_storage = {nullptr};

new_storage = new int [size];
for (size_t i= 0; i < size; ++i)
  *(new_storage + i) = init_val;
  return new_storage; // this value will not be accessible to the display function as the this functions and all its variable will vanish from the stack once it is executed, thus we will store it in the main.
}

void display(const int *const array, size_t size){
  for(size_t i= 0; i <size; ++i)

cout << *(array+i) << endl ;
  cout << endl;

  
}