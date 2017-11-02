[![Build Status](https://travis-ci.org/tekezo/Seil.svg?branch=master)](https://travis-ci.org/tekezo/Seil)
[![License](https://img.shields.io/badge/license-Public%20Domain-blue.svg)](https://github.com/tekezo/Seil/blob/master/LICENSE.md)

OBSOLETED
=========

Seil is obsoleted on macOS Sierra (10.12) or later.<br />
Please use [Karabiner-Elements](https://github.com/tekezo/Karabiner-Elements).

# Seil

Seil applies a patch to a keyboard driver.

You can change CapsLock behavior. (For example, changing CapsLock to Delete Key.)
And it can activate International Keys on Non-Apple keyboard.

Prior to version 10.7.0, Seil was called *PCKeyboardHack*.


## Useful links

* Latest build: https://pqrs.org/osx/karabiner/seil.html
* Mirror: http://tekezo.github.io/pqrs.org/

You can also get the latest stable release package via fixed URL.

```
$ curl -L -O https://pqrs.org/latest/seil-latest.dmg
```

## System requirements

OS X 10.11 or higher.

* If you require Seil for macOS 10.12, please use [Karabiner Elements](https://github.com/tekezo/Karabiner-Elements).
* If you require Seil for OS X 10.10 and 10.9, please use Seil 11.3.0.
* If you require Seil for OS X 10.8, please use Seil 10.11.0.
* If you require Seil for OS X 10.7, please use PCKeyboardHack 9.0.0.
* If you require Seil for OS X 10.6, please use PCKeyboardHack 7.4.0.
* If you require Seil for OS X 10.5, please use PCKeyboardHack 5.1.0.


## How to build

System requirements:

* OS X 10.10+
* Xcode 7.0+
* Command Line Tools for Xcode


### Step 1: Getting source code

Download the source to master.tar.gz in the current directory, this can be re-executed to restart a cancelled download.

    curl -OLC - https://github.com/tekezo/seil/archive/master.tar.gz

Extract the master.tar.gz file to "Seil-master" and delete the tar.gz file

    tar -xvzf master.tar.gz && rm master.tar.gz

### Step 2: Building a package

    cd Seil-master
    make

The `make` script will create a redistributable **Seil-VERSION.dmg** in the current directory.


**Note:**
The build may fail if you have changed any environment variables or if you have modified scripts in the `/usr/bin` locations. Use a clean environment (new account) if this is the case.
