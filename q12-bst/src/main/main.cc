#include <iostream>
#include "src/lib/solution.h"

int main()
{
    // BST* bst = new BST();

    // printf("Let's build a BST from scratch with numbers 0-9.\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     bst->push(i);
    // }
    // bst->print_in_order();

    // printf("Is 5 in our BST? ");
    // printf("%s\n", bst->find(5) ? "Yes" : "No");
    
    // printf("********************* print by level: *********************\n");
    // bst->print_by_level();
    
    // delete bst;
    
    printf("Now let's build a BST from the input vector:\n{");
    std::vector<int> input = {15, 11, 12, 10, 14, 13, 16, 18, 17, 20, 19};
    for (int i = 0; i < (int)input.size(); i++)
    {
        if (i != (int) input.size() - 1)
        {
            printf("%d, ", input[i]);
        }
        else
        {
            printf("%d}\n", input[i]);
        }
    }
    BST* bst = new BST(input);
    printf("Our BST matches the input AND sorts it.\n");
    bst->print_in_order();
    printf("********************* print by level: *********************\n");
    bst->print_by_level();
    
    printf("Let's try deleting an element.\n");
    printf("%s\n", bst->erase(15) ? "Element successfully erased." : "Element is not in bst-> Cannot erase.");
    bst->print_in_order();

    printf("fin!\n");
    delete bst;
    return EXIT_SUCCESS;
}