

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

Item {
    id: fuel_dial_195_43
    width: 450
    height: 550
    visible: true
    clip: false
    property alias ampText: amp_text.text
    property alias voltageText: voltage_text.text
    property alias ampDial: ampTimeline.currentFrame

    Item {
        id: item2
        x: 8
        y: 32
        width: 200
        height: 200

        Image {
            id: fuel_dial_195_43Asset
            x: 7
            y: 101
            source: "../assets/fuel_dial_195_43.png"
        }

        Item {
            id: kilometers_left_195_192
            x: 71
            y: 250
            Text {
                id: voltage_text
                x: -42
                y: -5
                width: 210
                height: 56
                color: "#FFFFFF"
                text: "80"
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 41
                font.family: "Cherry"
            }

            Text {
                id: kilometers_195_12
                x: 39
                y: 47
                color: "#FFFFFF"
                text: "VOLT"
                font.weight: Font.ExtraLight
                font.pixelSize: 19
                font.family: "IBM Plex Mono"
            }
        }

        Item {
            id: liters_left_195_194
            x: 96
            y: 144
            Text {
                id: amp_text
                x: -66
                y: 24
                width: 208
                height: 56
                color: "#FFFFFF"
                text: "100"
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 41
                font.family: "Cherry"
            }

            Text {
                id: liters_195_13
                x: 3
                y: -5
                width: 69
                height: 25
                color: "#FFFFFF"
                text: "AMP"
                font.weight: Font.ExtraLight
                font.pixelSize: 19
                horizontalAlignment: Text.AlignHCenter
                font.family: "IBM Plex Mono"
            }
        }

        Item {
            id: fuel_dots_195_190
            x: 62
            y: 31

            CustomDot {
                id: fuel_dot_1
                x: 169
                y: -8
            }

            CustomDot {
                id: fuel_dot_2
                x: 218
                y: 25
            }

            CustomDot {
                id: fuel_dot_3
                x: 255
                y: 77
            }

            CustomDot {
                id: fuel_dot_4
                x: 277
                y: 133
            }

            CustomDot {
                id: fuel_dot_5
                x: 286
                y: 190
            }

            CustomDot {
                id: fuel_dot_6
                x: 277
                y: 250
            }

            CustomDot {
                id: fuel_dot_7
                x: 251
                y: 304
            }

            CustomDot {
                id: fuel_dot_8
                x: 214
                y: 351
            }

            CustomDot {
                id: fuel_dot_9
                x: 166
                y: 385
            }

            CustomDot {
                id: fuel_dot_10
                x: 109
                y: 405
            }

            CustomDot {
                id: fuel_dot_11
                x: 48
                y: 410
            }

            CustomDot {
                id: fuel_dot_12
                x: -11
                y: 399
            }
        }

        Item {
            id: fuel_numbers_195_42
            x: 44
            y: 0
            Text {
                id: item_195_30
                x: -10
                y: 459
                color: "#FFFFFF"
                text: "0"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }

            Text {
                id: item_195_31
                x: 51
                y: 474
                color: "#FFFFFF"
                text: "50"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }

            Text {
                id: item_195_32
                x: 123
                y: 472
                color: "#FFFFFF"
                text: "100"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }

            Text {
                id: item_195_33
                x: 197
                y: 457
                color: "#FFFFFF"
                text: "150"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }

            Text {
                id: item_195_34
                x: 259
                y: 418
                color: "#FFFFFF"
                text: "200"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }

            Text {
                id: item_195_35
                x: 311
                y: 353
                color: "#FFFFFF"
                text: "250"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }

            Text {
                id: item_195_36
                x: 339
                y: 278
                color: "#FFFFFF"
                text: "300"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }

            Text {
                id: item_195_37
                x: 346
                y: 207
                color: "#FFFFFF"
                text: "350"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }

            Text {
                id: item_195_38
                x: 340
                y: 137
                color: "#FFFFFF"
                text: "400"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }

            Text {
                id: item_195_39
                x: 320
                y: 69
                color: "#FFFFFF"
                text: "450"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }

            Text {
                id: item_195_40
                x: 267
                y: 3
                color: "#FFFFFF"
                text: "500"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }

            Text {
                id: item_195_41
                x: 198
                y: -31
                color: "#FFFFFF"
                text: "550"
                font.weight: Font.Thin
                font.pixelSize: 29
                font.family: "Exo 2"
            }
        }

        Image {
            id: arc_background_track_195_6
            x: 57
            y: 36
            source: "../assets/arc_background_track_195_6.png"
        }

        ArcItem {
            id: arc
            x: -80
            y: 16
            width: 412
            height: 412
            rotation: -90
            fillColor: "#00ffffff"
            end: 288.4
            begin: 273.2
            strokeWidth: 40
        }

        Item {
            id: item1
            x: 32
            y: 125
            width: 200
            height: 200

            Image {
                id: fuel_needle_195_27
                x: 121
                y: 227
                source: "../assets/fuel_needle_195_27.png"
            }
        }
        PieItem {
            id: pie
            x: -1
            y: 93
            width: 264
            height: 264
            fillColor: "#00ffffff"
            strokeWidth: 4.5
            end: 360
        }

        Image {
            id: outside_white_arch_195_28
            x: 50
            y: 13
            width: 313
            height: 447
            source: "../assets/outside_white_arch_195_28.png"
        }
    }

    Timeline {
        id: ampTimeline
        animations: [
            TimelineAnimation {
                id: timelineAnimation
                property: "currentFrame"
                loops: 1
                duration: 1000
                from: 0
                to: 1000
                running: false
            }
        ]
        enabled: true
        startFrame: 0
        endFrame: 1100

        KeyframeGroup {
            target: item1
            property: "rotation"

            Keyframe {
                frame: 0
                value: 32.5
            }

            Keyframe {
                frame: 1100
                value: -141.3
            }
        }

        KeyframeGroup {
            target: arc
            property: "begin"

            Keyframe {
                frame: 0
                value: 288.4
            }

            Keyframe {
                frame: 1100
                value: 118.8
            }

            Keyframe {
                frame: 100
                value: 273.2
            }

            Keyframe {
                frame: 500
                value: 211.68
            }

            Keyframe {
                frame: 600
                value: 196.42
            }

            Keyframe {
                frame: 700
                value: 181.12
            }

            Keyframe {
                frame: 800
                value: 165.76
            }

            Keyframe {
                frame: 900
                value: 150.34
            }

            Keyframe {
                frame: 1000
                value: 134.82
            }
        }

        KeyframeGroup {
            target: arc
            property: "strokeColor"

            Keyframe {
                frame: 0
                value: "#e24141"
            }

            Keyframe {
                frame: 299
                value: "#e24141"
            }

            Keyframe {
                frame: 300
                value: "#df8c49"
            }

            Keyframe {
                frame: 599
                value: "#df8c49"
            }

            Keyframe {
                frame: 600
                value: "#3eee6b"
            }

            Keyframe {
                frame: 1100
                value: "#3eee6b"
            }
        }

        KeyframeGroup {
            target: pie
            property: "strokeColor"

            Keyframe {
                frame: 0
                value: "#e24141"
            }

            Keyframe {
                frame: 299
                value: "#e24141"
            }

            Keyframe {
                frame: 300
                value: "#df8c49"
            }

            Keyframe {
                frame: 599
                value: "#df8c49"
            }

            Keyframe {
                frame: 600
                value: "#3eee6b"
            }

            Keyframe {
                frame: 1100
                value: "#3eee6b"
            }
        }

        KeyframeGroup {
            target: item_195_30
            property: "scale"

            Keyframe {
                frame: 0
                value: 1.2
            }

            Keyframe {
                frame: 10
                value: 1.2
            }

            Keyframe {
                frame: 20
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_30
            property: "color"

            Keyframe {
                frame: 0
                value: "#e24141"
            }

            Keyframe {
                frame: 10
                value: "#e24141"
            }

            Keyframe {
                frame: 20
                value: "#ffffff"
            }
        }

        KeyframeGroup {
            target: item_195_31
            property: "scale"

            Keyframe {
                frame: 95
                value: 1.2
            }

            Keyframe {
                frame: 105
                value: 1.2
            }

            Keyframe {
                frame: 115
                value: 1
            }

            Keyframe {
                frame: 85
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_31
            property: "color"
            Keyframe {
                frame: 85
                value: "#ffffff"
            }

            Keyframe {
                frame: 95
                value: "#e24141"
            }

            Keyframe {
                frame: 105
                value: "#e24141"
            }

            Keyframe {
                frame: 115
                value: "#ffffff"
            }
        }

        KeyframeGroup {
            target: item_195_32
            property: "scale"
            Keyframe {
                frame: 195
                value: 1.2
            }

            Keyframe {
                frame: 205
                value: 1.2
            }

            Keyframe {
                frame: 215
                value: 1
            }

            Keyframe {
                frame: 185
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_32
            property: "color"
            Keyframe {
                frame: 185
                value: "#ffffff"
            }

            Keyframe {
                frame: 195
                value: "#e24141"
            }

            Keyframe {
                frame: 205
                value: "#e24141"
            }

            Keyframe {
                frame: 215
                value: "#ffffff"
            }
        }

        KeyframeGroup {
            target: item_195_33
            property: "scale"
            Keyframe {
                frame: 295
                value: 1.2
            }

            Keyframe {
                frame: 305
                value: 1.2
            }

            Keyframe {
                frame: 315
                value: 1
            }

            Keyframe {
                frame: 285
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_33
            property: "color"
            Keyframe {
                frame: 285
                value: "#ffffff"
            }

            Keyframe {
                frame: 295
                value: "#df8c49"
            }

            Keyframe {
                frame: 305
                value: "#df8c49"
            }

            Keyframe {
                frame: 315
                value: "#ffffff"
            }
        }

        KeyframeGroup {
            target: item_195_34
            property: "scale"
            Keyframe {
                frame: 396
                value: 1.2
            }

            Keyframe {
                frame: 406
                value: 1.2
            }

            Keyframe {
                frame: 416
                value: 1
            }

            Keyframe {
                frame: 386
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_34
            property: "color"
            Keyframe {
                frame: 386
                value: "#ffffff"
            }

            Keyframe {
                frame: 396
                value: "#df8c49"
            }

            Keyframe {
                frame: 406
                value: "#df8c49"
            }

            Keyframe {
                frame: 416
                value: "#ffffff"
            }
        }

        KeyframeGroup {
            target: item_195_35
            property: "scale"
            Keyframe {
                frame: 495
                value: 1.2
            }

            Keyframe {
                frame: 505
                value: 1.2
            }

            Keyframe {
                frame: 515
                value: 1
            }

            Keyframe {
                frame: 485
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_35
            property: "color"
            Keyframe {
                frame: 485
                value: "#ffffff"
            }

            Keyframe {
                frame: 495
                value: "#df8c49"
            }

            Keyframe {
                frame: 505
                value: "#df8c49"
            }

            Keyframe {
                frame: 515
                value: "#ffffff"
            }
        }

        KeyframeGroup {
            target: item_195_36
            property: "scale"
            Keyframe {
                frame: 596
                value: 1.2
            }

            Keyframe {
                frame: 606
                value: 1.2
            }

            Keyframe {
                frame: 616
                value: 1
            }

            Keyframe {
                frame: 586
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_36
            property: "color"
            Keyframe {
                frame: 586
                value: "#ffffff"
            }

            Keyframe {
                frame: 596
                value: "#3eee6b"
            }

            Keyframe {
                frame: 606
                value: "#3eee6b"
            }

            Keyframe {
                frame: 616
                value: "#ffffff"
            }
        }

        KeyframeGroup {
            target: item_195_37
            property: "scale"
            Keyframe {
                frame: 697
                value: 1.2
            }

            Keyframe {
                frame: 707
                value: 1.2
            }

            Keyframe {
                frame: 717
                value: 1
            }

            Keyframe {
                frame: 687
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_37
            property: "color"
            Keyframe {
                frame: 687
                value: "#ffffff"
            }

            Keyframe {
                frame: 697
                value: "#3eee6b"
            }

            Keyframe {
                frame: 707
                value: "#3eee6b"
            }

            Keyframe {
                frame: 717
                value: "#ffffff"
            }
        }

        KeyframeGroup {
            target: item_195_38
            property: "scale"
            Keyframe {
                frame: 795
                value: 1.2
            }

            Keyframe {
                frame: 805
                value: 1.2
            }

            Keyframe {
                frame: 815
                value: 1
            }

            Keyframe {
                frame: 785
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_38
            property: "color"
            Keyframe {
                frame: 785
                value: "#ffffff"
            }

            Keyframe {
                frame: 795
                value: "#3eee6b"
            }

            Keyframe {
                frame: 805
                value: "#3eee6b"
            }

            Keyframe {
                frame: 815
                value: "#ffffff"
            }
        }

        KeyframeGroup {
            target: item_195_39
            property: "scale"
            Keyframe {
                frame: 896
                value: 1.2
            }

            Keyframe {
                frame: 906
                value: 1.2
            }

            Keyframe {
                frame: 916
                value: 1
            }

            Keyframe {
                frame: 886
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_39
            property: "color"
            Keyframe {
                frame: 886
                value: "#ffffff"
            }

            Keyframe {
                frame: 896
                value: "#3eee6b"
            }

            Keyframe {
                frame: 906
                value: "#3eee6b"
            }

            Keyframe {
                frame: 916
                value: "#ffffff"
            }
        }

        KeyframeGroup {
            target: item_195_40
            property: "scale"
            Keyframe {
                frame: 995
                value: 1.2
            }

            Keyframe {
                frame: 1005
                value: 1.2
            }

            Keyframe {
                frame: 1015
                value: 1
            }

            Keyframe {
                frame: 985
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_40
            property: "color"
            Keyframe {
                frame: 985
                value: "#ffffff"
            }

            Keyframe {
                frame: 995
                value: "#3eee6b"
            }

            Keyframe {
                frame: 1005
                value: "#3eee6b"
            }

            Keyframe {
                frame: 1015
                value: "#ffffff"
            }
        }

        KeyframeGroup {
            target: item_195_41
            property: "scale"

            Keyframe {
                frame: 1100
                value: 1.2
            }

            Keyframe {
                frame: 1090
                value: 1.198
            }

            Keyframe {
                frame: 1080
                value: 1
            }
        }

        KeyframeGroup {
            target: item_195_41
            property: "color"
            Keyframe {
                frame: 1080
                value: "#ffffff"
            }

            Keyframe {
                frame: 1090
                value: "#3eee6b"
            }

            Keyframe {
                frame: 1100
                value: "#3eee6b"
            }
        }
    }
}
