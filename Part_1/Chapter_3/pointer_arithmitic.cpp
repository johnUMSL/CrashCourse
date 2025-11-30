#include <cstdio>

int main() {
  char lower[] = "abc?e";
  char upper[] = "ABC?E";
  char* upper_ptr = &upper[0];

  *(lower +3) = 'd';
  *(upper_ptr +3) = 'D';

  char letter_d = *(lower + 3); // lowe decays into a pointer when we add
  char letter_D = 
}