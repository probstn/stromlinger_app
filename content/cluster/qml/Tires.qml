import QtQuick 2.8
import Data 1.0 as Data
import QtQuick.Controls 6.2
import stromlinger
import QtQuick.Studio.Components

Item {
    id: tire
    y: 415
    width: 400
    height: 186
    clip: true
    scale: 1.004






    Rectangle {
        id: rect_left
        x: 299
        y: 18
        width: 3
        height: 160
        color: "#ffffff"
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 0
        anchors.horizontalCenterOffset: -142
        anchors.horizontalCenter: parent.horizontalCenter
        z: 0
    }

    Image {
        id: tire_left
        x: 10
        y: 0
        width: 170
        height: 170
        anchors.verticalCenter: parent.verticalCenter
        source: "../assets/tires.webp"
        anchors.verticalCenterOffset: 0
        rotation: Data.Values.tireangle
        anchors.horizontalCenterOffset: -142
        anchors.horizontalCenter: parent.horizontalCenter
        fillMode: Image.PreserveAspectFit
    }


    Rectangle {
        id: rect_right
        x: 99
        y: 18
        width: 3
        height: 160
        color: "#ffffff"
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 0
        anchors.horizontalCenterOffset: 143
        anchors.horizontalCenter: parent.horizontalCenter
        z: 0
    }


    Image {
        id: tire_right
        x: 210
        y: 0
        width: 170
        height: 170
        anchors.verticalCenter: parent.verticalCenter
        source: "../assets/tires.webp"
        anchors.verticalCenterOffset: 0
        rotation: Data.Values.tireangle
        anchors.horizontalCenterOffset: 142
        anchors.horizontalCenter: parent.horizontalCenter
        fillMode: Image.PreserveAspectFit
    }

    Text {
        id: rotation_number
        visible: true
        color: "#ffffff"
        text: Data.Values.tireangle + "°"
        anchors.verticalCenter: parent.verticalCenter
        font.pixelSize: 30
        horizontalAlignment: Text.AlignHCenter
        anchors.verticalCenterOffset: 1
        anchors.horizontalCenterOffset: 0
        anchors.horizontalCenter: parent.horizontalCenter
        font.family: "AppleSystemUIFont"
    }
}
