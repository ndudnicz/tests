#!/bin/sh
if [ -z "$2" ]
then
  ./ft_nm $1 > 1 ; nm $1 > 2 ;
else
  ./ft_nm $1 $2 > 1 ; nm $1 $2 > 2 ;
fi
echo $1
echo $2
diff 1 2
