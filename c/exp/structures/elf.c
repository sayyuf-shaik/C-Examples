#include <stdio.h>
#include <elf.h>
int main( int argc ,char *argv[])
{
    Elf32_Ehdr file;/*variable for header structure*/
    Elf32_Shdr sec_var;/*variable for section header structure*/
//    Elf32_Shdr a;
    Elf32_Shdr *str = NULL;
   // Elf32_Shdr str;/*variable for section header structure*/
    str = ( char *) malloc ( sizeof( char ) );
    int i = 0;
    FILE *fp = NULL;
    fp = fopen ( argv[1] , "r" );
    if ( fp == NULL ) {
        printf ( "The file is not created " );
    }
    else
    {
        fread ( &file , sizeof(Elf32_Ehdr) , 1 , fp );       
        printf("MAGIC NUMBER :");
        while ( i <= EI_NIDENT ) {
        printf("%02hhx ",file.e_ident[i++]);
        }
        printf("\nClass:\t"); 
        switch ( file.e_ident[4] ) {
            case 0: printf ( "Invalid class");
                    break;
            case 1: printf ( "ELF 32" );
                    break;
            case 2: printf ( "ELF 64" );
                    break;
            case 3: printf ( "ELF NUM" );
                    break;
        }
        printf("\nData:\t");
        switch ( file.e_ident[EI_DATA] ) {
            case 0: printf ( "Invalid data encoding");
                    break;
            case 1: printf ( "2's complement, little endian" );
                    break;
            case 2: printf ( "2's complement, big endian" );
                    break;
            case 3: printf ( "Data num" );
                    break;
        }

        printf("\nVersion \t" );
        switch ( file.e_ident[EI_VERSION] )
        {
            case EV_NONE:printf("%u ( none ) )",EV_NONE);
                         break;
            case EV_CURRENT:printf ( "%u ( current ) ", EV_CURRENT);
                           break;
        } 
        printf("\nOS/ABI:\t");
        switch ( file.e_ident[EI_OSABI] ) {
            case 0: printf ( "UNIX System V ABI");
                    break;
            case 1: printf ( "HP-UX " );
                    break;
            case 2: printf ( "NetBSD" );
                    break;
            case 3: printf ( "Object uses GNU ELF extensions" );
                    break;
            case 6: printf ( "Sun Solaris." );
                    break;
            case 7: printf ( " IBM AIX." );
                    break;
            case 8: printf ( "SGI Irix." );
                    break;
            case 9: printf ( "FreeBSD" );
                    break;
            case 10: printf ( "Compaq TRU64 UNIX." );
                    break;
            case 11: printf ( "Novell Modesto" );
                    break;
            case 12: printf ( "OpenBSD" );
                    break;
            case 64: printf ( "ARM EABI" );
                    break;
            case 97: printf ( "ARM" );
                    break;
        }

        printf("\nABI Version:\t%u\n",file.e_ident[8]);
        printf ( "\nType:\t");
        switch ( file.e_type ) {
            case 0: printf ( "NONE");
                    break;
            case 1: printf ( "REL (Relocatable file )" );
                    break;
            case 2: printf ( "EXEC (Executable file )" );
                    break;
            case 3: printf ( "DYN (Dynamically linked )" );
                    break;
            case 4: printf ( "CORE ( Core " );
                    break;
                }
        printf ( "\nMachine:\t");
        switch ( file.e_machine ) {
            case EM_NONE: printf ( "An unknown machine.");
                         break;
            case EM_M32: printf ( "AT&T WE 32100" );
                    break;
            case EM_SPARC: printf ( "Sun Microsystems SPARC" );
                    break;
            case EM_386: printf ( "Intel 80386" );
                    break;
            case EM_68K: printf ( "Motorola 68000" );
                    break;
            case EM_860: printf ( "Intel 80860" );
                    break;
            case EM_MIPS: printf ( "MIPS RS3000 (big-endian only)" );
                    break;
            case EM_88K: printf ( "Motorola 88000" );
                    break;
        }
        printf ( "\nVersion:\t%x",file.e_version);
        printf ( "\nEntry point address:\t%x",file.e_entry);
        printf ( "\nStart of program headers:\t%u ( bytes into file )",file.e_phoff);
        printf ( "\nStart of section headers:\t%u ( bytes into file )",file.e_shoff);
        printf ( "\nFlags:\t%x",file.e_flags);
        printf ( "\nSize of this header:\t%u ( bytes )",file.e_ehsize);
        printf ( "\nSize of program headers:\t%u ( bytes )",file.e_phentsize);
        printf ( "\nNumber of program headers:\t%u",file.e_phnum);
        printf ( "\nSize of section headers:\t%u ( bytes )",file.e_shentsize);
        printf ( "\nNumber of section headers:\t%u",file.e_phentsize);
        printf ( "\nSection header string table index::\t%u\n",file.e_shstrndx);      
             fseek ( fp, file.e_shoff, SEEK_SET );
             //fseek ( fp,file.e_shoff ,SEEK_CUR );  
             fseek ( fp, file.e_shoff + ( file.e_shstrndx * file.e_shentsize ) ,SEEK_SET );   
            // fread ( a , sizeof(Elf32_Shdr) , 1 , fp );
             fread ( str, sizeof(Elf32_Shdr), 1, fp );       
             printf ( "Section headers");
             printf ( "\n[Nr] Name              Type            Addr     Off    Size   ES Flg Lk Inf Al\n");
             for ( i = 0 ;i < sec_var.sh_size; i++) {
             printf ( " [ %d ] %hhx\n", i ,str[i]);
             /*printf ( "%u ",sec_var.sh_type);
             printf ( "%u ",sec_var.sh_flags);
             printf ( "%x ",sec_var.sh_addr);
             printf ( "%u ",sec_var.sh_offset);
             printf ( "%u ",sec_var.sh_size);
             printf ( "%u ",sec_var.sh_link);
             printf ( "%u ",sec_var.sh_info);
             printf ( "%x ",sec_var.sh_addralign);
             printf ( "%u ",sec_var.sh_entsize);*/
        }}

        



         
    
    return 0;
}

