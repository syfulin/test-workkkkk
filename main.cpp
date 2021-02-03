// Example program
#include <iostream>
#include <string>

int main()
{
    // Наборы символов по трём типам:
    std::string symbolsLetters ( "ABDEFGHIJKLMNOQRTUVWYZabdefghijklmnoqrtuvwyz");
    std::string symbolsSymbols ( "+-_$~");
    std::string symbolsDigits ( "1234567890");
    
    // Все символы в куче:
    std::string symbolsAll = symbolsLetters + symbolsSymbols + symbolsDigits;
    
    // Шаг 1: Сгенерировать строку 
    int n;
    std::cout << "Please, input N: ";
    std::cin >> n;
    std::string myString ("");
    
    // Генерация строки
    for (int i = 0; i < n; i++) {
        myString += symbolsAll.at(rand() % (symbolsAll.length()));
    }
    
    std::cout << "Reault 1:" << "\n" << myString << "\n";
    
    // Шаг 2: Заменить все буквы на другой символ
    char char1;
    std::cout << "Please, input char1: ";
    std::cin >> char1;
    std::string myString2 ("");
    
    for (int i = 0; i < myString.length(); i++) {
        
        // Если очередной символ сторки - буква
        if (symbolsLetters.find(myString.at(i)) != std::string::npos) {
            myString2 += char1;
        } else {
            myString2 += myString.at(i);
        } 
    }
    std::cout << "Reault 2:" << "\n" << myString2 << "\n";
    
    // Шаг 3: Заменить все цифры на другой символ
    char char2;
    std::cout << "Please, input char2: ";
    std::cin >> char2;
    std::string myString3 ("");
    
    for (int i = 0; i < myString2.length(); i++) {
        
        // Если очередной символ сторки - цифра
        if (symbolsDigits.find(myString2.at(i)) != std::string::npos) {
            myString3 += char2;
        } else {
            myString3 += myString2.at(i);
        } 
    }
    std::cout << "Reault 3:" << "\n" << myString3 << "\n";
    
    
    // Шаг 3: Подсчитать количество повторов первого и второго символа, а так же символов, которые небыли заменены
    int countChar1 = 0;
    int countChar2 = 0;
    int original = 0;
    
    for (int i = 0; i < myString3.length(); i++) {
        if (myString3.at(i) == char1) {
            countChar1++;
        }
        else if (myString3.at(i) == char2) {
            countChar2++;
        }
        else {
            original++;
        }
    }
    
    std::cout << "Reault 4:"  "\n";
    std::cout << "Count char1  :" <<  countChar1  << "\n";
    std::cout << "Count char2  :" <<  countChar2  << "\n";
    std::cout << "Count char original:  " <<  original  << "\n";
}
