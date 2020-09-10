cat ./etc/passwd | egrep -v "(^#.*|^$)" | sed -n '2,${p;n;}' | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | tr "\n" "," | sed 's/,/, /g' | rev | sed 's/ ,/./' | rev 
