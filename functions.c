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

/// @brief copies the string at position token from s
/// @param buffer char pointer to store parsed string
/// @param buffer_size size of given buffer
/// @param token index of string
/// @param s char pointer for given line
/// @return if there was data copied at the token
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

int get_line(char *buffer, int buffer_size, char *s) {
  char *temp = s;
  while (temp != "\n" ||
      temp != "\0") {
    buffer = temp;
    buffer++; temp++;
  }
  return temp - s;
}

int mystrcmp(char *s, char *t) {
	int i = 0;
	for (;s[i] == t[i]; i++) {
		if (s[i] == '\0')
			return 0;
	return s[i] - t[i];
}