#include<stdio.h>
#include<math.h>

struct robo {
	
	double x , y , dx , dy ;
	double v ;
	double th , w ;
	
}

main () {
	
	double dt ;
	
	dt = 0.01 ;
	
	short cnt;
	
	cnt = 0 ;
	
	struct robo pl ;
	
	pl.dx = 0.0 ;
	pl.dy = 0.0 ;
	pl.v = 300.0 ;
	pl.th = 0.0 ;
	pl.w = M_PI / 2.0 ;
	
	printf ( "%lf %lf\n" ,pl.dx ,pl.dy ) ;
	
	while ( 1 ) {
		
		pl.th = pl.th + pl.w * dt ;
		pl.x = pl.dx + pl.v * cos ( pl.th ) ;
		pl.y = pl.dy + pl.v * sin ( pl.th ) ;
		pl.dx = pl.x ;
		pl.dy = pl.y ;
		
		printf ( "%lf %lf\n" ,pl.x ,pl.y ) ;
		
		cnt = cnt + 1 ;
		
		if ( cnt == 500 ) {
			
			break ;
			
		}
		
	}

}
