#!/bin/bash
rm -f ours yours
find ./bad_maps -type f -exec ./bsq {} \; > ours
find ./good_maps -type f -exec ./bsq {} \; >> ours
find ./bad_maps -type f -exec ./your_bsq {} \; > yours
find ./good_maps -type f -exec ./your_bsq {} \; >> yours
diff -U 3 ours yours
