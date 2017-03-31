unsigned long Fib(unsigned long a, unsigned long b, int index);

unsigned long sof(unsigned long t, unsigned long a, unsigned long b){
  
    unsigned long s = 0;
    int i;
    if((a == 0) && (b == 0)) return s;
    for(i = 0; Fib(a,b,i) < t; i++){
	if(Fib(a,b,i) % 2 == 1){
           s = s + Fib(a,b,i);
	}
    }
    return s;
}

unsigned long Fib(unsigned long a, unsigned long b, int index){

     if (index == 0){
         return a;
     } else if (index == 1){
         return b;
     } else{
         return ( Fib(a,b,index-1) + Fib(a,b,index-2) );
     }
}  
