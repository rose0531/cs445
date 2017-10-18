#ifndef TREE_H
#define TREE_H
#include "token.h"

struct tree{
  int prodrule;
  int nkids;
  struct tree *kids[9]; //find longest production rule
  struct token *leaf;
};

struct tree *root;


int is_nonterminal(struct tree *t);
int print_tree(struct tree *t, int depth);
char *humanreadable(struct tree *t);
char *nonterm_lookup(int rule);

#endif //TREE_H
