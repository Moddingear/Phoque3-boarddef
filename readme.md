# Phoque3 Board definitions

Usage in Platformio:

- Clone this repository into a folder within your PlatforIO project (for example `custom_arduino_variant`)
    - `mkdir custom_arduino_variant; git clone https://github.com/Moddingear/Phoque3-boarddef custom_arduino_variant/PHOQUE3`
- Move PHOQUE3.json to a folder named `boards`, or make a symbolic link to it (as below)
    - `mkdir boards; cd boards; ln -rs ../custom_arduino_variant/PHOQUE3/PHOQUE3.json`
- Add `board_build.variants_dir = custom_arduino_variant` to platformio.ini
- That's it
