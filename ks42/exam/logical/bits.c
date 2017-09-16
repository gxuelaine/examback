ks42@123.207.10.223's password:
Welcome to Ubuntu 14.04.1 LTS (GNU/Linux 3.13.0-86-generic x86_64)

 * Documentation:  https://help.ubuntu.com/

  System information as of Thu Jun 22 15:15:13 CST 2017

  System load:  0.33               Processes:           269
  Usage of /:   49.3% of 19.56GB   Users logged in:     48
  Memory usage: 46%                IP address for eth0: 10.135.15.97
  Swap usage:   2%

  Graph this data and manage this system at:
    https://landscape.canonical.com/
New release '16.04.2 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Thu Jun 22 15:02:07 2017 from 116.10.196.20
ks42@VM-15-97-ubuntu:~$ cp -r /home/pcc/exam ~
cp: cannot stat ‘/home/pcc/exam/nums/shift.c’: Permission denied
cp: cannot stat ‘/home/pcc/exam/instsys/bomb’: Permission denied
cp: cannot stat ‘/home/pcc/exam/instsys/reg’: Permission denied
cp: cannot stat ‘/home/pcc/exam/instsys/bomb.c’: Permission denied
cp: cannot stat ‘/home/pcc/exam/logical/sets.c’: Permission denied
cp: cannot stat ‘/home/pcc/exam/logical/bits.c’: Permission denied
ks42@VM-15-97-ubuntu:~$ cd nums
-bash: cd: nums: No such file or directory
ks42@VM-15-97-ubuntu:~$ cd~
No command 'cd~' found, did you mean:
 Command 'cdw' from package 'cdw' (universe)
 Command 'cdi' from package 'cdo' (universe)
login as: ks42
ks42@123.207.10.223's password:
Welcome to Ubuntu 14.04.1 LTS (GNU/Linux 3.13.0-86-generic x86_64)

 * Documentation:  https://help.ubuntu.com/

  System information as of Thu Jun 22 15:15:13 CST 2017

  System load:  0.33               Processes:           269
  Usage of /:   49.3% of 19.56GB   Users logged in:     48
  Memory usage: 46%                IP address for eth0: 10.135.15.97
  Swap usage:   2%

  Graph this data and manage this system at:
    https://landscape.canonical.com/
New release '16.04.2 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Thu Jun 22 15:02:07 2017 from 116.10.196.20
ks42@VM-15-97-ubuntu:~$ cp -r /home/pcc/exam ~
cp: cannot stat ‘/home/pcc/exam/nums/shift.c’: Permission denied
cp: cannot stat ‘/home/pcc/exam/instsys/bomb’: Permission denied
cp: cannot stat ‘/home/pcc/exam/instsys/reg’: Permission denied
cp: cannot stat ‘/home/pcc/exam/instsys/bomb.c’: Permission denied
cp: cannot stat ‘/home/pcc/exam/logical/sets.c’: Permission denied
cp: cannot stat ‘/home/pcc/exam/logical/bits.c’: Permission denied
ks42@VM-15-97-ubuntu:~$ cd nums
-bash: cd: nums: No such file or directory
ks42@VM-15-97-ubuntu:~$ cd~
No command 'cd~' found, did you mean:
 Command 'cdw' from package 'cdw' (universe)
 Command 'cdi' from package 'cdo' (universe)
 Command 'cdp' from package 'irpas' (multiverse)
 Command 'cdo' from package 'cdo' (universe)
 Command 'cdb' from package 'tinycdb' (main)
 Command 'cdv' from package 'codeville' (universe)
 Command 'cde' from package 'cde' (universe)
 Command 'cd5' from package 'cd5' (universe)
cd~: command not found
ks42@VM-15-97-ubuntu:~$ cp -r /home/pcc/exam
cp: missing destination file operand after ‘/home/pcc/exam’
Try 'cp --help' for more information.
ks42@VM-15-97-ubuntu:~$ cp -r /home/pcc/exam ~
ks42@VM-15-97-ubuntu:~$ cd ~
ks42@VM-15-97-ubuntu:~$ cd ~ nums
ks42@VM-15-97-ubuntu:~$ cd ~nums
-bash: cd: ~nums: No such file or directory
ks42@VM-15-97-ubuntu:~$ cd /homs/os
-bash: cd: /homs/os: No such file or directory
ks42@VM-15-97-ubuntu:~$ cd/home/ks42
-bash: cd/home/ks42: No such file or directory
ks42@VM-15-97-ubuntu:~$ cd /homs/pcc/exam
-bash: cd: /homs/pcc/exam: No such file or directory
ks42@VM-15-97-ubuntu:~$ cd /homs/pcc/exam ~
-bash: cd: /homs/pcc/exam: No such file or directory
ks42@VM-15-97-ubuntu:~$ cd exam
ks42@VM-15-97-ubuntu:~/exam$ cd nums
ks42@VM-15-97-ubuntu:~/exam/nums$ ls
shift.c
ks42@VM-15-97-ubuntu:~/exam/nums$ nano shift.c
ks42@VM-15-97-ubuntu:~/exam/nums$
login as: ks42
ks42@123.207.10.223's password:
Welcome to Ubuntu 14.04.1 LTS (GNU/Linux 3.13.0-86-generic x86_64)

 * Documentation:  https://help.ubuntu.com/

  System information as of Thu Jun 22 15:50:14 CST 2017

  System load:  0.19               Processes:           406
  Usage of /:   49.3% of 19.56GB   Users logged in:     50
  Memory usage: 74%                IP address for eth0: 10.135.15.97
  Swap usage:   2%

  Graph this data and manage this system at:
    https://landscape.canonical.com/
New release '16.04.2 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Thu Jun 22 15:15:23 2017 from 116.10.196.20
ks42@VM-15-97-ubuntu:~$ cd exam
ks42@VM-15-97-ubuntu:~/exam$ cd nums
ks42@VM-15-97-ubuntu:~/exam/nums$ ls
shift.c
ks42@VM-15-97-ubuntu:~/exam/nums$ gcc.shift.c
gcc.shift.c: command not found
ks42@VM-15-97-ubuntu:~/exam/nums$ gcc.shift.c -o
gcc.shift.c: command not found
ks42@VM-15-97-ubuntu:~/exam/nums$ gcc.shift.c -o b1
gcc.shift.c: command not found
ks42@VM-15-97-ubuntu:~/exam/nums$ cd ..
ks42@VM-15-97-ubuntu:~/exam$ cd logical
ks42@VM-15-97-ubuntu:~/exam/logical$ nano bits.c
  GNU nano 2.2.6               File: bits.c

#include<stdio.h>

/*
 *按本说明要求将函数补充完整：
 * bitXor - x^y using only ~ and &
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 */
int bitXor(int x, int y) {
  return 2;
}
int main(void)
{
      printf("%d\n",bitXor(4,5));
      return 0;
}


                               [ Read 17 lines ]
^G Get Help  ^O WriteOut  ^R Read File ^Y Prev Page ^K Cut Text  ^C Cur Pos
^X Exit      ^J Justify   ^W Where Is  ^V Next Page ^U UnCut Text^T To Spell
#include<stdio.h>

/* 
 *按本说明要求将函数补充完整：
 * bitXor - x^y using only ~ and &
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 */
int bitXor(int x, int y) {
  return (~(x&y)&~(~x&~y));
}
int main(void)
{
      printf("%d\n",bitXor(4,5));
      return 0;
}
