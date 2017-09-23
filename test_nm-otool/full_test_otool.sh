#!/bin/sh
./ft_otool /bin/* /usr/lib/*.dylib > 1 ;
otool -t /bin/* /usr/lib/*.dylib > 2 ;
diff 1 2
