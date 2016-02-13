/*
 * =====================================================================================
 *       Filename:  type_prompt.c
 *        Version:  1.0
 * =====================================================================================
 */
#include <pwd.h>
//#include <sys/utsname.h>
#include "rshell.h"
const int max_name_len = 256;
const int max_path_len = 1024;

void type_prompt()
{
    struct passwd *pwd;
    char hostname[max_name_len];
    char pathname[max_path_len];
    pwd = getpwuid(getuid());
    getcwd(pathname,max_path_len);
    if(gethostname(hostname,max_name_len)==0)
        printf("[rshell]%s@%s:",pwd->pw_name,hostname);
    else
        printf("[rshell]%s@unknown:",pwd->pw_name);
    //printf("pathname: %s,length:%d\npw_dir:%s,length:%d\n",
            //pathname,strlen(pathname),pwd->pw_dir,strlen(pwd->pw_dir));
    if(strlen(pathname) < strlen(pwd->pw_dir) || 
            strncmp(pathname,pwd->pw_dir,strlen(pwd->pw_dir))!=0)
        printf("%s$",pathname);
    else
        printf("~%s$",pathname+strlen(pwd->pw_dir));
    return;
}

//int main()
//{
//    type_prompt();
//    return 0;
//}
