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

pragma Singleton
import QtQuick
import stromlinger

QtObject {
    id: values

    property string rpmText: backend.rpmText
    property real rpmDial: backend.rpmDial
    property string speedText: backend.speedText
    property real speedDial: backend.speedDial
    property string consumptionText: backend.consumptionText
    property string voltageText: backend.voltageText
    property real ampDial: backend.ampDial
    property string ampText: backend.ampText
    property bool motorTemp: backend.motorTemp
    property bool escTemp: backend.escTemp
    property int tireAngle: backend.tireAngle
    property int errorCode: backend.errorCode

    property bool booting: true
    readonly property real bootDuration: 5000

    property Timer bootTimer: Timer{
        running: true
        repeat: false
        onTriggered: values.booting = false
        interval: bootDuration
    }
    /*
    property Timer rpmTimer: Timer {
        running: !values.booting
        repeat: true
        onTriggered: backend.updateRpm();
        interval: 1000
    }

    property Timer litersTimer: Timer{
        running: !values.booting
        repeat: true
        onTriggered: backend.updateFuel();
        interval: 1000
    }

    property Timer miscTimer: Timer{
        running: !values.booting
        repeat: true
        onTriggered: backend.updateMisc();
        interval: 1000
    }
    */
}
