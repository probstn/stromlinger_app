

/****************************************************************************
**
** Copyright (C) 2019 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Design Studio.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/
import QtQuick 2.8
import QtQuick.Timeline 1.0
import QtQuick.Studio.Components 1.0
import QtQuick.Studio.Effects 1.0
import QtQuick.Controls
import Data 1.0 as Data
import stromlinger

Item {
    id: cluster_Art
    width: 1024
    height: 600

    FuelDial {
        id: fuelDial
        x: 635
        y: 129
        width: 512
        height: 630
        visible: true
        scale: 0.5
        rangeText: Data.Values.rangeText
        voltageText: Data.Values.voltageText
        voltageDial: Data.Values.voltageDial
    }

    RpmDial {
        id: rpmDial
        width: 508
        height: 591
        scale: 0.5
        x: -86
        y: 148
        rpmText: Data.Values.rpmText
        rpmDial: Data.Values.rpmDial
    }

    FlipableItem {
        id: flipable
        x: 123
        y: -150
        width: 778
        height: 730
        scale: 0.6

        SpeedDial {
            x: 91
            y: 91
            speedText: Data.Values.speedText
            speedDial: Data.Values.speedDial
            consumptionText: Data.Values.consumptionText
        }

        Image {
            id: image
            x: -111
            y: -135
            source: "../assets/carLogo.svg"
        }
    }

    Timeline {
        id: bootTImeline
        animations: [
            TimelineAnimation {
                id: timelineAnimation
                property: "currentFrame"
                duration: 5000
                running: false
                loops: 1
                to: 5000
                from: 0
            }
        ]
        startFrame: 0
        endFrame: 5000
        enabled: true

        KeyframeGroup {
            target: flipable
            property: "flipAngle"
            Keyframe {
                value: 180
                frame: 0
            }

            Keyframe {
                value: 180
                frame: 2386
            }

            Keyframe {
                easing.bezierCurve: [0.90, 0.03, 0.69, 0.22, 1, 1]
                value: 1.1
                frame: 4117
            }
        }

        KeyframeGroup {
            target: flipable
            property: "opacity"
            Keyframe {
                value: 0
                frame: 0
            }

            Keyframe {
                easing.bezierCurve: [0.17, 0.84, 0.44, 1.00, 1, 1]
                value: 1
                frame: 1015
            }
        }

        KeyframeGroup {
            target: rpmDial
            property: "opacity"

            Keyframe {
                value: 0
                frame: 0
            }

            Keyframe {
                value: 0
                frame: 2386
            }

            Keyframe {
                easing.bezierCurve: [0.95, 0.05, 0.80, 0.04, 1, 1]
                value: 1
                frame: 3293
            }
        }

        KeyframeGroup {
            target: rpmDial
            property: "scale"
            Keyframe {
                value: 0.01
                frame: 0
            }

            Keyframe {
                value: 0.01
                frame: 2386
            }

            Keyframe {
                easing.bezierCurve: [0.95, 0.05, 0.80, 0.04, 1, 1]
                value: 0.5
                frame: 3293
            }
        }

        KeyframeGroup {
            target: fuelDial
            property: "opacity"
            Keyframe {
                frame: 0
                value: 0
            }

            Keyframe {
                frame: 2386
                value: 0
            }

            Keyframe {
                frame: 3293
                value: 1
                easing.bezierCurve: [0.95, 0.05, 0.80, 0.04, 1, 1]
            }
        }

        KeyframeGroup {
            target: fuelDial
            property: "scale"
            Keyframe {
                frame: 0
                value: 0.01
            }

            Keyframe {
                frame: 2386
                value: 0.01
            }

            Keyframe {
                value: 0.5
                frame: 3293
            }
        }

        KeyframeGroup {
            target: tire
            property: "scale"
            Keyframe {
                value: 0.01
                frame: 0
            }

            Keyframe {
                value: 0.01
                frame: 2386
            }

            Keyframe {
                value: 1.0038
                frame: 3293
            }
        }
    }

    Tires {
        id: tire
        width: 400
        anchors.horizontalCenter: parent.horizontalCenter
    }

    Control {
        id: control
        x: 168
        y: 78
    }

    Button {
        id: light
        x: 121
        y: 189
        text: qsTr("Light")
        onClicked: {
            light.highlighted = !light.highlighted
            if(light.highlighted) {
                backend.sendRight()
            } else {
                backend.sendCenter()
            }
        }
    }

    states: [
        State {
            name: "bootState"
            when: Data.Values.booting

            PropertyChanges {
                target: bootTImeline
                enabled: true
            }

            PropertyChanges {
                target: timelineAnimation
                running: true
            }
        },
        State {
            name: "running"
            when: !Data.Values.booting

            PropertyChanges {
                target: bootTImeline
                currentFrame: 5000
                enabled: true
            }


        }
    ]
}
