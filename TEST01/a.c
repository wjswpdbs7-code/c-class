#include "a.h"

void foo() {
    printf("foo\n");
}
//a.c와 b.c에 대한 오브젝트 파일만들기
//gcc -c a.c -o a.o 앞에 -c 붙이는건 
//gcc -c b.c -o b.o
//gcc a.o b.o main.c -o main
//a.out 을 만들 때는 gcc a.c b.c main.c -o main





// root@DESKTOP-6J12MHE:/usr/lib/gcc/x86_64-linux-gnu/11# ls
// cc1          crtend.o           crtprec32.o        libasan.so         libgcc.a     libgomp.spec  liblsan_preinit.o   libstdc++.a    libtsan_preinit.o
// cc1plus      crtendS.o          crtprec64.o        libasan_preinit.o  libgcc_eh.a  libitm.a      liblto_plugin.so    libstdc++.so   libubsan.a
// collect2     crtfastmath.o      crtprec80.o        libatomic.a        libgcc_s.so  libitm.so     libquadmath.a       libstdc++fs.a  libubsan.so
// crtbegin.o   crtoffloadbegin.o  g++-mapper-server  libatomic.so       libgcov.a    libitm.spec   libquadmath.so      libsupc++.a    lto-wrapper
// crtbeginS.o  crtoffloadend.o    include            libbacktrace.a     libgomp.a    liblsan.a     libsanitizer.spec   libtsan.a      lto1
// crtbeginT.o  crtoffloadtable.o  libasan.a          libcc1.so          libgomp.so   liblsan.so    libssp_nonshared.a  libtsan.so     plugin
// root@DESKTOP-6J12MHE:/usr/lib/gcc/x86_64-linux-gnu/11# 

//해당 파일들은 gcc 컴파일러와 관련된 라이브러리와 오브젝트 파일들이 위치한 디렉토리입니다. 이 디렉토리에는 C++ 컴파일러인 g++와 관련된 파일들도 포함되어 있습니다. 예를 들어, cc1과 cc1plus는 각각 C와 C++ 컴파일러의 실행 파일입니다. 또한, libasan.so, libgcc.a, libgomp.so 등은 각각 AddressSanitizer, GCC 라이브러리, OpenMP 라이브러리와 관련된 파일들입니다. 이러한 파일들은 컴파일 과정에서 필요한 라이브러리와 도구들을 제공하여 프로그램을 빌드하는 데 사용됩니다.