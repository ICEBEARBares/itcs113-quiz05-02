#include <stdio.h>

int n = 0;

///// Start your function `shift_array` prototype /////
void shift_array(int *arr, char *p_option);
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
  p_opt = &opt;
  shift_array(arr, p_opt);
  ///// End of you code /////

  printf("Shift option: %c\n", *p_opt);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

///// Start your function `shift_array` implementation /////
void shift_array(int *arr, char *p_option) {
  if (*p_option == 'L') {
    int temp = *arr;
    for (int i = 0; i < n - 1; i++) {
      *(arr + i) = *(arr + i + 1);
    }
    *(arr + n - 1) = temp;
  } else if (*p_option == 'R') {
    int temp = *(arr + n - 1);
    for (int i = n - 1; i > 0; i--) {
      *(arr + i) = *(arr + i - 1);
    }
    *arr = temp;
  } else {
    *arr = *arr;
  }
}
///// End of you code /////