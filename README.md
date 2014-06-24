# Pixlutter

The jolly file viewer for pictures by Clutter.

## Requirements

* [Clutter](https://wiki.gnome.org/Projects/Clutter)

### Install (Debian, Ubuntu)

    % sudo apt-get install libclutter-1.0-dev

## Usage

### Configure

    % ./autogen.sh
    % ./configure

### Build

    % make

### Run (not install)

    % ./src/pixlutter FILE

### Install

`/usr/local` will be used as the default.

    % sudo make install

### Run (installed)

    % export LD_LIBRARY_PATH=/usr/local/lib  # optional
    % pixlutter FILE

### Run test

Require [Cutter](http://cutter.sourceforge.net/).

    % test/run-test.sh

## License

Copyright (c) 2014 Pixlutter Project

GPLv2 or later.

See 'LICENSE.txt' or 'http://www.gnu.org/licenses/gpl-2.0' for details.

## Authors

* Masafumi Yokoyama `<myokoym@gmail.com>`

## Contributing

1. Fork it
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -am 'Add some feature'`)
4. Push to the branch (`git push origin my-new-feature`)
5. Create new Pull Request
