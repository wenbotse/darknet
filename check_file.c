#include <stdio.h>   
#include <stdlib.h>   
#include <unistd.h>   
#include <fcntl.h> 

void main( void )
{
   /* Check for existence */
   if( (access( "ACCESS.C", 0 )) != -1 )
   {
      printf( "File ACCESS.C exists " );
      /* Check for write permission */
      if((access( "ACCESS.C", 2 )) != -1 )
         printf( "File ACCESS.C has write permission " );
   }else{
         printf( "not found \n");
   }

   int fd = open("test_file.txt", O_CREAT);
   close(fd);
}
