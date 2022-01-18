# 0x1E. C - Search Algorithms 

## Resource

- [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)
- [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)
- [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

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
