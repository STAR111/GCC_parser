float funcf(float arg){
  return arg+arg;
}

int main(int argc, char ** argv){
  int (*funcp)();
  int* p;
  int i;
  long long ll;
  float f;
  double d;
  int * const cpi;
  int * * const cppi;
  int * const * pcpi;
  const int * * ppci;
  const int * pci;
  volatile int * pvi;

  (unsigned int)(i+1);  //[10.3]Warn because it is a complex expression of integer type and converting to a type of a different signedness.
  (long long)(i/2);     //[10.3]Warn because it is converting to a type of a different signedness.
  (unsigned int)i;      //[10.3]No warn because it is not a complex expression.
  (long long)4;         //[10.3]No warn because it is not a complex expression.
  ll=(i/2);             //[10.3]No warn when the conversion is implicit.

  (double)(f*f);        //[10.4]Warn because it is a complex expression of floating type and converting to a type of wider size.
  (int)(f+1);           //[10.4]Warn because it is converting to a type other than floating type.
  (int)f;               //[10.4]No warn when the conversion is not a complex expression.
  (int)funcf(f+f);      //[10.4]No warn when the conversion is not a complex expression.
  d=(f*f);              //[10.4]No warn when the conversion is implicit.

  (int (*)())i;         //[11.1][11.2]No warn because the conversion is between a integral type and a pointer to a function type.
  (int (*)())p;         //[11.1][11.2]Warn because the conversion is between a pointer to a function type and a pointer type.
  (int (*)(int *))funcp;//[11.1]Warn because the conversion is between a pointer to a function type and a pointer type.
  (int *)funcp;         //[11.1][11.2]Warn because the conversion is between a pointer to object and a pointer to a function.
  (void *) p;           //[11.2]No warn because the conversion is between a pointer to object and a void pointer.

  (int *) cpi;          //[11.5]No warn because the const qualification is not decorating the type addressed by a pointer but is decorating the pointer type.
  (int *) pci;          //[11.5]Warn because the conversion tries to remove the const qualification from the type addressed by the pointer.
  (int *) pvi;          //[11.5]Warn because the conversion tries to remove the volatile qualification from the type addressed by the pointer.
  (int * *) cppi;       //[11.5]No warn because the const qualification is not decorating the type addressed by a pointer but is decorating the pointer type.
  (int * *) pcpi;       //[11.5]Warn because the conversion tries to remove the const qualification from the type addressed by the pointer.
  (int * *) ppci;       //[11.5]Warn because the conversion tries to remove the const qualification from the type addressed by the pointer.
}
