# Libft - Your Very First Own Library

## Summary

Libft is a C library containing a variety of general-purpose functions that can be utilized in your C programming projects. This library serves as a valuable tool for your coursework, allowing you to understand, implement, and use essential standard functions. The project is divided into mandatory and bonus parts, covering a range of functions from libc, as well as additional functions to manipulate memory and strings. This README provides an overview of the project structure, instructions, and guidelines.

## Contents

- [I. Introduction](#i-introduction)
- [II. Common Instructions](#ii-common-instructions)
- [III. Mandatory Part](#iii-mandatory-part)
   - [III.1 Technical Considerations](#iii1-technical-considerations)
   - [III.2 Part 1 - Libc Functions](#iii2-part-1-libc-functions)
   - [III.3 Part 2 - Additional Functions](#iii3-part-2-additional-functions)
- [IV. Bonus Part](#iv-bonus-part)
- [V. Submission and Peer-Evaluation](#v-submission-and-peer-evaluation)

## I. Introduction

C programming can be challenging without access to standard functions. Libft aims to address this by guiding you through the process of implementing and using your own C library. By creating your library, you'll gain a deeper understanding of fundamental functions, enhancing your skills for future projects.

## II. Common Instructions

- All project code must be written in C.
- Adhere to the Norm guidelines; bonus files/functions are included in the norm check.
- Functions should not cause unexpected errors (e.g., segmentation faults, bus errors).
- Properly free all heap-allocated memory to avoid memory leaks.
- Submit a Makefile to compile source files with specific flags.
- Include rules in the Makefile: `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- For bonus submission, add a `bonus` rule to the Makefile.
- Encourage creating test programs for project validation.

## III. Mandatory Part

### III.1 Technical Considerations

- Forbidden: Declaring global variables.
- Use static functions for helper functions.
- Place all files at the root of the repository.
- Do not submit unused files.
- Compile all .c files with `-Wall -Wextra -Werror`.
- Use the `ar` command to create the library; `libtool` is forbidden.
- `libft.a` must be created at the root.

### III.2 Part 1 - Libc Functions

Implement functions with the `ft_` prefix replicating libc functions. Examples include `isalpha`, `isdigit`, `strlen`, etc.

### III.3 Part 2 - Additional Functions

Implement new functions not in libc, such as `ft_substr`, `ft_strjoin`, `ft_split`, etc.

## IV. Bonus Part

Expand your library by manipulating lists using the provided `t_list` structure. Implement functions like `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, etc. The bonus part is assessed only if the mandatory part is perfect.

## V. Submission and Peer-Evaluation

Submit your work to the assigned Git repository. Deepthought will grade after peer-evaluations. Check file names and ensure all files are at the root of the repository.
