# Help

Use `cpm i <package>` to install `<package>`.

## Bundles

A _bundle_ is an installer that initiates other installers.

Available bundles are:
- `pdk`: The PMax Development Kit, which includes `pmax`, `bbasm`, `bbvm` and `pmax-stdlib`

## Executables

An _executable_ is a program that is runnable from the terminal. The file itself is placed in `/opt/cpm`, but it is symlinked from `usr/local/bin`.

Available executables are:
- `pmax`: The PMax compiler
- `bbasm`: The PMax assembler
- `bbvm`: The breadboard virtual machine (used for running PMax code).

## Libraries

A _library_ is a file that isn't itself executable, but callable/usable for other programs. Libraries are placed in `/opt/cpm/libraries`.

Available libraries are:
- `pmax-stdlib`: The standard library for PMax (running on `bbvm`).
