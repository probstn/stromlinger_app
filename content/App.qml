// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

import QtQuick 6.2
import stromlinger
import "./cluster/qml"
import "./error/qml"
import QtQuick.Controls 6.2
import QtQuick.Layouts

Window {
    width: Constants.width
    height: Constants.height

    visible: true
    title: "stromlinger"

    Background {
        id: background
        x: 0
        y: 0
        width: 1024
        height: 600
    }

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

    MouseArea {
        id: error_infobox
        x: 14
        y: 0
        width: 329
        height: 100
        onClicked: {
            swipeView.setCurrentIndex(0)
        }

        Image {
            id: error
            x: 8
            y: 8
            width: 68
            height: 68
            anchors.verticalCenter: parent.verticalCenter
            source: "error.webp"
            anchors.verticalCenterOffset: 0
            fillMode: Image.PreserveAspectFit
        }

        Text {
            id: error_text
            x: 79
            y: 19
            color: "#c82121"
            text: qsTr("ERROR")
            anchors.verticalCenter: parent.verticalCenter
            font.pixelSize: 40
            anchors.horizontalCenter: parent.horizontalCenter
            font.bold: true
        }
    }

    Text {
            id: time
            x: 874
            y: 8
            color: "#ffffff"
            text: getTime()
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.rightMargin: 8
            anchors.topMargin: 8
            font.pixelSize: 40
            padding: 20
        }

        Timer {
            interval: 1000 // 1 second
            running: true
            repeat: true
            onTriggered: {
                time.text = getTime()
            }
        }

        // JS function to get system time
        function getTime() {
            var date = new Date()
            var hours = date.getHours()
            var minutes = date.getMinutes()
            var seconds = date.getSeconds()
            return (hours < 10 ? '0' + hours : hours) + ':' +
                   (minutes < 10 ? '0' + minutes : minutes)
        }


}

