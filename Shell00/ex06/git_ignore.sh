#!/bin/bash
git status --ignored  -s -uall | cut -c4- | cut -d '/' -f2- 
