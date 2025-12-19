<i>This project has been created as part of the 42 curriculum by dide-alm</i>
<pre>
DESCRIPTION:
This project aims for the developer to create a program to sort a list.
This list is given by the user, and can only contain integers.
Using only a set of actions, the program needs to sort the list in the least number of actions possible.
This actions are:
	-> sa = swap list a (number on first becomes second, and second becomes first)
	-> ra = rotate list a (number on first becomes last, and second becomes first, moving the entire list one closer to first)
	-> rra = reverse rotate list a (similar to ra, it does the inverse, last becomes first, and first becomes second)
	-> pa = push list a (pushes the first from b list to first a list, pushing the entire a list further back)
	-> sb = swap list b (same as sa, but for b list)
	-> rb = rotate list b (same as ra, but for b list)
	-> rrb = reverse rotate list b (same as rra, but for b list)
	-> pb = push list b (same as pa, but for list b)
	-> ss = runs sa and sb (runs both comands, counting as one)
	-> rr = runs ra and rb (runs both commands, counting as one)
	-> rrr = runs rra nad rrb (runs both commands, counting as one)
If no input is provided, the program must exit
if invalid characters and provided, an Error message must be displayed informing something is wrong with the input
No duplicate numbers are valid. Only numbers (0,1,2,3,4,5,6,7,8,9), - or + signs and spaces.

INSTRUCTIONS:
To compile this project a Makefile is presented in the root folder of the project. Wich will compile the project, not needing any more configuration.
The Makefile has this set of rules:
	-> all = runs with "make" or "make all" as it is the default rule, will run "$(NAME)" rule
	-> $(NAME) = runs with "make push_swap", will compile the necessary files, if needed
	-> clean = runs with "make clean", this will clear all the .o files from the project
	-> fclean = runs with "make fclean", this will run "clean" rule plus removing any binaries generated
	-> re = runs with "make re", this will run "fclean" rule, followed by "all" rule

To run the program you call "./push_swap" plus all the input integers
EX: ./push_swap 1 4 7 2 9 -4 -2"
Another way to run the program is to create a var with the inputs and call it
EX: ARG="1 3 6 2 9 -3 -9 0"; ./push_swap $ARG
To check how many movements were made, pipe the "wc -l" command to the result
EX: ARG="1 3 6 2 9 -3 -9 0"; ./push_swap $ARG | wc -l
To check is the sort is valid, the checker is provided, or can be downloaded from the evaluation page, can be piped like before
EX: ARG="1 3 6 2 9 -3 -9 0"; ./push_swap $ARG | ./checker_linux $ARG


RESOURCES:
A checker program is provided by the school to check if the sort was right or not
All code is written by dide-alm.
Help from pde-alme and aralves- to for through testing
AI was used to understand why when using Radix sort, the movents increased based how bigger the numbers were.
The solution was to use the bits of indexes fo the positions instead of the bits of the numbers themselves.
</pre>