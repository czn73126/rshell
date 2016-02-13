rshell: rshell.h rshell.c type_prompt.c read_command.c builtin_command.c test
	gcc rshell.c type_prompt.c read_command.c builtin_command.c -o rshell

rshell_r: rshell.h rshell.c type_prompt.c read_command.c builtin_command.c test
	gcc rshell.c type_prompt.c read_command.c builtin_command.c -o rshell -D READLINE_ON -I /usr/include -lreadline -ltermcap

test: test.c
	gcc test.c -o test

clean:
	rm -f rshell test
