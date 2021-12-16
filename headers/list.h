/**
 * \file            list.h
 * \brief           List include file
 */

#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/* TODO: fix this hack */
#ifndef SECTION_COUNT
#define SECTION_COUNT 6
#endif

/* 
 * \brief           Singly linked list to store each page information
 *                  
 */
typedef struct data {
    char url[255];                               /*!< Filename / URL */
    char *input[SECTION_COUNT];                  /*!< Point data for sections */

    struct data* next;                           /*!< Point next node */
} data_t;

void    create_list(data_t** root);

void    delete_list(data_t** root);

void     add_node(data_t** root);

//void    print_list(data_t* root);


//void    remove_nodes(node_t** root, int8_t value);

#endif /* LIST_H_INCLUDED */