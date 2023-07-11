# BSQ

<strong>map_generator:</strong> random map generator<br />
&emsp;to run, type <strong>./map_generator [col] [row] [density]</strong>

<strong>dependencies:</strong> shows functions' callers

<strong>BSQ.pdf:</strong> algorithm flow at a glance

<strong>Makefile:</strong> makes bsq executable from srcs & includes<br />
&emsp;type <strong>make</strong><br />
&emsp;to run, type <strong>./bsq [good/bad]_maps/[mapfile]</strong><br />
&emsp;Note: mutiple maps can be loaded. Also can read from stdin via <strong><</strong>
		
<strong>srcs:</strong> source directory

<strong>includes:</strong> include directory

<strong>good_maps:</strong> some good maps

<strong>bad_maps:</strong> some bad maps

<strong>eval_others.sh:</strong> run other's BSQ and compare with our expected results<br />
&emsp;copy the other's BSQ to current folder and name it as <strong>your_bsq</strong><br />
&emsp;our current executable should be named <strong>bsq</strong> in the current folder<br />
&emsp;type <strong>./eval_others.sh</strong><br />
&emsp;Note: traces are in files <strong>ours / yours</strong>
