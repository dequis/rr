/* -*- Mode: C; tab-width: 8; c-basic-offset: 2; indent-tabs-mode: nil; -*- */

#include "rrutil.h"

int main(int argc, char* argv[]) {
  int fd = dup(STDOUT_FILENO);

  static const char msg[] = "EXIT-SUCCESS\n";
  write(fd, msg, sizeof(msg) - 1);
  return 0;
}
