/////////////////////////////////////////////////////////////////
////////////// Keygen by d06i     ///////////////////////////////

#include <iostream>
#include <string>

/*
00401148 | B8 80304000              | mov eax,ad_cm#2.403080                  | get ame_textbox
0040114D | BB 80324000              | mov ebx,ad_cm#2.403280                  | get serial_textbox
00401152 | 8BCE                     | mov ecx,esi                             | move the name length
00401154 | 8A10                     | mov dl,byte ptr ds:[eax]                | move name[0] character
00401156 | 2AD1                     | sub dl,cl                               | dl =  substract the name[0] - name_length
00401158 | 3813                     | cmp byte ptr ds:[ebx],dl                | compare serial_textbox[i] and substract result (dl)
0040115A | 75 18                    | jne ad_cm#2.401174                      | if not true; go to exit
0040115C | 40                       | inc eax                                 | go to the next name_textbox character
0040115D | 43                       | inc ebx                                 | go to the next serial_textbox character
0040115E | E2 F4                    | loop ad_cm#2.401154                     | while to end name

// Keygen algortihm:  serial[i] = name[i] - name_current_length;
*/

int main() {
    std::string name;

    // Get a name
    std::cout << "Name: ";
    std::cin >> name;

    auto position{0};
    auto name_current_length = name.length();

    std::cout << "Serial: ";
    while( position < name.length()) {
        char serial = name[position] - name_current_length;
        position++;
        name_current_length--;
        std::cout << serial;
    }

std::cin.get();
    return 0;
}

