/**
 * QUESTIONS:
 * 1. Define the following:
 *      a. Perfect binary tree
 *      b. Complete binary tree
 *      c. Full binary tree
 *      d. Balanced binary tree
 * 
 * 2. Which of these is utilized by a heap
 *    data structure? Why?
 */

/**
 * QUESTIONS:
 * 3. Given the below tree, what is
 *    the order of:
 *      a. Inorder traversal (LNR)
 *      b. Preorder traversal (NLR)
 *      c. Postorder traversal (LRN)
 * 
 *                ┌───┐
                  │ 7 │
              ┌───┴───┴───┐
              │           │
            ┌─▼─┐       ┌─▼─┐
            │ 4 │       │ 9 │
        ┌───┴───┴───┐   └───┘
        │           │
      ┌─▼─┐       ┌─▼─┐
      │ 1 │       │ 5 │
      └───┘       └───┘
 * 
 * HINT: I write the letters (NLR or LNR or LRN) next to
 *       each of the nodes and cross off the letters as
 *       I process the tree. The 'N' refers to the node
 *       itself, and it is BEFORE the L/R in PREorder,
 *       BETWEEN L/R in INorder, and AFTER the L/R in
 *       POSTorder. Hope this helps!
 * 
 * 4. Which order traversal gives you:
 *      a. the nodes in ascending order
 *      b. the nodes bottom to top, left
 *         to right
 *      c. a depth-first traversal
 * 
 * 5. Can in-order traversal give the in-order values in a heap?
 */

/**
 * QUESTIONS:
 * 6. Given the below tree in array
 *    representation perform the following
 *    operations:
 *      a. Remove 'E'
 *      b. Remove 'B'
 *      c. Remove 'T' (two correct answers)
 * 
 *                       1 1 1 1 1
     0 1 2 3 4 5 6 7 8 9 0 1 2 3 4
    ┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐
    │D│E│T│Y│ │K│S│ │H│ │ │B│ │ │J│ 
    └─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘

   NOTE: This is an invalid BST. I just
            chose random letters/values.
            Node replacement works the same
            way no matter what.
 * NOTE: I perform each operation separately,
 *       not one after another
 * NOTE: I would draw the tree from the array
 *       to better understand what you're 
 *       working with.
    */


/**
 * QUESTIONS:
 * 7. What are the benefits of using an array for a BST?
 * 
 * 8. What are the drawbacks of using an array for a BST?
 * 
 * 9. What are the benefits of using a linked-node representation
 *     of a BST?
 * 
 * 10. What are the drawbacks of using a linked-node representation
 *     of a BST?
 * 
 * 11. What makes the shape of a tree "bad"?
 * 
 * 12. When will the insertion/search time on a BST be
 *      a. tight upper bound O(n)
 *      b. tight upper bound O(logn)
 * 
 */