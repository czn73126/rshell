#!/bin/sh

echo hello && exit
vim test.cpp;exit
vim test.cpp;exit;
ls;ls -a;echo 1;exit;
invalid || exit;
abc && exit
exit
echo hello && xyz && exit || ls
mkdir one && exit || rm -r one


date && git status || exit && echo hello