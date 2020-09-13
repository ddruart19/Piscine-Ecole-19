#!/bin/bash
git status --ignored -s | cut -c4- | cut -d '/' -f2- 
