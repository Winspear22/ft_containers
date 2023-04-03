#!/bin/bash

if test -f container_test && [ "$1" = "delete" ]; then
  echo "\033[1;35mLancement 1 du programme container_test avec valgrind\033[0m"
  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./container_test
  echo "\033[1;31mSuppression du programme container_test\033[0m"
  make fclean
elif test -f container_test && [ "$1" != "delete" ]; then
  echo "\033[1;31mLancement 2 du programme container_test avec valgrind\033[0m"
  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./container_test
elif test ! -f container_test && [ "$1" = "delete" ]; then
  echo "\033[1;33mInstallation 3 du programme container_test\033[0m"
  make test
  echo "\033[1;35mLancement du programme container_test avec valgrind\033[0m"
  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./container_test
  echo "\033[1;31mSuppression du programme container_test\033[0m"
  make fclean
elif test ! -f container_test && [ "$1" != "delete" ]; then
  echo "\033[1;33mInstallation 4 du programme container_test\033[0m"
  make test
  echo "\033[1;35mLancement du programme container_test avec valgrind\033[0m"
  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./container_test
fi