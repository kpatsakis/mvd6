static void goodB2G() double * data ; data = ( double * ) malloc ( 10 * sizeof ( double ) ); data [ i ] = ( double ) i; for(i=0; i<10; i++) data [ i ] = ( double ) i; for(i=0; i<10; i++) printDoubleLine ( data [ i ] ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); 