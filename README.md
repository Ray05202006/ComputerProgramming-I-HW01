# ComputerProgramming-I-HW01

## Personal Profile
Author:江禹叡

Student ID:41347026s

## How to build the code

```bash
make
```
It will compile the code with gcc.

## How to execute the built programs

```bash
./hw010x
```
Substitute the number of HW for x.
## Solving Idea

### HW0101

Use escape codes to charge the colors of text.

For Example:
```bash
printf("\x1b[31mYou are sunlight and I moon\n");
``` 
`\x1b`  Start the escape sequences
`[`     Control Sequence Introducer(CSI)
`31m`   Sets colors and style(*31* means Set foreground color to red)

### HW0102

Summary minus the operand from lowest place to highest place, and judge whether borrow or not.

Code also return invaid input when code run to the highest place but summary is small than operand.

### HW0103

```bash
place_8=printf("%o_8\n",num_10)-3;
```
In order to save the length of converted value, I design to print octal form with conversion specifiers.

Hint: `printf` will return the length of string.

Save the length and give it different calculater to convert to octal form and filp it according to the length.
