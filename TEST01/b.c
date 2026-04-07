#include "b.h"


void bar() {
    printf("bar\n");
}
//bar() 함수는 "bar"라는 문자열을 출력하는 간단한 함수입니다. 이 함수는 main.c에서 호출되어 "bar"를 출력하게 됩니다. foo()와 마찬가지로, bar() 함수도 C17 언어 표준을 사용하여 작성되었습니다.
// //root@DESKTOP-6J12MHE:/home/c++/TEST01# gcc b.c -o b
// /usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
// (.text+0x1b): undefined reference to `main'
// collect2: error: ld returned 1 exit status
//함수선언은 void bar(void);과 같이 매개변수의 타입을 명시하는 것이 좋습니다. 이렇게 하면, 함수가 매개변수를 받지 않는다는 것을 명확하게 나타낼 수 있습니다. 또한, void를 사용하여 반환값이 없음을 명시하는 것도 좋은 습관입니다. 따라서, bar() 함수는 void bar(void)와 같이 선언하는 것이 더 명확하고 일관된 코드 작성에 도움이 됩니다.