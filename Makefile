CC=gcc

make : main.c updatebinary.c
  $(CC) main.c updatebinary.c -o PWN_FRAMEWORK
