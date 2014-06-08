// crt_freopen.c
  // compile with: /W3
  // This program reassigns stderr to the file
  // named FREOPEN.OUT and writes a line to that file.
  #include <stdio.h>
  #include <stdlib.h>
  
  FILE *stream;
  
  int main( void )
  {
     // Reassign "stderr" to "freopen.out": 
     stream = freopen( "freopen.out", "w", stderr ); // C4996
     // Note: freopen is deprecated; consider using freopen_s instead
  
     if( stream == NULL )
        fprintf( stdout, "error on freopen\n" );
     else
     {
        fprintf( stdout, "successfully reassigned\n" ); fflush( stdout );
        fprintf( stream, "This will go to the file 'freopen.out'\n" );
		fprintf(stderr, "fuck");
        fclose( stream );
     }
     system( "type freopen.out" );
  }
  
