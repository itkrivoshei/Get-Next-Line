# Get_Next_Line
Get next line is a function that reads a file line by line
## Installation
```
git clone https://github.com/IT-Krivoshey/Get-Next-Line.git
```
## Build
- To compile and generate a static C library named libft.a
	- `cd Get_Next_line/libft`
	- `make`
- To remove objects:
	- `make clean`
- To remove objects and binary file (program):
	- `make fclean`
- To re-compile:
	- `make re`
## Executing
- To test the function, compile with main.c.
	- `cd Get_Next_Line`
	- `gcc main.c get_next_line.c`
	- `./a.out LICENSE`
## Return value
- Return `1` when it read a line
- Return `0` it finished reading a file
- Return `-1` if error
## License
This project is licensed under the LGPLv3 License - see the [LICENSE](https://github.com/IT-Krivoshey/Get-Next-Line/blob/master/LICENSE) file for details.
