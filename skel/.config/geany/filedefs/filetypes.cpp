[build-menu]
FT_00_LB=_Compile
FT_00_CM=g++   -pedantic  -Wall -c "%f"  -lpcre2-8 -lpcre2-16 -lpcre2-32  -lpthread
FT_00_WD=
FT_01_LB=_Build
FT_01_CM=g++ -O0 -std=c++11 -pedantic -Wall -o "%e" "%f" -lgmp -lgmpxx -lpcre2-8 -lpcre2-16 -lpcre2-32 -pthread
FT_01_WD=
FT_02_LB=_Lint
FT_02_CM=cppcheck --language=c++ --enable=warning,style --template=gcc "%f"
FT_02_WD=
