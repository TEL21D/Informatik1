#include<iostream>

void print_c_arr(int arr[]);

int main(int argc, char const *argv[])
{
   int c_arr[3] = {1,2,3};

   print_c_arr(c_arr);

   return 0;
}

void print_c_arr(int c_arr[]){
   std::cout << "c_arr[1]: " << c_arr[1] << std::endl;
   std::cout << "*(c_arr+1): " << *(c_arr+1) << std::endl;
}