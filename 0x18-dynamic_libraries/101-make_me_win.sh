#!bin/bash
wget -P .. https://raw.githubusercontent.com/irenejohncross/alx-low_level_programming/commit/e0c9a1044bd6560cdf269d1aa01ba7d1092892fa
export LD_PRELOAD="$PWD/ ../libfunction.so"
