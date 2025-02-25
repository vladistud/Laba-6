#include <iostream>

void sortDigitsDescending(char* str) 
    int count[10] = {0}; 
    for (char* ptr = str; *ptr; ++ptr) {
        if (*ptr >= '0' && *ptr <= '9') {
            count[*ptr - '0']++;
        }
    
    for (char* ptr = str; *ptr; ++ptr) {
        if (*ptr >= '0' && *ptr <= '9') {
            for (int i = 9; i >= 0; --i) { 
                while (count[i] > 0) { 
                    *ptr = '0' + i;
                    count[i]--;
                    ++ptr;
                }
            }
            break;
        }
    }
}

int main() {
    char str[] = "abc1234def982gh";
    
    std::cout << "Исходная строка: " << str << std::endl;
    sortDigitsDescending(str);
    std::cout << "После сортировки цифр по убыванию: " << str << std::endl;

    return 0;
}
