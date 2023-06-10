#!/bin/python3

keyboard_keys = [
  [ "k00", "k01", "k02", "k03", "k04", "k05", "k06", "k07", "k08", "k09", "k0a", "k0b", "k0c", "k0d", "k0e", "k0f", "k0g", "k0h", "k0i", "k0j", "k0k", "k0l" ],
  [ "k10", "k11", "k12", "k13", "k14", "k15", "k16", "k17", "k18", "k19", "k1a", "k1b", "k1c", "k1d", "k1e", "k1f", "k1g", "k1h", "k1i", "k1j", "k1k" ],
  [ "k20", "k21", "k22", "k23", "k24", "k25", "k26", "k27", "k28", "k29", "k2a", "k2b", "k2c", "k2d", "k2f", "k2g", "k2h", "k2i", "k2j", "k2k" ],
  [ "k30", "k31", "k32", "k33", "k34", "k35", "k36", "k37", "k38", "k39", "k3a", "k3b", "k3c", "k3d", "k3e", "k3f" ],
  [ "k40", "k41", "k42", "k43", "k44", "k45", "k46", "k47", "k48", "k49", "k4a", "k4b", "k4c", "k4d", "k4e", "k4f", "k4g", "k4h" ],
  [ "k50", "k51", "k52", "k53", "k54", "k55", "k56", "k57", "k58", "k59", "k5a", "k5b", "k5c", "k5d" ],
]

keyboard_labels = [
  [ "ESC", "F1", "F2", "F3", "F4", "F5", "F6", "F6", "F8", "F9", "F10", "F11", "F12", "Druck", "Entf", "Rollen", "Pause", "NumLk", "Calc", "Menu", "Message", "Lock" ],
  [ "^", "1", "2", "3", "4", "5", "6", "6", "8", "9", "0", "?", "`", "Backspace", "Einfg", "Pos1", "BildUp", "Clear", "/", "*", "-" ],
  [ "Tab", "Q", "W", "E", "R", "T", "Z", "U", "I", "O", "P", "Ü", "+", "Enter", "Entf", "Ende", "BildDown", "7", "8", "9", "+"],
  [ "Caps", "A", "S", "D", "F", "G", "H", "J", "K", "L", "Ö", "Ä", "#", "4", "5", "6" ],
  [ "Shift", "<", "Y", "X", "C", "V", "B", "N", "M", ",", ".", "-", "Shift", "Up", "1", "2", "3", "Enter" ],
  [ "Ctrl", "Fn", "Win", "Alt", "Space", "AltGr", "Win", "Menu", "Ctrl", "Left", "Down", "Right", "0", "," ],
]

matrix = [
  [ "k5d", "k5c", "k41", "k42", "k4b", "k4a", "k49", "k48", "k47", "k1d", "k50", "KNO", "KNO", "k0g", "k1h", "KNO", "k00" ],
  [ "k4g", "k4f", "k4e", "k25", "k2g", "k04", "k3c", "k3b", "k1k", "k5b", "KNO", "k40", "KNO", "k0f", "k14", "k02", "KNO" ],
  [ "k3f", "k3e", "k3d", "k24", "k1g", "k0e", "k1a", "k19", "k18", "k17", "KNO", "KNO", "k53", "k0k", "k01", "k06", "KNO" ],
  [ "k2j", "k2i", "k2h", "k23", "k2f", "k1f", "KNO", "k2c", "k2b", "k2a", "KNO", "KNO", "KNO", "k52", "k05", "k2d", "KNO" ],
  [ "k1j", "k1i", "k0i", "k22", "k0h", "k20", "k29", "k28", "k27", "k26", "k58", "KNO", "KNO", "k0l", "KNO", "k03", "KNO" ],
  [ "k16", "k15", "k4h", "k21", "k0d", "k1e", "k2k", "k1c", "k1b", "k10", "KNO", "k4c", "KNO", "k0j", "k13", "k12", "k11" ],
  [ "k45", "k44", "k43", "k4d", "k0c", "k0b", "k0a", "k09", "k08", "k07", "KNO", "KNO", "k55", "KNO", "k30", "KNO", "k46" ],
  [ "k39", "k38", "k37", "k36", "k54", "k35", "k34", "k33", "k32", "k31", "KNO", "k51", "k57", "k56", "k5a", "k59", "k3a" ],
]

def phyical_location(key: str):
    for y in range(6):
        for x in range(len(keyboard_keys[y])):
            if keyboard_keys[y][x] == key:
                return True, x, y
    return False, 0, 0

for row in range(8):
    for column in range(17):
        key = matrix[row][column];
        match, x, y = phyical_location(key)
        if match:
            label = keyboard_labels[y][x]
            column_str = f"{column}".ljust(2)
            x_str = f"{x}".ljust(2)
            print(f"{{\"matrix\": [{row}, {column_str}], \"x\": {x_str}, \"y\": {y}, \"label\": \"{label}\"}},")
        else:
            if key != "KNO":
                print(f"No match for key: {key}")
    print()
