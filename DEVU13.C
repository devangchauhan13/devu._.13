#include<stdio.h>
#include<conio.h>
  //integer=1,8
 void main()
 {  int a,b,c,d,e,f,g;
	a=10;
	b=8;
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
      clrscr();
      printf("%d+%d=%i\n",a,b,c);
      printf("%d-%d=%i\n",a,b,d);
      printf("%d*%d=%i\n",a,b,e);
      printf("%d/%d=%i\n",a,b,f);
      printf("%d%%d=%i\n",a,b,g);
      getch();
}
