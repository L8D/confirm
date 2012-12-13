#!/usr/bin/env bash
if ls -1 | grep confirm.cpp; then
  g++ confirm.cpp -o confirm
  echo "To move this to your /usr/local/bin folder you need administrator priviliges"
  echo "Either move the 'confirm' binary from /usr/local/bin to a folder in your \$PATH, or make sure /usr/local/bin is in it"
  sudo mv /usr/local/bin
  echo -e "\nInstall complete"
else echo "No 'confirm.cpp' file in this directory, please change to the repository directory"
fi
