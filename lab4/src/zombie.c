#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//  gcc zombie.c && ./a.out
//  ps -е -o pid,ppid,stat,cmd
//  ps aux | grep -w Z
//  Z - zombie или defunct процесс, т.е. процесс у которого нет родителя.

//  ps ajx | grep -w Z
//  ps auxww | grep 399
//  kill -9 399

int main() {
    pid_t child_pid;

 /* Создание дочернего процесса. */
    child_pid = fork();

    if (child_pid > 0) {
  /* Это родительский процесс — делаем минутную паузу. */
        sleep(60);
    } else {
  /* Это дочерний процесс — немедленно завершаем работу. */
        exit(0);
 }

 return 0;
}