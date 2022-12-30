#define S1(t,i)	b[i] = 0.33333 * (a[i - 1] + a[i] + a[i + 1]);
#define S2(t,i)	a[i] = b[i];

		int t1, t2, t3;

	register int lbv, ubv;

/* Start of CLooG code */
if ((N >= 4) && (T >= 1)) {
  if (N >= 5) {
    for (t1=0;t1<=T-1;t1++) {
      S1(t1,2);
      for (t2=2*t1+3;t2<=2*t1+N-2;t2++) {
        S1(t1,(-2*t1+t2));
        S2(t1,(-2*t1+t2-1));
      }
      S2(t1,(N-2));
    }
  }
  if (N == 4) {
    for (t1=0;t1<=T-1;t1++) {
      S1(t1,2);
      S2(t1,2);
    }
  }
}
/* End of CLooG code */
