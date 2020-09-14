#!/bin/sh
cat /etc/passwd | sed -e /#/d  | sed -n 'n;p' | sed 's/:.*//g' | rev | sort -r | tr "\n" " " | sed 's/ /, /g' | rev | sed 's/ ,/./' | rev 
