
//main kernel function
void printf(char* str)
{
    static unsigned short* VideoMemory = ( unsigned short* )0xb8000;
    for(int i=0;str[i] !='\0'; ++i){
      VideoMemory[i]= (VideoMemory[i] & 0xFF00) | str[i];
      
 }
 
}

//params accepting values on top of stack
//extern "C" makes function available for linker
extern "C" void kernelMain(void* multiboot_structure, unsigned int magicnumber)
{
  printf("crazy programmer evans meja\n");
  printf("We are now in kernel main\n");
  printf("crazy programmer evans meja\n");
  printf("https://www.programmingempire.tk/\n");
  printf("crazy programmer evans meja\n");
  while(1);
}

