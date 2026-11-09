*This project has been created as part of the 42 curriculum by tdockes*

## Description :
This project's name is Libft, it's a library of functions in C for future projects.

## Instructions :
You can create the library "libft.a" with the command "make" at the root of the directory.
You can create and delete the .o with "make noo" at the root of the directory.
You can delete all the .o and the library with "make fclean" at the root of the directory.

## Resources :
AI was not used for this project, a programm named "Libfterator" has been used for the debug phase.

## List of functions :

# Check char
- ft_isalpha : replicates the behavior of isalpha from the library ctype (return whether a char is an alphabetic character or not).
- ft_isdigit : replicates the behavior of isdigit from the library ctype (return whether a char is a digit character or not).
- ft_isalnum : replicates the behavior of isalnum from the library ctype (return whether a char is a digit/alphabetic character or not).
- ft_isprint : replicates the behavior of isprint from the library ctype (return whether a char is a printable character or not).
- ft_isascii : replicates the behavior of isascii from the library ctype (return whether a char is part of the ascii table or not).

# Edit char
- ft_tolower.c : replicates the behavior of tolower from the library ctype (convert an alphabetical character in uppercase to lowercase).
- ft_toupper.c : replicates the behavior of toupper from the library ctype (convert an alphabetical character in lowercase to uppercase).

# Check String
- ft_strlen.c : replicates the behavior of strlen from the library string (return the length of a string).
- ft_strchr.c : replicates the behavior of strchr from the library string (search a char in a string).
- ft_strrchr.c : replicates the behavior of strrchr from the library string (return a pointer to the last occurence of a character in a string).
- ft_strncmp.c : replicates the behavior of strncmp from the library string (compare 2 strings, return negative value if the 2nd is greater, positive value if it's the first one and 0 if they're equal).

# Edit string
- ft_atoi : replicates the behavior of atoi from the library stdlib (convert a number in ascii to integer).
- ft_itoa : converts a number in int to a string.
- ft_strjoin.c : merges a list of string into only one delimited by a separator.
- ft_split.c : splits a string with separator in a list of string.
- ft_striteri.c : applies a function to each character of a string.
- ft_strmapi.c : applies a function to each characters of a string and return an allocated string with the results.

# Copy string
- ft_strlcpy.c : replicates the behavior of strlcpy from the library string (BSD system) (copy a string into a buffer, return the size of the string it tried to create).
- ft_strdup.c : replicates the behavior of strdup from the library string (return a copy of a string allocated in memory).
- ft_substr.c : return a string from a part of another one.
- ft_strtrim.c : return a copy of a string with characters removed from the beginning and the end.
- ft_strlcat.c : replicates the behavior of strlcat from the library string (BSD system) (appends a string to the end of another one, return the size of the string it tried to create).

# Handle memory areas
- ft_calloc : replicates the behavior of calloc from the library stdlib (return an allocated array filled with \0).
- ft_bzero : replicates the behavior of bzero from the library strings (fill a memory area with \0).
- ft_memset.c : replicates the behavior of memset from the library string (fills a number of byte in the memory with a constant byte).
- ft_memchr.c : replicates the behavior of memchr from the library string (search a byte in a memory area).
- ft_memcmp.c : replicates the behavior of memcmp from the library string (compare 2 memory area, return negative value if the 2nd is greater, positive value if it's the first one and 0 if they're equal).
- ft_memcpy.c : replicates the behavior of memcpy from the library string (copy some bytes of a memory area in another memory area).
- ft_memmove.c : replicates the behavior of memmove from the library string (copy some byte of the memory to another area even if the two memory areas do overlap).

# Write in file
- ft_putchar_fd.c : write a character in a file.
- ft_putstr_fd.c : write a string in a file.
- ft_putendl_fd.c : write a string and a newline in a file.
- ft_putnbr_fd.c : write a number in a file.

# Linked list
- ft_lstnew.c : return a new node of a linked list, filled with a content.
- ft_lstlast.c : return the last node of a linked list.
- ft_lstsize.c : return the size of a linked list.
- ft_lstadd_back : add an element at the end of a linked list.
- ft_lstadd_front : add an element at the start of a linked list.
- ft_lstclear : delete and free all the element of a linked list.
- ft_lstdelone.c : free the content and a node of a linked list.
- ft_lstiter.c : applies a function to each data of a linked list.
- ft_lstmap.c : applies a function to each data of a linked list and return a new linked list with the result.