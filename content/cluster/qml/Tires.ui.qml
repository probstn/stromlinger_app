import QtQuick 2.8
import Data 1.0 as Data

Item {
        id: tire
        y: 415
        width: 400
        height: 186
        clip: true
        scale: 1.004
        Image {
            id: tire_left
            x: 10
            y: 0
            width: 146
            height: 185
            anchors.verticalCenter: parent.verticalCenter
            source: "../assets/tires.webp"
            rotation: Data.Values.tireangle
            anchors.horizontalCenterOffset: -100
            anchors.horizontalCenter: parent.horizontalCenter
            fillMode: Image.PreserveAspectFit

            Rectangle {
                id: rect_left
                x: 171
                y: 18
                width: 3
                height: 150
                color: "#ffffff"
                anchors.horizontalCenter: parent.horizontalCenter
                z: -1
            }
        }

        Image {
            id: tire_right
            x: 210
            y: 0
            width: 146
            height: 185
            anchors.verticalCenter: parent.verticalCenter
            source: "../assets/tires.webp"
            rotation: Data.Values.tireangle
            anchors.horizontalCenterOffset: 100
            anchors.horizontalCenter: parent.horizontalCenter
            fillMode: Image.PreserveAspectFit

            Rectangle {
                id: rect_right
                x: -29
                y: 18
                width: 3
                height: 150
                color: "#ffffff"
                anchors.horizontalCenter: parent.horizontalCenter
                z: -1
            }
        }

        Text {
            id: rotation_number
            x: 246
            y: 65
            visible: true
            color: "#ffffff"
            text: Data.Values.tireangle + "°"
            anchors.verticalCenter: parent.verticalCenter
            font.pixelSize: 40
            horizontalAlignment: Text.AlignHCenter
            anchors.horizontalCenterOffset: 0
            anchors.horizontalCenter: parent.horizontalCenter
            font.family: "AppleSystemUIFont"
        }
    }
