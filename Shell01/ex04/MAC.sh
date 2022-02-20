#!/bin/sh
ifconfig | grep ether | sed 's/ether//' | tr -s ' '
ifconfig -a | grep "ether" | sed "s/ether//" | sed "s/^ *//"
