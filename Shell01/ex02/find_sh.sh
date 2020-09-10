find . -type f -name '*.sh' | cut -d '/' -f2- | exec rev | cut -d '.' -f2- | exec rev
