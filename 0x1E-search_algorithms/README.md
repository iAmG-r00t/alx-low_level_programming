# 0x1E. C - Search Algorithms 

## Resource

- [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)
- [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)
- [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)
- [Jump search algorithm](https://en.wikipedia.org/wiki/Jump_search)
- [Interpolation search algorithm](https://en.wikipedia.org/wiki/Interpolation_search)
- [Exponential search algorithm](https://en.wikipedia.org/wiki/Exponential_search)

## Tasks

<details>
<summary><a href="./0-linear.c">0. Linear search</a></summary>

<a href='https://postimg.cc/30w90LLf' target='_blank'><img src='https://i.postimg.cc/D0rNDH1h/image.png' border='0' alt='image'/></a>
- Compile the code this way: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear`

</details>

<details>
<summary><a href="./1-binary.c">1. Binary search</a></summary>

<a href='https://postimg.cc/VJL1LMP7' target='_blank'><img src='https://i.postimg.cc/pLKdCYGt/image.png' border='0' alt='image'/></a>
- Compile the code this way: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary`

</details>

<details>
<summary><a href="./2-O">2. Big O #0</a></summary><br>

What is the `time complexity` (worst case) of a linear search in an array of size `n` ?

</details>

<details>
<summary><a href="./3-O">3. Big O #1</a></summary><br>

What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n` ?

</details>

<details>
<summary><a href="./4-O">4. Big O #2</a></summary><br>

What is the `time complexity` (worst case) of a binary search in an array of size `n` ?

</details>

<details>
<summary><a href="./5-O">5. Big O #3</a></summary><br>

What is the `space complexity` (worst case) of a binary search in an array of size `n` ?

</details>

<details>
<summary><a href="./6-O">6. Big O #4</a></summary><br>

- What is the space complexity of this function / algorithm?
```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

</details>

<details>
<summary><a href="./100-jump.c">7. Jump search</a></summary>

<a href='https://postimg.cc/3dnV9p97' target='_blank'><img src='https://i.postimg.cc/zGrNzFgL/image.png' border='0' alt='image'/></a>
- Compile the code this way: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 100-main.c 100-jump.c -lm -o 100-jump`

</details>

<details>
<summary><a href="./101-O">8. Big O #5</a></summary><br>

What is the `time complexity` (average case) of a jump search in an array of size `n`, using `step = sqrt(n)` ?

</details>

<details>
<summary><a href="./102-interpolation.c">9. Interpolation search</a></summary>

<a href='https://postimg.cc/nXB1L9rB' target='_blank'><img src='https://i.postimg.cc/DwYpBqKj/image.png' border='0' alt='image'/></a>
- Compile the code this way: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 102-main.c 102-interpolation.c -o 102-interpolation`

</details>

<details>
<summary><a href="./103-exponential.c">10. Exponential search</a></summary>

<a href='https://postimg.cc/KkYdXdVJ' target='_blank'><img src='https://i.postimg.cc/bJ08nPRc/image.png' border='0' alt='image'/></a>
- Compile the code this way: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 103-main.c 103-exponential.c -o 103-exponential`

</details>

<details>
<summary><a href="./104-advanced_binary.c">11. Advanced binary search</a></summary>

<a href='https://postimg.cc/r0n6PhY5' target='_blank'><img src='https://i.postimg.cc/QCsXVwQY/image.png' border='0' alt='image'/></a>
- Compile the code this way: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 104-main.c 104-advanced_binary.c -o 104-advanced_binary`

</details>

<details>
<summary><a href="./105-jump_list.c">12. Jump search in a singly linked list</a></summary>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/TPb1wZLg/image.png' border='0' alt='image'/></a>
<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/0Qcs2ff7/image.png' border='0' alt='image'/></a>
```bash
wilfried@0x1E-search_algorithms$ cat 105-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    listint_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_list(array, size);
    print_list(list);

    res =  jump_list(list, size, 53);
    printf("Found %d at index: %lu\n\n", 53, res->index);
    res =  jump_list(list, size, 2);
    printf("Found %d at index: %lu\n\n", 2, res->index);
    res =  jump_list(list, size, 999);
    printf("Found %d at index: %p\n", 999, (void *) res);

    free_list(list);
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 105-main.c 105-jump_list.c listint/*.c -lm -o 105-jump
wilfried@0x1E-search_algorithms$ ./105-jump 
List :
Index[0] = [0]
Index[1] = [1]
Index[2] = [2]
Index[3] = [3]
Index[4] = [4]
Index[5] = [7]
Index[6] = [12]
Index[7] = [15]
Index[8] = [18]
Index[9] = [19]
Index[10] = [23]
Index[11] = [53]
Index[12] = [61]
Index[13] = [62]
Index[14] = [76]
Index[15] = [99]

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [8] and [12]
Value checked at index [8] = [18]
Value checked at index [9] = [19]
Value checked at index [10] = [23]
Value checked at index [11] = [53]
Found 53 at index: 11

Value checked at index [4] = [4]
Value found between indexes [0] and [4]
Value checked at index [0] = [0]
Value checked at index [1] = [1]
Value checked at index [2] = [2]
Found 2 at index: 2

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value checked at index [15] = [99]
Value found between indexes [12] and [15]
Value checked at index [12] = [61]
Value checked at index [13] = [62]
Value checked at index [14] = [76]
Value checked at index [15] = [99]
Found 999 at index: (nil)
```
- Compile the code this way: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 105-main.c 105-jump_list.c listint/*.c -lm -o 105-jump`

</details>

<details>
<summary><a href="./106-linear_skip.c">13. Linear search in a skip list</a></summary>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/ZKt7g3Zc/image.png' border='0' alt='image'/></a>
```bash
wilfried@0x1E-search_algorithms$ cat 106-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    skiplist_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_skiplist(array, size);
    print_skiplist(list);

    res =  linear_skip(list, 53);
    printf("Found %d at index: %lu\n\n", 53, res->index);
    res =  linear_skip(list, 2);
    printf("Found %d at index: %lu\n\n", 2, res->index);
    res =  linear_skip(list, 999);
    printf("Found %d at index: %p\n", 999, (void *) res);

    free_skiplist(list);
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 106-main.c 106-linear_skip.c skiplist/*.c -lm -o 106-linear
wilfried@0x1E-search_algorithms$ ./106-linear 
List :
Index[0] = [0]
Index[1] = [1]
Index[2] = [2]
Index[3] = [3]
Index[4] = [4]
Index[5] = [7]
Index[6] = [12]
Index[7] = [15]
Index[8] = [18]
Index[9] = [19]
Index[10] = [23]
Index[11] = [53]
Index[12] = [61]
Index[13] = [62]
Index[14] = [76]
Index[15] = [99]

Express lane :
Index[0] = [0]
Index[4] = [4]
Index[8] = [18]
Index[12] = [61]

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [8] and [12]
Value checked at index [8] = [18]
Value checked at index [9] = [19]
Value checked at index [10] = [23]
Value checked at index [11] = [53]
Found 53 at index: 11

Value checked at index [4] = [4]
Value found between indexes [0] and [4]
Value checked at index [0] = [0]
Value checked at index [1] = [1]
Value checked at index [2] = [2]
Found 2 at index: 2

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [12] and [15]
Value checked at index [12] = [61]
Value checked at index [13] = [62]
Value checked at index [14] = [76]
Value checked at index [15] = [99]
Found 999 at index: (nil)
```
- Compile the code this way: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 106-main.c 106-linear_skip.c skiplist/*.c -lm -o 106-linear`

</details>

<details>
<summary><a href="./107-O">14. Big O #6</a></summary><br>

What is the `time complexity` (average case) of a jump search in a singly linked list of size `n`, using `step = sqrt(n)` ?

</details>

<details>
<summary><a href="./108-O">15. Big O #7</a></summary><br>

What is the `time complexity` (average case) of a jump search in a skip list of size `n`, with an express lane using `step = sqrt(n)` ?

</details>
