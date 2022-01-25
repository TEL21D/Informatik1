#include<iostream>
#include<vector>

void print_ptr_vec(std::vector<int> *ptr_vec);
void print_ref_vec(std::vector<int> &ref_vec);

int main(int argc, char const *argv[])
{
   std::vector<int> vec1 = {1,2,3,4};
   std::vector<int> *ptr_vec = &vec1;

   // Vector ausgaben
   for (size_t i = 0; i < vec1.size(); i++)
   {
      std::cout << vec1[i] << std::endl;
   }
   // Pointer auf Vector ausgaben
   for (size_t i = 0; i < ptr_vec->size(); i++)
   {
      std::cout << ptr_vec->at(i) << std::endl;
   }

   std::cout << "Funktion print_ptr_vec() aufrufen:" << std::endl;
   print_ptr_vec(ptr_vec);
   print_ptr_vec(&vec1);

   // Verwenden einer Referenz als Funktionsparameter
   print_ref_vec(vec1);


   return 0;
}



void print_ptr_vec(std::vector<int> *ptr_vec){
   // Pointer auf Vector ausgaben
   for (size_t i = 0; i < ptr_vec->size(); i++)
   {
      std::cout << ptr_vec->at(i) << std::endl;
   }
}
void print_ref_vec(std::vector<int> &ref_vec){
   // Pointer auf Vector ausgaben
   for (size_t i = 0; i < ref_vec.size(); i++)
   {
      std::cout << ref_vec[i] << std::endl;
   }
}