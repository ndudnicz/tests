#!/bin/sh
./ft_nm /usr/bin/* /bin/* /usr/lib/*.dylib > 1 ;
nm /usr/bin/* /bin/* /usr/lib/*.dylib > 2 ;
diff 1 2
