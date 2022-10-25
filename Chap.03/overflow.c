 #include <stdio.h>

int main()
 {
     unsigned int x = 0xffff;
     printf("%ud\n", x);

     unsigned int y = 0xffff;
     printf("%ud\n", y+1);

     unsigned int z = 0xffff;
     printf("%ud\n", z-1);

     int a = 0xffff;
     printf("%d\n", a);

     int b = 0xffff;
     printf("%d\n", b+1);

     int c = 0xffff;
     printf("%d\n", c-1);
     
     unsigned int d = 0xffffffff;
     printf("%ud\n", d);

     unsigned int e = 0xffffffff;
     printf("%ud\n", e+1);

     unsigned int f = 0xffffffff;
     printf("%ud\n", f-1);

     int g = 0xffffffff;
     printf("%d\n", g);

     int h = 0xffffffff;
     printf("%d\n", h+1);

     int i = 0xffffffff;
     printf("%d\n", i-1);

     unsigned int j = 0x00000000;
     printf("%ud\n", j);

     unsigned int k = 0x00000000;
     printf("%ud\n", k + 1);

     return 0;
 }