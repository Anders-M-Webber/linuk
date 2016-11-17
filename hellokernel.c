/*
 * =====================================================================================
 *
 *       Filename:  hellokernel.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/17/2016 09:43:04 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
    printk(KERN_ALERT "hello kernel! \n");
    return 0;
}

/*  on Ubuntu , you may use static int hello_exit(void) */
static void hello_exit(void)// on Arch linux, you have to define it as void
{
    printk(KERN_ALERT "Bye kernel! \n");
    /*return 0;*/
}


module_init(hello_init);
module_exit(hello_exit);

