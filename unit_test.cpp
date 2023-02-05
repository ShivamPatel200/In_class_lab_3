#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "lab_class_three.h"
#include "doctest.h"
using namespace std;

TEST_CASE("Testing my linkedlist function") {
    struct node * lst1 = build_linked_list(4);
    struct node * lst2 = build_linked_list(8);
    struct node * lst3 = build_linked_list(10);
    SUBCASE("build function"){
        struct node * list_ptr = lst1;
        for(int i = 0; i < 4; i++){
            CHECK(list_ptr->number == i);
            list_ptr = list_ptr->next;
        }
    }
    SUBCASE("sum function"){
        CHECK(sum_values_in_linked_list(lst1, 4) == 6);
        CHECK(sum_values_in_linked_list(lst2, 8) == 28);
        CHECK(sum_values_in_linked_list(lst3, 10) == 45);
    }
    SUBCASE("delete function") {
        CHECK(delete_linked_list(lst1, 4) == 4);
        CHECK(delete_linked_list(lst2, 8) == 8);
        CHECK(delete_linked_list(lst3, 10) == 10);
    }
}
