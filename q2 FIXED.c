#include <stdio.h>

int n = 0;  

///// Start your function `shift_array` prototype /////
void shift_array(int *arr,char *p_opt);
/////
///// End of you code /////

int main() {
  char opt;     // shift option
  char *p_opt;

  scanf("%c %d", &opt, &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  ///// Start of your code to call function `shift_array` /////
  p_opt = &opt;
  shift_array(arr,p_opt);
  /////
  ///// End of you code /////

  printf("Shift option: %c\n", *p_opt);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

///// Start your function `shift_array` implementation /////
void shift_array(int *arr,char *p_opt){
    if (*p_opt == 'L')
    {
        for (int i = 0; i < n-1; i++)
        {
            int temp1 = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp1;
        }
    }
    if (*p_opt == 'R')
    {
        for (int i = n-1; i > 0; i--)
        {
            int temp2 = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp2;
        }
    }
}
/////
///// End of you code /////