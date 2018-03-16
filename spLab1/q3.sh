#!/bin/bash

unix=('Debian' 'Red Hat' 'Ubuntu' 'Suse' 'Fedora')
echo ${unix[@]}

echo ${#unix}

echo ${#unix[2]}

echo ${unix[*]:3:2}

echo ${unix[*]/Ubuntu/SCO Unix}

unix[7]=AIX
unix[8]=HP-UX
echo ${unix[*]}

unset unix[2]
echo ${unix[*]}

linux=${unix[*]}
echo ${linux[*]}

BASH=(${linux[*]} ${unix[*]})
echo ${BASH[*]}

unset $unix
unset $linix
