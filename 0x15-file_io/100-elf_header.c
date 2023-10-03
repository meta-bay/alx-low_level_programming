#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>

typedef struct {
	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint32_t e_entry_high;
	uint32_t e_entry_low;
	uint32_t e_phoff_high;
	uint32_t e_phoff_low;
	uint32_t e_shoff_high;
	uint32_t e_shoff_low;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf32_Ehdr;

/**
 * print_error - Prints an error message to stderr and exits with code 98.
 * @error_message: The error message to print.
 */
void print_error(const char *error_message)
{
	fprintf(stderr, "%s\n", error_message);
	exit(98);
}

/**
 * print_elf_header_info - Prints the information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header_info(const Elf32_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("\tMagic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("\tClass:                             ELF%d\n", header->e_ident[4] == 1 ? 32 : 64);

	printf("\tData:                              %s\n", header->e_ident[5] == 1 ? "2's complement, little endian" :
		   (header->e_ident[5] == 2 ? "2's complement, big endian" : "Invalid data encoding"));

	printf("\tVersion:                           %d (current)\n", header->e_version);

	printf("\tOS/ABI:                            UNIX - System V\n");
	printf("\tABI Version:                       %d\n", header->e_ident[8]);

	printf("\tType:                              ");
	switch (header->e_type)
	{
		case 0:
			printf("NONE (No file type)\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}

	printf("\tEntry point address:               0x%lx\n", ((unsigned long)header->e_entry_high << 16) | header->e_entry_low);
}

int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf32_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Error opening file");
	}

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		print_error("Error reading ELF header");
	}

	if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' ||
		header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
	{
		print_error("Not an ELF file");
	}

	print_elf_header_info(&header);

	close(fd);
	return 0;
}
