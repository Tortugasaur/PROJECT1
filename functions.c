// N00918242 Luigi Razon

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// altered the implementation from class
int krgetline(char *s, int lim) {
  int i = 0;
  char c;
  while (i < lim - 1 && 
      (c = getc(stdin)) != EOF && 
      c != '\n') {
    *(s + i++) = c;
  }
  if (c == '\n') {
    *(s + i++) = c;
  }
  *(s + i) = '\0';
  return i;
}

// altered the implementation from class
int atoi(char *s) {
  int total = 0;
  while (*s >= '0' && *s <= '9') {
    total = total * 10 + (*s - '0');
    s++;
  }
  return total;
}

bool parse_line(char *buffer, int buffer_size, int token, char *s) {
    int i = 0, j = 0, k = 0, token_count = 0;
    int line_len = strlen(s);
    
    // Find the start of the desired token
    while (i < line_len && token_count < token) {
        if (s[i] == ',') {
            token_count++;
        }
        i++;
    }
    
    // Copy the token to the buffer
    while (i < line_len && j < buffer_size - 1 && s[i] != ',') {
        buffer[j++] = s[i++];
    }
    buffer[j] = '\0';
    
    return (j > 0);
}