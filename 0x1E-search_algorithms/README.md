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

<a href='https://postimg.cc/ZC3VyBHm' target='_blank'><img src='https://i.postimg.cc/c4kj2f8v/image.png' border='0' alt='image'/></a>
- Compile the code this way: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 103-main.c 103-exponential.c -o 103-exponential`

</details>

<details>
<summary><a href="./104-advanced_binary.c">11. Advanced binary search</a></summary>

<a href='https://postimg.cc/r0n6PhY5' target='_blank'><img src='https://i.postimg.cc/QCsXVwQY/image.png' border='0' alt='image'/></a>
- Compile the code this way: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 104-main.c 104-advanced_binary.c -o 104-advanced_binary`

</details>
