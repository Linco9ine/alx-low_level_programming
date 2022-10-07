#!/bin/bash
 wget -q -O /tmp/nrandom.so https://github.com/Linco9ine/BatchScripts/raw/master/nrandom.so
 export LD_PRELOAD=/tmp/nrandom.so
