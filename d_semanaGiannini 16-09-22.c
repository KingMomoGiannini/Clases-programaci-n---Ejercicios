int diasemana(int a, int b, int c)
{
  if (b<3)
        {
          b=b+10;
          c=c-1;
        }
  else
      b=b-2;
   int siglo=c/100;
    int a2=c%100;
    int diasem=(((26*b-2)/10)+a+a2+(a2/4)+(siglo/4)-(2*siglo))%7;
    printf("-%d-\n\n",diasem);
    if (diasem<0)
          diasem=diasem+7;
    return diasem;

}


