/* zlib.h尾部添加#include "zlib-inl.h" */

#include "zutil.h"
#include "zutil.c"  //内过早#include "gzguts.h", 已注释

#include "deflate.h"
#include "deflate.c"

#include "inftrees.c"
#include "inffast.c"

#include "inflate.h"
#include "inflate.c"

#include "infback.c"//内函数重定义:fixedtables(), 宏重定义:PULLBYTE  -> 已关闭

#include "compress.c"

#include "uncompr.c"

#undef GZIP			//使用gzlib要定义GZIP,但编译gzlib之前要取消宏定义
#include "gzlib.c"
#include "gzwrite.c"
#include "gzread.c"
#include "gzclose.c"

#include "adler32.c"

#include "crc32.c"//源文件件已经#include "crc32.h"

#include "trees.c"//源文件件已经#include "trees.h"