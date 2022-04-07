#include <linux/init.h>
#include <linux/module.h>
    
static int my_kbd_init(void)
{
	printk(KERN_ERR "Hello! Initializing kbd module...");
	return  0;
}
    
static void my_kbd_exit(void)
{
	printk(KERN_ERR "Deinitializing kbd module...");
	return;
}
    
module_init(my_kbd_init);
module_exit(my_kbd_exit);
