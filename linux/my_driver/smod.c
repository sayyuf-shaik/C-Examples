#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/cdev.h>
#include <asm/uaccess.h>
#include <linux/device.h>
#include <linux/slab.h>
#include <asm/highmem.h>

MODULE_LICENSE("Dual BSD/GPL");
int myOpen(struct inode *inode,struct file *filep);
int myRelease(struct inode *in,struct file *fp);
long myUnlock(struct file *sayyuf , unsigned int anjula, unsigned long virtual_adress );

static int my_driver_init(void);
static void my_driver_exit(void);
struct file_operations fops={
                        .owner = THIS_MODULE,
                        .open = myOpen,
                        .release = myRelease,
            .unlocked_ioctl=myUnlock
};
int myOpen(struct inode *inode,struct file *filep)
{
        printk(KERN_INFO "open succesfully \n");
        return 0;
}
long myUnlock(struct file *sayyuf , unsigned int anjula, unsigned long virtual_address )
{
    struct task_struct *myid;
    struct task_struct *mymm;
    int i = 0;
    unsigned int physical;
    unsigned int phy;
    void *page;
    unsigned int *addr;
    pte_t *pt;
    myid = current;
    mymm = current;
    struct mm_struct *ts = mymm->mm;
    printk( "kernel pid = %lu", myid->pid);
    physical = (unsigned int) (ts->pgd + ( virtual_address >> 22 ) )->pgd;
    physical = physical >> 12;
     pt =  kmap(pfn_to_page(physical));
     phy = ( unsigned int )((pt + ( (virtual_address  & 0x003ff000 ) >> 12 ))->pte);
     phy = phy >> 12;
     page  = kmap(pfn_to_page(phy));
     addr = (unsigned int *)( page + ( virtual_address & 0x00000fff ) );

     *addr = 20;
     printk("%d",virtual_address);

    return 0;
}

int myRelease(struct inode *in,struct file *fp)
{
        printk(KERN_INFO "FILE RELEASED \n");
        return 0;
}

static int my_driver_init(void)
{
	printk(KERN_ALERT "INSIDE FUNCITIOM");
        register_chrdev(240,"my_char",&fops);
        return 0;
}

static void my_driver_exit(void)
{
	printk(KERN_ALERT "bye bye");
        unregister_chrdev(240,"my_char");
}
module_init(my_driver_init);
module_exit(my_driver_exit);        
