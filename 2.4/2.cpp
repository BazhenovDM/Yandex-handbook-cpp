#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string line;
    std::cin >> line;
    line += "/";
    size_t i = 1;
    while (line[i] != '/') {
        char c = line[i];
        switch (c) {
            case 'a': case 'e': case 'h': case 'i':
            case 'u': case 'w': case 'y': case 'o':
                line.erase(i, 1);
                --i;
                break;
            case 'b': case 'f': case 'p': case 'v':
                line[i] = '1';
                break;
            case 'c': case 'g': case 'j': case 'k':
            case 'q': case 's': case 'x': case 'z':
                line[i] = '2';
                break;
            case 'd': case 't':
                line[i] = '3';
                break;
            case 'l':
                line[i] = '4';
                break;
            case 'm': case 'n':
                line[i] = '5';
                break;
            case 'r':
                line[i] = '6';
                break;
        }
        ++i;
    }
    line.erase(line.size() - 1, 1);

    std::string deduplicated;
    deduplicated += line[0];    
    for (size_t i = 1; i < line.length(); i++) {
        if (line[i] != deduplicated[deduplicated.length() - 1]) {
            deduplicated += line[i];
        }
    }

    if (deduplicated.length() >= 4) {
        deduplicated = deduplicated.substr(0, 4);
    } else {
        deduplicated.append(4 - deduplicated.length(), '0');
    }
    
    std::cout << deduplicated << std::endl;
    
    return 0;
}

