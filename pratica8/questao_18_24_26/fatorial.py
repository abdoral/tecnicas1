#!/usr/bin/python
import sys;

for x in sys.argv[1:]:
    fat = 1;
    f = int(x);
    i = 2;

    while i <= f:
            fat = fat * i;
            i = i + 1;

    print "Fatorial de ",f,"eh ",fat;
    arq = open("fatorial.txt", 'w');
    arq.write(str(fat));
    arq.close();

print "Fim";