
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
        // Example error entries
        ListElement {
            name: "Over Voltage"
            colorCode: "red"
        }
        ListElement {
            name: "Under Voltage"
            colorCode: "orange"
        }
    }
}
