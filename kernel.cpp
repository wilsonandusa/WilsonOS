#include "types.h"

void printf(char* str)
{
    static uint16_t* video_memory = (uint16_t*)0xb8000;

    for(int i=0; str[i] != '\0'; ++i)
        video_memory[i] = (video_memory[i] & 0xFF00) | str[i];
}

extern "C" void kernelMain(void* multiboot_structure,  uint32_t magicnumber)
{
    printf("Hello Wilson!");

    while(1);
}