# EE599 HW4 - BST Functions

Created - Spencer McDonough : 02/03/2020<br>
Last Modified - Spencer McDonough : 02/11/2020<br>
University of Southern California


## Q1 - Tree Depth
## Compilation Instructions
```bash
cd q21-bst
# run main function
bazel run src/main:main 
#run tests
bazel run tests:tests
```
## Runtime Analysis
```
int BST::height() 
```
Runtime = &theta;(3 + 2*H), where H &isin;[log(n), n] --> O(n)

## Q2 - In Order Traversal
## Compilation Instructions
```bash
cd q21-bst
# run main function
bazel run src/main:main 
#run tests
bazel run tests:tests
```
## Runtime Analysis
```
std::vector<int> BST::vect_in_order()
```
Runtime = &theta;(3 + 6*(n + 2*(n-1))) --> O(n)

```
std::vector<int> BST::vect_in_order_recursive()
```
Runtime = &theta;(2 + 2*(n + 2*(n-1))) --> O(n)