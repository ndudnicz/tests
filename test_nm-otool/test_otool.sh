#!/bin/sh
./ft_otool $1 > 1 ; otool -t $1 > 2 ;
echo $1
diff 1 2
