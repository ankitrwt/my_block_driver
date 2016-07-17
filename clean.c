#include "header.h"


static void __exit end(void){

	unregister_blkdrv(major_no,DEV_NAME);
}

module_exit(end);
