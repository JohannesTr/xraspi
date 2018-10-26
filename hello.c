#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_start(void)
{
    printk(KERN_INFO "Loading hello module...\n");
    printk(KERN_INFO "Hello dimnaea\n");
    return 0;
}

static void __exit hello_end(void)
{
    printk(KERN_INFO "Goodbye dimnaea\n");
}

module_init(hello_start);
module_exit(hello_end);

MODULE_AUTHOR("Dmitry Imnaea");
MODULE_DESCRIPTION("Kernel Module Test");
MODULE_LICENSE("NONE");
