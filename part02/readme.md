# gcc编译
    gcc -o xx.c xx
    生成可执行程序xx
# c语言生成可执行文件
    预编译------->编译------------------------>链接
    xxx.c         形成二进制机器指令           生成可执行程序

    预编译生成sys.e
    $ gcc -E -o sys.e sys.c 
    $ less sys.e
    # 3 "sys.c"
    int main(){


    system("gedit");

    return 0;
    }
    预编译：
        将include包含的头文件替换到c文件中，同时删除无用的注释，一般生产xx.e文件
        # 868 "/usr/include/stdio.h" 3 4
        $ gcc -E -o hello.e hello.c
        查看编译后的hello.e
        $ less hello.e 
        # 2 "hello.c" 2
        # 1 "hello.h" 1

        # 1 "hello.h"
        int i = 0;
        # 3 "hello.c" 2

        int main(){

        printf("hello\n");
        }

        c语言编译器会把头文件加载进入，系统的头文件#include <xxx.h>
        如果是自定义的头文件include引入是#include "xxx.h"

    编译：
        1、汇编 
            -S 将c程序转换为汇编文件
            生成汇编
            $ gcc -S -o test.s test.c
            也可以分两步生成汇编
            $ gcc -E -o hello2.c hello.c  //预编译
            $ gcc -S -o hello.s hello2.c  //生成汇编文件
            查看汇编文件 less hello.s
                    .file   "hello2.c"
                .text
                .globl  i
                .bss
                .align 4
                .type   i, @object
                .size   i, 4
            i:
                    .zero   4
                    .section        .rodata
            .LC0:
                    .string "hello"
                    .text
                    .globl  main
                    .type   main, @function
            main:
            .LFB0:
                    .cfi_startproc
                    pushq   %rbp
                    .cfi_def_cfa_offset 16
                    .cfi_offset 6, -16
                    movq    %rsp, %rbp
                    .cfi_def_cfa_register 6
                    leaq    .LC0(%rip), %rdi
                    call    puts@PLT
                    movl    $0, %eax
                    popq    %rbp
                    .cfi_def_cfa 7, 8
                    ret
                    .cfi_endproc
            .LFE0:
                    .size   main, .-main
                    .ident  "GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
                    .section        .note.GNU-stack,"",@progbits

            演示汇编生成：
            $ gcc -S -o hello-asm.s hello-asm.c
        2、编译
            将汇编文件转换为二进制的机器指令
                $ gcc -C -o hello-asm.out hello-asm.s
            查看可执行文件
                $ file hello-asm.out 
                hello-asm.out: ELF 64-bit LSB shared object, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, for GNU/Linux 3.2.0, BuildID[sha1]=c2f20b9d33b21db0c299ee504081c7383844f62e, not stripped
    链接：
        把相关的库和xx.out打包，最后才可以生成可执行文件
        $ gcc -o hello hello-asm.out hello-asm.s
        生成的目标可执行文件hello，就可以执行
        ./hello 
        执行结果
        a + b = 3
        
        对于gcc来说，没有任务参数就是链接

