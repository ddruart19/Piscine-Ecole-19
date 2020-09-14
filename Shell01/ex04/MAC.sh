ifconfig -a link | grep "ether" | grep -v "ethernet" | cut -c8-24

