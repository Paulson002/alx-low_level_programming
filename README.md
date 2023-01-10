Write a function that creates an array of chars, and initializes it with a specific char.

                


                

- Prototype: char *create_array(unsigned int size, char c);

                

- Returns NULL if size = 0

                

- Returns a pointer to the array, or NULL if it fails

                


                

####[1. The woman who has no imagination has no wings](1-strdup.c)

                


                

- Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

                


                

- Prototype: char *_strdup(char *str);

                

- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.

                

- Returns NULL if str = NULL

                

- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

                


                

#### [2. He who is not courageous enough to take risks will accomplish nothing in life](2-str_concat.c)

                


                

- Write a function that concatenates
