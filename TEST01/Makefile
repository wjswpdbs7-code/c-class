app.out : main.o a.o b.o
	gcc main.o a.o b.o -o app.out

main.o : main.c
	gcc -c main.c -o main.o

a.o : a.c
	gcc -c a.c -o a.o

b.o : b.c
	gcc -c b.c -o b.o

clean:
	rm -f *.o app.out

# a.o b.o main.o 를 만들고, 이들을 링크하여 app.out 을 만드는 Makefile입니다. `clean` 타겟은 생성된 오브젝트 파일과 실행 파일을 삭제합니다.
#make 명령어를 사용하여 app.out 을 빌드할 수 있습니다. `make clean` 명령어를 사용하여 빌드된 파일들을 정리할 수 있습니다.
