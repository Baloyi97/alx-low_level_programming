#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define ERROR_EXIT_CODE 98
#define NO_FILE_EXIT_CODE 99

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);

/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The num of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 * Description: If the file is not an ELF File or
 * Function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int o;
ssize_t r;

o = open(argv[1], O_RDONLY);
if (o == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(ERROR_EXIT_CODE);
}

header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
dprintf(STDERR_FILENO, "Error: Memory allocation failure\n");
close(o);
exit(ERROR_EXIT_CODE);
}
r = read(o, header, sizeof(Elf64_Ehdr));
if (r == -1)
{
dprintf(STDERR_FILENO, "Error reading file %s\n", argv[1]);
free(header);
close(o);
exit(ERROR_EXIT_CODE);
}
check_elf(header->e_ident);
printf("ELF Header:\n");
print_magic(header->e_ident);
print_class(header->e_ident);

free(header);
close(o);
return (0);
}
