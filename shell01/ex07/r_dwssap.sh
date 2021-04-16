#!/bin/sh
cat /etc/passwd | sed "s/#.*//g" | cut -d ":" -f1 | sed '1~2d' | rev | sort -r | awk 'NR >= '$FT_LINE1' && NR <= '$FT_LINE2'' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'