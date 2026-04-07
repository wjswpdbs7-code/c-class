//hello world in c++

#include <iostream>

int main() {
    std::cout << "Hello, c++" << std::endl;//한 단어씩 설명 std::cout: C++에서 표준 출력 스트림을 나타내는 객체입니다. c와 비교하여 설명하면 printf와 유사한 역할을 합니다. std::endl: 줄 바꿈을 나타내는 조작자입니다. c에서는 \n을 사용하여 줄 바꿈을 표현하지만, C++에서는 std::endl을 사용하여 줄 바꿈과 동시에 출력 버퍼를 비우는 역할도 합니다.
    //std::endl가 없을시 출력값은 "Hello, World!"가 출력되고 커서가 같은 줄에 남아있게 됩니다. std::endl을 사용하면 "Hello, World!"가 출력된 후 커서가 다음 줄로 이동하게 됩니다. \n 
    return 0;
}

//c++ 에서 scanf는 cin으로 대체됩니다. 예를 들어, c에서 scanf("%d", &variable);과 같이 입력을 받는다면, c++에서는 std::cin >> variable;과 같이 입력을 받습니다. cin은 C++의 표준 입력 스트림을 나타내는 객체로, 사용자로부터 데이터를 입력받는 데 사용됩니다. scanf와 달리 cin은 타입에 따라 자동으로 입력을 처리하므로, 별도의 형식 지정자가 필요하지 않습니다.
