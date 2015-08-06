GH60 keyboard firmware
======================
DIY minimal ergonomic split keyboard designed by shaymdev with many influences from geekhack and deskthority communities
  <a href="https://geekhack.org/index.php?topic=71614.0">build log</a>


## Build
Move to this directory then just run `make` like:

    $ make

Use `make -f Makefile.pjrc` if you want to use PJRC stack but I find no reason to do so now.


## Keymap

I'll try to keep an updated keymap on keyboard-layout-editor.com but recent changes make me not sure how to do best permalink it here. Sorry.

In order to only use 10 wires to bridge the gap between my keyboard halves (limitation of the usb c port that I bought while still maintaining a flipable connection) I had to implement a 5x5 matrix in the wiring of the physical layout. This caused the keymap to be rather unintuitive. 

Looking at the left hand, essentially the central most 5 keys (tab, enter, 'x' 'i' 'y' on my dvorak layer) have been placed as their own row on the top of the keyboard in that order from left to right.  The rest of that first row (continued on the right hand keyboard) is 'f' 'd' 'b' in that order (only three on the right hand because of the space taken by the pointing stick). I think I wired up the left and right hands a bit different in regards to which column they start in. Hope you can figure it out! Sorry.

TODO: add ascii representation of layouts like the one in gh60


