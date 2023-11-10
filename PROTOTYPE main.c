#include <stdio.h>

int n = 0;

///// Start your function `shift_array` prototype /////
/////
///// End of you code /////

int main() {
  char opt; // shift option
  char *p_opt;

  scanf("%c %d", &opt, &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  ///// Start of your code to call function `shift_array` /////
  /////
  ///// End of you code /////

  printf("Shift option: %c\n", *p_opt);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

///// Start your function `shift_array` implementation /////
/////
///// End of you code /////