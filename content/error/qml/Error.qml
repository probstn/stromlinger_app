/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 2.15
import QtQuick.Controls 2.15
import stromlinger 1.0

Item {
    id: root
    width: Constants.width
    height: Constants.height

    ListModel {
        id: errorModel
        ListElement { code: "ERR0"; name: "Identification error"; description: "The operation of Identification Angle failed. Please try to do it again according to the instruction of how to use Identification function from our website. It can be downloaded for free." }
        ListElement { code: "ERR1"; name: "Over voltage"; description: "Battery voltage is too high for the controller. Check battery volts and configuration." }
        ListElement { code: "ERR2"; name: "Low voltage"; description: "Check battery volts and configuration. Battery voltage is too low for the controller. Battery voltage is lower than the Under voltage setting. Charge the battery if necessary." }
        ListElement { code: "ERR3"; name: "reserved"; description: "" }
        ListElement { code: "ERR4"; name: "stall"; description: "The motor still can’t provide speed feedback after controller outputs command for 2 seconds. It could be related with the problem of speed sensors or phase wires." }
        ListElement { code: "ERR5"; name: "Internal volts fault"; description: "Measure that B+ & PWR are correct when measured to B- or RTN. There may be excessive load on the +5V supply caused by too low a value of Regen or throttle potentiometers or incorrect wiring. Controller is damaged. Contact Kelly for warranty repairing." }
        ListElement { code: "ERR6"; name: "Over temperature"; description: "The controller temperature has exceeded 100℃. The controller will be stopped but will restart when temperature falls below 80℃." }
        ListElement { code: "ERR7"; name: "Throttle error at power-up"; description: "This error code will be triggered when there is a valid throttle signal above TPS Low setting after Power up. In other words, the initial output of throttle pot or hall throttle is above throttle Effective starting position setting in the user program or Android App. TPS Low is the same as Throttle effective starting position setting. Please try to configure the throttle effective starting position or disable foot switch again in user program or Android App. Throttle signal is higher than the preset ‘dead zone’ at Power On. Fault clears when throttle is released. Please use Kelly’s user program to set up the right pedal type if you use “hall” pedal." }
        ListElement { code: "ERR8"; name: "Reserved"; description: "" }
        ListElement { code: "ERR9"; name: "Internal reset"; description: "May be caused by some transient fault condition like a temporary over-current, momentarily high or low battery voltage. This can happen during normal operation." }
        ListElement { code: "ERR10"; name: "Hall throttle is open or short-circuit"; description: "Please check if the throttle pedal has a short-circuit or open circuit. When the throttle is repaired, a restart will clear the fault." }
        ListElement { code: "ERR11"; name: "Angle sensor error"; description: "Speed sensor type error, customers may set the correct sensor type through user program or App. Please download how to use Identification function instruction from our website. Incorrect wiring. Speed sensor is damaged or defective. Or feedback signal is erratic." }
        ListElement { code: "ERR12"; name: "Reserved"; description: "" }
        ListElement { code: "ERR13"; name: "Reserved"; description: "" }
        ListElement { code: "ERR14"; name: "Motor over-temperature"; description: "Motor temperature has exceeded the configured maximum, the controller will shut down until the motor temperature cools down. Can change motor max temperature through user program." }
        ListElement { code: "ERR15"; name: "Hall Galvanometer sensor error"; description: "Hall galvanometer device is damaged inside the controller. This error code is only valid for KLS-8080I controller." }
    }

    ListView {
        id: listView
        anchors.fill: parent
        anchors.leftMargin: 63
        anchors.rightMargin: 66
        anchors.topMargin: 52
        anchors.bottomMargin: 52
        model: errorModel
        delegate: Item {
            width: Constants.width
            height: 150

            Column {
                spacing: 1
                Text {
                    text: "Code: " + model.code
                    color: "red"
                    font.bold: true
                    font.pointSize: 14
                }
                Text {
                    text: "Name: " + model.name
                    color: "red"
                    font.bold: true
                    font.pointSize: 14
                }
                Text {
                    text: "Description: " + model.description
                    color: "white"
                    wrapMode: Text.WordWrap
                    width: 800
                }
            }
        }
    }
}
