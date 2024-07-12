import QtQuick
import QtQuick.Controls 6.2
import stromlinger

QtObject {
    id: functions

    function sendLeft() {
        backend.sendLeft();
        console.log("Left");
    }

    function sendRight() {
        backend.sendRight();
        console.log("Right");
    }

    function sendCenter() {
        backend.sendCenter();
        console.log("Center");
    }
}
