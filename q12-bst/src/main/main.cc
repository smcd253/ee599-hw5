#include <iostream>
#include "src/lib/solution.h"

int main()
{
   
    printf("input vector:\n{");
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
    std::vector<int> output;
    output.reserve(input.size());
    output = bst->vect_in_order_recursive();
    printf("output vector:\n{");
    for (int i = 0; i < (int)output.size(); i++)
    {
        if (i != (int) output.size() - 1)
        {
            printf("%d, ", output[i]);
        }
        else
        {
            printf("%d}\n", output[i]);
        }
    }

    printf("We can also find the height of our BST:\n");
    printf("bst->height() = %d\n", bst->height());
    
    printf("fin!\n");
    delete bst;
    return EXIT_SUCCESS;
}