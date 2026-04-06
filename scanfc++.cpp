//c++에서 scanf
#include <iostream>

int main() {
    int variable;//변수 선언
    std::cout << "Enter a number: ";//사용자에게 입력을 요청하는 메시지 출력 
    std::cin >> variable;//사용자로부터 입력을 받아 variable 변수에 저장
    std::cout << "You entered: " << variable << std::endl;//사용자가 입력한 값을 출력
    return 0;
}

//c++에서 <<,>>의 사용법 
//<< 연산자는 출력 스트림에 데이터를 삽입하는 데 사용됩니다. 예를 들어, std::cout << "Hello, World!" << std::endl;은 "Hello, World!"라는 문자열과 줄 바꿈을 출력 스트림에 삽입하여 화면에 출력합니다.

//c에서 같은 기능을 수행하는 코드는 다음과 같습니다:
/*
#include <stdio.h>

int main() {
    int variable;
    printf("Enter a number: ");
    scanf("%d", &variable);
    printf("You entered: %d\n", variable);
    return 0;
}
*/
//c++에서 c와의 자료형 차이
//c++에서는 bool, wchar_t, char16_t, char32_t와 같은 새로운 자료형이 추가되었습니다. 또한, c++에서는 auto 키워드를 사용하여 변수의 타입을 자동으로 추론할 수 있습니다. c에서는 이러한 기능이 없으며, 모든 변수는 명시적으로 선언되어야 합니다. 또한, c++에서는 참조(reference)와 포인터(pointer)를 모두 사용할 수 있지만, c에서는 포인터만 사용할 수 있습니다.

//예시
// #include <iostream>

// int main() {
//     bool isTrue = true;//bool 자료형 사용
//     wchar_t wideChar = L'A';//wchar_t 자료형 사용
//     char16_t char16 = u'B';//char16_t 자료형 사용
//     char32_t char32 = U'C';//char32_t 자료형 사용
//     auto inferredType = 42;//auto 키워드 사용하여 타입 추론

//     std::cout << "isTrue: " << isTrue << std::endl;
//     std::cout << "wideChar: " << wideChar << std::endl;
//     std::cout << "char16: " << char16 << std::endl;
//     std::cout << "char32: " << char32 << std::endl;
//     std::cout << "inferredType: " << inferredType << std::endl;

//     return 0;
// }