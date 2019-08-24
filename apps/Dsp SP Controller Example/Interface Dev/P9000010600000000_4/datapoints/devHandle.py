# Copyright (C) 2013-2019 Echelon Corporation.  All Rights Reserved.
# Use of this code is subject to your compliance with the terms of the
# Echelon IzoT(tm) Software Developer's Kit License Agreement which is
# available at www.echelon.com/license/izot_sdk/.

# IzoT resources contained in this file are generated by an automated
# database to source code conversion process.  Grammar and punctuation within
# the embedded documentation may not be correct, as this data is gathered and
# combined from several sources.
# Names of resources and fields or members defined within a resource are
# derived from the same sources.  Names, capitalization and aspects of source
# code formatting may fail to comply with PEP-8 and PEP-257 recommendations
# due to the automated generation of these IzoT definitions.
# Generated at 17-Aug-2019 06:56.

"""devHandle userdefined datapoint type, originally defined in resource file
set apollodev 90:00:01:06:00:00:00:00-4.  """


import izot.resources.base
from P9000010600000000_4.userdefined import userdefined


class devHandle(izot.resources.base.Structure):
    """devHandle userdefined datapoint type.  ."""

    def __init__(self):
        super().__init__(
            key=2,
            scope=4
        )

        self.__index = izot.resources.base.Scaled(
            size=1,
            signed=False,
            minimum=0,
            maximum=255
        )
        self._register(('index', self.__index))

        self.__devHandle = izot.resources.base.Array(
            [
                izot.resources.base.Scaled(
                    size=1,
                    signed=False,
                    minimum=0,
                    maximum=255
                ) for i in range(30)
            ]
        )
        self._register(('devHandle', self.__devHandle))
        self._original_name = 'UNVTdevHandle'
        self._definition = userdefined.add(self)


    def __set_index(self, v):
        self.__index._value = v

    index = property(
        lambda self: self.__index._value,
        __set_index,
        None,
        """."""
    )

    def __set_devHandle(self, v):
        self.__devHandle._value = v

    # member renamed to 'devHandle_' to avoid shadowing of the class name.
    devHandle_ = property(
        lambda self: self.__devHandle._value,
        __set_devHandle,
        None,
        """."""
    )

    def __len__(self):
        """Return the length of the type, in bytes."""
        return 31


if __name__ == '__main__':
    # unit test code.
    item = devHandle()
    pass
