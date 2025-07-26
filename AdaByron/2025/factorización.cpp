int factor [1000];
 int potencia [1000];
int nfac = 0;
 void factores ( int res ) {
// potencias de 2
 if ( res %2 == 0) {
res /= 2;
factor [0] = 2;
potencia [0] = 1;
 nfac = 1;
while ( res %2 == 0) {
potencia [0]++;
res /= 2;
 }

}// potencias impares
for ( int i = 3; i <= res ; i +=2)
if ( res %i == 0) {
res /= i ;
 factor [ nfac ] = i ;
potencia [ nfac ] = 1;
while ( res %i == 0) {
potencia [ nfac ]++;
res /= i ;
}
nfac ++;
}
28 }
