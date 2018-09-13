void kmain (void) {
  const char *str = "sssk: stupid, shitty, and small kernel";

  char *vid = (char *) 0xb8000; // video memory

  unsigned int i = 0;
  unsigned int j = 0;
  unsigned int size = 0;

  // loop to clear the screen
  size = 80 * 25 * 2; // 80 columns of 25 lines each with 2 bytes

  while (j < size) {
    vid[j] = ' ';
    vid[j + 1] = 0x07;

    j = j + 2;
  }

  j = 0;

  // write str to screen
  while (str[j] != '\0') {
    vid[i] = str[j];
    vid[i + 1] = 0x07;
    j = j + 1;
    i = i + 2;
  }

  return;
}
