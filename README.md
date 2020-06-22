install ns-3


sudo apt-get update

apt install build-essential autoconf automake libxmu-dev python-pygraphviz cvs mercurial bzr git cmake p7zip-full python-matplotlib python-tk python-dev python-kiwi python-gnome2 qt4-dev-tools qt4-qmake qt4-qmake qt4-default gnuplot-x11 wireshark

apt-get install gcc g++ python python-dev mercurial bzr gdb valgrind gsl-bin libgsl0-dev flex bison tcpdump sqlite sqlite3 libsqlite3-dev libxml2 libxml2-dev libgtk2.0-0 libgtk2.0-dev uncrustify doxygen graphviz imagemagick texlive texlive-latex-extra texlive-generic-extra texlive-generic-recommended texinfo dia texlive texlive-latex-extra texlive-extra-utils texlive-generic-recommended texi2html python-pygraphviz python-kiwi python-pygccxml

git clone https://github.com/nsnam/ns-3-dev-git ns-3

for the original lorawan module and big thanks to DAVID 
https://github.com/signetlabdei/lorawan/tree/develop



Compilation

If you are interested in only compiling the lorawan module and its dependencies, copy the .ns3rc file from ns-3/utils to ns-3, where ns-3 is your ns-3 installation folder, and only enable the desired module by making sure the file contains the following line:

modules_enabled = ['lorawan']

To compile, move to the ns-3 folder, configure and then build ns-3:

./waf configure --enable-tests --enable-examples
./waf build

Finally, make sure tests run smoothly with:

./test.py -s lorawan

Usage examples

Examples can be run via the ./waf --run example-name command.

random seed can be changed using :
To change your realization, you should use:
- run: SeedManager::SetRun (run);
- seed: SeedManager::SetSeed (seed); 

Authors

houssem eddin elbsir

mohamed kassab

link to simulation results :


https://docs.google.com/spreadsheets/d/1v8bkO1XfjZCwmLv11SNqr_4NMI9ZxCMM07WK0AHyXDU/edit?usp=sharing 


License

This software is licensed under the terms of the GNU GPLv2 (the same license that is used by ns-3). See the LICENSE.md file for more details.


Acknowledgments and relevant publications
under work 
some beugs -> 

network server not complete

need some adjustment 


this brache is under major review , if any problem will be solved shortly !!


if u run into an erreur please mention it and thank you


contact me on houssem.bsir.gt@gmail.com

