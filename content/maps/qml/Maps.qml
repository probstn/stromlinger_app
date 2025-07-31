import QtQuick 2.15
import QtLocation
import QtPositioning
import stromlinger

Item {
    width: Constants.width
    height: Constants.height
    /*
    Map {
        id: map
        anchors.fill: parent
        plugin: Plugin {
            name: "osm" // OpenStreetMap plugin
        }
        center: QtPositioning.coordinate(37.7749, -122.4194) // Center on San Francisco
        zoomLevel: 12

        MapQuickItem {
            anchorPoint.x: markerImage.width / 2
            anchorPoint.y: markerImage.height
            coordinate: QtPositioning.coordinate(37.7749, -122.4194)
            sourceItem: Image {
                id: markerImage
                source: "marker.png"
            }
        }
    }
    */
}
