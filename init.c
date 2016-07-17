#include "header.h"
//#include "declaration.h"



static int __init start(void){
int ret;

	#ifdef DEBUG
	printk(KERNINFO "Begin: %s",__func__);
	#endif

	ret = register_blkdev(0,DEV_NAME);
	if(ret < 0){
		#ifdef DEBUG
		printk(KERNINFO "register_blkdev() fails\n");
		#endif
		return -1;
	}


	#ifdef DEBUG
	printk(KERNINFO "End: %s",__func__);
	#endif
return 0;
}

module_init(start);
