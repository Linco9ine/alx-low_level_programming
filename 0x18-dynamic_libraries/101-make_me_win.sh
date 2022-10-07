#!/bin/bash
 wget -P /tmp/nrandom.so https://github.com/Linco9ine/raw/master/nrandom.so
 export LD_PRELOAD=/tmp/nrandom.so
