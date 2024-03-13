#include <iostream>

#define целый int
#define флаг bool
#define программа int main()
#define вернуть return
#define если if
#define иначе else
#define цикл while
#define вывод std::cout
#define перенос std::endl
#define истина true
#define ложь false

программа {
    целый итератор = 0;
    
    цикл (итератор != 15) {
        если (итератор % 2 == 0) {
            вывод << итератор << " делится на 2" << перенос;
        }
        иначе если (итератор % 3 == 0) {
            вывод << итератор << " делится на 3" << перенос;
        }
        иначе {
            вывод << итератор << перенос;
        }
        
        ++итератор;
    }
    
    вернуть 0;
}
