#!/bin/sh


cd one && mkdir one # cd and mkdir
mkdir one && rm -r one  # mdkir then remove it
echo good || date && cd .. ; #OR and AND with valid commands
date && abc && echo bye && date #three ANDS with one invalid command
ls -a ||  xxx && ls -al < #OR and AND with one invalid command


touch test.cpp && rm test.cpp # make a file then remove it
echo "hello" && abc; echo world

