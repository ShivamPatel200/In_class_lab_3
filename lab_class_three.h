#ifndef LAB_CLASS_THREE
#define LAB_CLASS_THREE
struct node {
    int number;
    struct node * next;
};
struct node *build_linked_list(int elements);
void print_linked_list(struct node * list, int elements);
int delete_linked_list(struct node * list, int elements);
int sum_values_in_linked_list(struct node * list, int elements);
#endif