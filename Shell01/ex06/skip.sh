#!/bin/sh
ls -l | awk 'FNR % 2 == 0'
ls -l | sed -n 'p;n'