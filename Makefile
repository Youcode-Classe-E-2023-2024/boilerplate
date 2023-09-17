run: main
	@./main

main: main.o sort.o util.o
	@gcc -o main main.o sort.o util.o

main.o: main.c main.h
	@gcc -c -g main.c main.h

sort.o: lib/sort.c lib/sort.h
	@gcc -c -g lib/sort.c

util.o: lib/util.c lib/util.h
	@gcc -c -g lib/util.c

clean:
	@rm main .main.c.swp main.h.gch main.o util.o sort.o

push: commit
	git push

commit: add
	git commit -m "$(M)"

add: pull
	git add .

pull: fetch
	git pull

fetch:
	git fetch
