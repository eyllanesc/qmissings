.. highlight:: shell

============
Installation
============

Qt must be installed first, for this you must find out which version of Qt PyQt5 or PySide2 uses:

.. code-block:: console

    $ python -c "from PyQt5 import QtCore; print(QtCore.qVersion())"
    $ python -c "from PySide2 import QtCore; print(QtCore.qVersion())"

Then you can install Qt of that version, and for this you can use aqtinstall_:

.. code-block:: console

    $ python -m pip install aqtinstall
    $ python -m aqtinstall 5.15.0 linux desktop --outputdir qt
    $ export Qt5_DIR="${PWD}/qt"


The sources for qmissings can be downloaded from the `Github repo`_.

You can either clone the public repository:

.. code-block:: console

    $ git clone git://github.com/eyllanesc/qmissings

Or download the `tarball`_:

.. code-block:: console

    $ curl -OJL https://github.com/eyllanesc/qmissings/tarball/master

Once you have a copy of the source, you can install it with:

.. code-block:: console

    $ python setup.py install


.. _Github repo: https://github.com/eyllanesc/qmissings
.. _tarball: https://github.com/eyllanesc/qmissings/tarball/master
.. _aqtinstall: https://github.com/miurahr/aqtinstall