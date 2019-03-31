/* base:
 This was written by call number 1.
 This ALSO was written by call number 1.
 */

#include <iostream>


void print_tree(int x, int y = 1){
  if (x == y-1){return ;}
  for(int i = 1; i < y; i++) {
        std::cout << "\t";
    }
    std::cout<<"This was written by call number "<< y << "." << std::endl;
    print_tree(x, y+1);
  for(int i = 1; i < y; i++) {
        std::cout << "\t";
    }
    std::cout<< "This ALSO written by call number "<< y << "." << std::endl;
  return;
}

int main(){
    int n;
        std::cout << "Enter number of trees to print: ";
        std::cin >> n;
    print_tree(n);
    return 0;
};
