#include <stdio.h>

int is_palindrome(char *str) {
  int len = strlen(str);
  int i = 0;
  int j = len - 1;

  while (i < j) {
    if (str[i] != str[j]) {
      return 0;
    }
    i++;
    j--;
  }

  return 1;
}

int main() {
  char *str = "racecar";
  int is_palindrome = is_palindrome(str);

  if (is_palindrome) {
    printf("The string is a palindrome.\n");
  } else {
    printf("The string is not a palindrome.\n");
  }

  return 0;
}
