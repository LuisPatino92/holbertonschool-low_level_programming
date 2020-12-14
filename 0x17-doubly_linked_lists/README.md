# Holberton School Project

>This repo is part of the Holberton School curriculum.

## 0x17. C - Doubly linked lists

Basic operation with Doubly Linked Lists like adding in specific point of the list, delete, free, and the like.

the structure of a node of the DLL used in the tasts is the next one:

    /**
     * struct dlistint_s - doubly linked list
     * @n: integer
     * @prev: points to the previous node
     * @next: points to the next node
     *
     * Description: doubly linked list node structure
     * for Holberton project
     */
    typedef struct dlistint_s
    {
        int n;
        struct dlistint_s *prev;
        struct dlistint_s *next;
    } dlistint_t;

---

## In this REPO:

>**0-print_dlistint.c**

Function that prints all the elements of a DLL, needs a calling function in order to work, here an example of a calling function. (signature: size_t print_dlistint(const dlistint_t *h))

    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "lists.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always EXIT_SUCCESS.
     */
    int main(void)
    {
        dlistint_t *head;
        dlistint_t *new;
        dlistint_t hello = {8, NULL, NULL};
        size_t n;

        head = &hello;
        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
        {
            dprintf(2, "Error: Can't malloc\n");
            return (EXIT_FAILURE);
        }
        new->n = 9;
        head->prev = new;
        new->next = head;
        new->prev = NULL;
        head = new;
        n = print_dlistint(head);
        printf("-> %lu elements\n", n);
        free(new);
        return (EXIT_SUCCESS);
    }

>**1-dlistint_len.c**

Function that prints the number of elements of a DLL, needs a calling function in order to work, here an example of a calling function. (signature: size_t     dlistint_len(const dlistint_t *h))

    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "lists.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always EXIT_SUCCESS.
     */
    int main(void)
    {
        dlistint_t *head;
        dlistint_t *new;
        dlistint_t hello = {8, NULL, NULL};
        size_t n;

        head = &hello;
        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
        {
            dprintf(2, "Error: Can't malloc\n");
            return (EXIT_FAILURE);
        }
        new->n = 9;
        head->prev = new;
        new->next = head;
        new->prev = NULL;
        head = new;
        n = dlistint_len(head);
        printf("-> %lu elements\n", n);
        free(new);
        return (EXIT_SUCCESS);
    }

>**2-add_dnodeint.c**

Function that adds a new node in the beggining of a DLL, needs a calling function in order to work, here an example of a calling function. (signature: dlistint_t *add_dnodeint(dlistint_t **head, const int n))

    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "lists.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always EXIT_SUCCESS.
     */
    int main(void)
    {
        dlistint_t *head;

        head = NULL;
        add_dnodeint(&head, 0);
        add_dnodeint(&head, 1);
        add_dnodeint(&head, 2);
        add_dnodeint(&head, 3);
        add_dnodeint(&head, 4);
        add_dnodeint(&head, 98);
        add_dnodeint(&head, 402);
        add_dnodeint(&head, 1024);
        print_dlistint(head);
        return (EXIT_SUCCESS);
    }

>**3-add_dnodeint_end.c**

Function that adds a new node in the end of a DLL, needs a calling function in order to work, here an example of a calling function. (signature: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n))

    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "lists.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always EXIT_SUCCESS.
     */
    int main(void)
    {
        dlistint_t *head;

        head = NULL;
        add_dnodeint_end(&head, 0);
        add_dnodeint_end(&head, 1);
        add_dnodeint_end(&head, 2);
        add_dnodeint_end(&head, 3);
        add_dnodeint_end(&head, 4);
        add_dnodeint_end(&head, 98);
        add_dnodeint_end(&head, 402);
        add_dnodeint_end(&head, 1024);
        print_dlistint(head);
        return (EXIT_SUCCESS);
    }

>**4-free_dlistint.c**

Function that frees a DLL, needs a calling function in order to work, here an example of a calling function. (signature: void free_dlistint(dlistint_t *head))

    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "lists.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always EXIT_SUCCESS.
     */
    int main(void)
    {
        dlistint_t *head;

        head = NULL;
        add_dnodeint_end(&head, 0);
        add_dnodeint_end(&head, 1);
        add_dnodeint_end(&head, 2);
        add_dnodeint_end(&head, 3);
        add_dnodeint_end(&head, 4);
        add_dnodeint_end(&head, 98);
        add_dnodeint_end(&head, 402);
        add_dnodeint_end(&head, 1024);
        print_dlistint(head);
        free_dlistint(head);
        head = NULL;
        return (EXIT_SUCCESS);
    }

>**5-get_dnodeint.c**

Function that returns the nth node of a DLL, needs a calling function in order to work, here an example of a calling function. (signature: listint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index))

    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "lists.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always EXIT_SUCCESS.
     */
    int main(void)
    {
        dlistint_t *head;
        dlistint_t *node;

        head = NULL;
        add_dnodeint_end(&head, 0);
        add_dnodeint_end(&head, 1);
        add_dnodeint_end(&head, 2);
        add_dnodeint_end(&head, 3);
        add_dnodeint_end(&head, 4);
        add_dnodeint_end(&head, 98);
        add_dnodeint_end(&head, 402);
        add_dnodeint_end(&head, 1024);
        print_dlistint(head);
        node = get_dnodeint_at_index(head, 5);
        printf("%d\n", node->n);
        free_dlistint(head);
        head = NULL;
        return (EXIT_SUCCESS);
    }

>**6-sum_dlistint.c**

Function that returns the of every node of a DLL, needs a calling function in order to work, here an example of a calling function. (signature: int sum_dlistint(dlistint_t *head))

    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "lists.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always EXIT_SUCCESS.
     */
    int main(void)
    {
        dlistint_t *head;
        int sum;

        head = NULL;
        add_dnodeint_end(&head, 0);
        add_dnodeint_end(&head, 1);
        add_dnodeint_end(&head, 2);
        add_dnodeint_end(&head, 3);
        add_dnodeint_end(&head, 4);
        add_dnodeint_end(&head, 98);
        add_dnodeint_end(&head, 402);
        add_dnodeint_end(&head, 1024);
        sum = sum_dlistint(head);
        printf("sum = %d\n", sum);
        free_dlistint(head);
        head = NULL;
        return (EXIT_SUCCESS);
    }

>**7-insert_dnodeint.c**

Function that inserts a new node in agiven position in a DLL, needs a calling function in order to work, here an example of a calling function. (signature: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n))

    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "lists.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always EXIT_SUCCESS.
     */
    int main(void)
    {
        dlistint_t *head;

        head = NULL;
        add_dnodeint_end(&head, 0);
        add_dnodeint_end(&head, 1);
        add_dnodeint_end(&head, 2);
        add_dnodeint_end(&head, 3);
        add_dnodeint_end(&head, 4);
        add_dnodeint_end(&head, 98);
        add_dnodeint_end(&head, 402);
        add_dnodeint_end(&head, 1024);
        print_dlistint(head);
        printf("-----------------\n");
        insert_dnodeint_at_index(&head, 5, 4096);
        print_dlistint(head);
        free_dlistint(head);
        head = NULL;
        return (EXIT_SUCCESS);
    }

>**8-delete_dnodeint.c**

Function that deletes a new node in agiven position in a DLL, needs a calling function in order to work, here an example of a calling function. (signature: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index))

    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "lists.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always EXIT_SUCCESS.
     */
    int main(void)
    {
        dlistint_t *head;

        head = NULL;
        add_dnodeint_end(&head, 0);
        add_dnodeint_end(&head, 1);
        add_dnodeint_end(&head, 2);
        add_dnodeint_end(&head, 3);
        add_dnodeint_end(&head, 4);
        add_dnodeint_end(&head, 98);
        add_dnodeint_end(&head, 402);
        add_dnodeint_end(&head, 1024);
        print_dlistint(head);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 5);
        print_dlistint(head);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        print_dlistint(head);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        print_dlistint(head);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        print_dlistint(head);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        print_dlistint(head);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        print_dlistint(head);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        print_dlistint(head);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        printf("-----------------\n");
        delete_dnodeint_at_index(&head, 0);
        print_dlistint(head);
        return (0);
    }

>**100-password**

Crackme activity, in the file you will found the password for the file you can find in: <https://github.com/holbertonschool/0x17.c> as Crackme4.

>**102-result**

Calculation activity, in the file you can find the result of the question which is the larger palindrome that is result of the multiplication of two three digits numbers. Here, the algorythm for calculation:

    int main(void)
    {
    	int n = 983389, digitos = 0, i, first, last;

    	digitos = digits(n);

    	for (i = 1; i <= digitos/2; i++)
    	{
    		first = (n / pot(10, (digitos - i))) % 10;
    		last = (n % pot(10, i)) / pot(10, (i - 1));
    		if (first != last)
    			return (0);

    	}
    	printf("%d\n", n);
    	return (0);
    }

    int digits(int n)
    {
    	int digits = 0, i = 1;

    	while (n / i > 0)
    	{
    		i = i * 10;
    		digits++;
    	}
    	return (digits);
    }

>**103-keygen.c**

Crackme activity, in the file you will found the keygen for the file you can find in: <https://github.com/holbertonschool/0x17.c> as Crackme5.

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
