#ifndef TOKEN_H
#define TOKEN_H

struct token{
  int category;
  char *text;
  int lineno;
  char *filename;
  int ival;
  int ivalflag;
  char *sval;
  int svalflag;
  double dval;
  int dvalflag;
};

#endif //TOKEN_H
