CC=gcc

make: main.c updatebinary.c
  $(CC) -s main.c updatebinary.c -o PWN_FRAMEWORK

debug: main.c updatebinary.c
  $(CC) main.c updatebinary.c -o PWN_FRAMEWORK

clean:
  rm -rf PWN_FRAMEWORK
  
static:
  $(CC) -s main.c updatebinary.c --static -o PWN_FRAMEWORK
