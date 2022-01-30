//#include <linux/init.h>
#include <linux/module.h>
//#include <asm/current.h>
#include <linux/sched.h>

MODULE_LICENSE("Dual BSD/GPl");

static int hello_init(void)
{
    printk(KERN_INFO "The process is %s (pid %i)\n", current->comm, current->pid);
    return 0;
}
static void hello_exit(void)
{
    printk(KERN_ALERT "Goodbye, World!\n");
}
module_init(hello_init);
module_exit(hello_exit);