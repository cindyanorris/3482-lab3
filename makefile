CC = g++ 
CFLAGS = $(PFLAG) -c -std=c++11 -g
OBJS = Ngrams.o WordList.o main.o
LFLAGS = $(PFLAG)

.C.o:
	$(CC) $(CFLAGS) $< -o $@

#You can modify this makefile to support more 
#ngram versions.  Don't forget to also add the name
#of the target to the clean command.
#You will also need to change main.C.

ngramfast: WordList.o NgramFast.o main.C
	$(CC) $(CFLAGS) -DNGRAMFAST main.C -o main.o
	$(CC) $(LFLAGS) WordList.o NgramFast.o main.o -o ngramfast

ngramslow: WordList.o NgramSlow.o main.C
	$(CC) $(CFLAGS) -DNGRAMSLOW main.C -o main.o
	$(CC) $(LFLAGS) WordList.o NgramSlow.o main.o -o ngramslow

ngramstl: WordList.o NgramSTL.o main.C
	$(CC) $(CFLAGS) -DNGRAMSTL main.C -o main.o
	$(CC) $(LFLAGS) WordList.o NgramSTL.o main.o -o ngramstl

WordList.o: WordList.h

NgramFast.o: NgramFast.h WordList.h

NgramSlow.o: NgramSlow.h WordList.h

NgramSTL.o: NgramSTL.h WordList.h

clean:
	-rm -f *.o ngramfast ngramslow ngramstl gmon.out 

