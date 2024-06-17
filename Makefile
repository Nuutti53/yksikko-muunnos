#Makefile yksikkomuunnos ohjelmalle
yksikko_muunnos: yksikko_muunnos_main.o yksikko_muunnos_funcs.o
	gcc yksikko_muunnos_main.o yksikko_muunnos_funcs.o -o yksikko_muunnos
yksikko_muunnos.o: yksikko_muunnos_main.c yksikko_muunnos.h
	gcc yksikko_muunnos_main.c -c -std=c99 -Wall -pedantic
yksikko_muunnos_funcs.o: yksikko_muunnos_funcs.c yksikko_muunnos.h
	gcc yksikko_muunnos_funcs.c -c -std=c99 -Wall -pedantic
