// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

import QtQuick 6.2
import stromlinger
import "./cluster/qml"
import "./error/qml"
import QtQuick.Controls 6.2

Window {
    width: Constants.width
    height: Constants.height

    visible: true
    title: "stromlinger"

    SwipeView {
        id: swipeView
        x: 0
        y: 0
        width: 1024
        height: 600
        currentIndex: 1

        Error {
        }

        Cluster {
        }
    }


}

