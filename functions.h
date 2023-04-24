// N00918242 Luigi Razon

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
// arguments s[] to put char array in and lim for how many chars to put in s[]
// takes user input to put into s[]
// returns how many chars put into s[], discluding null terminator
int krgetline(char *s, int lim);

int atoi(char *s);

bool parse_line(char *buffer, int buffer_size, int token, char *s);

int get_line(char *s);

int mystrcmp(char *s, char *t);

#endif