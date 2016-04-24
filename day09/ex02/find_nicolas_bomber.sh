cat $1 | grep -i "Nicolas*" | cut -d "	" -f 1,2 | grep -i "Bomber" | awk '{print $(NF-1)}'
