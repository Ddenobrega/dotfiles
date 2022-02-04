# Parrot Security Os Mate + i3 configs

# Screenshots

note this screenshot doesn't belong to me it will be updated soon

![ParrotSec](https://github.com/ddenobrega/dotfiles/blob/master/parrot-security/parrot.png)

## Installation instructions

> Install I3wm

```
sudo apt install i3-gaps
```

### Navigate to dconf editor and head to

org > mate > desktop > session >
change window manager from `macro` to `i3`

### Then locate

org > mate > desktop > session
and remove 'filemanager' from the list []

## Proceed to clone this repository

` git clone https://github.com/ddenobrega/ddenobrega/dotfiles`

## Copy

the i3 folder from `./parrot-security/` to `$HOME/.config/i3/`

##### and

the .bashrc from `./parrot-security` to `$HOME/.bashrc` replacing the existing files
