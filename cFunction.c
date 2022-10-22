#include <stdio.h>

int main() {
  void myFunction() {
    printf("I just got executed!");
  }

  int main() {
    myFunction(); // call the function
    return 0;
  }
  return 0;
}
