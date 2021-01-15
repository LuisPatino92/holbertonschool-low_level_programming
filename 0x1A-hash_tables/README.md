# Holberton School Project

>This repo is part of the Holberton School curriculum.

## Hash tables

This project is about Hash Tables Datastructures. In this case we worked with linked Hash Tables. Each task is a step in order to build a system that can serv as a Hash Table creator and administrator.

The next ones are the structures used in order to structure the system, one for the Hash Table itself, and other for the Nodes where the information will be stored:

    /**
     * struct hash_node_s - Node of a hash table
     *
     * @key: The key, string
     * The key is unique in the HashTable
     * @value: The value corresponding to a key
     * @next: A pointer to the next node of the List
     */
    typedef struct hash_node_s
    {
         char *key;
         char *value;
         struct hash_node_s *next;
    } hash_node_t;

    /**
     * struct hash_table_s - Hash table data structure
     *
     * @size: The size of the array
     * @array: An array of size @size
     * Each cell of this array is a pointer to the first node of a linked list,
     * because we want our HashTable to use a Chaining collision handling
     */
    typedef struct hash_table_s
    {
         unsigned long int size;
         hash_node_t **array;
    } hash_table_t;

---

## In this REPO:

>**0-[hash_table_create.c](hash_table_create.c)**

Function that creates a Hash Table. Signature: `hash_table_t *hash_table_create(unsigned long int size)`. Here an instance of how the function could be used:

    julien@ubuntu:~/0x1A. Hash tables$ cat 0-main.c
    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "hash_tables.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always EXIT_SUCCESS.
     */
    int main(void)
    {
        hash_table_t *ht;

        ht = hash_table_create(1024);
        printf("%p\n", (void *)ht);
        return (EXIT_SUCCESS);
    }
    julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-hash_table_create.c -o a
    julien@ubuntu:~/0x1A. Hash tables$ ./a
    0x238a010
    julien@ubuntu:~/0x1A. Hash tables$ valgrind ./a
    ==7602== Memcheck, a memory error detector
    ==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
    ==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
    ==7602== Command: ./a
    ==7602==
    0x51fc040
    ==7602==
    ==7602== HEAP SUMMARY:
    ==7602==     in use at exit: 8,208 bytes in 2 blocks
    ==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
    ==7602==
    ==7602== LEAK SUMMARY:
    ==7602==    definitely lost: 16 bytes in 1 blocks
    ==7602==    indirectly lost: 8,192 bytes in 1 blocks
    ==7602==      possibly lost: 0 bytes in 0 blocks
    ==7602==    still reachable: 0 bytes in 0 blocks
    ==7602==         suppressed: 0 bytes in 0 blocks
    ==7602== Rerun with --leak-check=full to see details of leaked memory
    ==7602==
    ==7602== For counts of detected and suppressed errors, rerun with: -v
    ==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

---

### Author

All the code in this REPO was made by **Luis Patiño** in 2020, as part of Holberton School developer training.

---

<div>
<div align="center">
<img display="block" alt="Holberton Logo" width="50%" src="https://www.holbertonschool.com/holberton-logo.png">
</div>
<p align="center"><b>2020</b></p>
</div>

---
