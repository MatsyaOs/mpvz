
import QtQuick.Window 2.1
import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.0
import QtQuick.Controls.Private 1.0
import MatsyaUI 1.0 as MatsyaUI
import QtQuick 2.12
import QtQml.Models 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtGraphicalEffects 1.0
import MatsyaUI 1.0 as MatsyaUI
import QtWebEngine 1.0
import QtQuick.Window 2.3
import QtQuick.Shapes 1.12

Window {
    id: control


	property MenuBar menuBar: null
	property Item toolBar
    property Item statusBar
    property alias contentItem : contentArea
    property real __topBottomMargins: contentArea.y + statusBarArea.height
    readonly property real __qwindowsize_max: (1 << 24) - 1
    property real __width: 0
    property alias background: _background

    property alias headerBackground: _headerBackground
    property Item headerItem

    // Window helper
    property alias compositing: windowHelper.compositing
    property var contentTopMargin: _header.height
    property var windowRadius: compositing ? MatsyaUI.Theme.windowRadius : 0
    property alias helper: windowHelper

    // Other
    property bool isMaximized: control.visibility === Window.Maximized
    property bool isFullScreen: control.visibility === Window.FullScreen
    property var edgeSize: windowRadius <= 0 ? 8 : windowRadius / 2
    // Button
    property int isize: 15
    // Resize
    property bool widthResizable: maximumWidth > minimumWidth
    property bool heightResizable: maximumHeight > minimumHeight

    property bool minimizeButtonVisible: true

    onHeaderItemChanged: {
        if (headerItem) {
            headerItem.parent = _headerContent
            headerItem.anchors.fill = _headerContent
        }
    }

    MatsyaUI.WindowHelper {
        id: windowHelper
    }

    // Window shadows
    MatsyaUI.WindowShadow {
        view: control
        radius: _background.radius
        strength: control.active ? 1.5 : 0.9
    }

    // Left bottom edge
    MouseArea {
        height: edgeSize * 2
        width: height
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        cursorShape: Qt.SizeBDiagCursor
        propagateComposedEvents: true
        preventStealing: false
        visible: !isMaximized && !isFullScreen
                              && control.widthResizable
                              && control.heightResizable
        z: 999

        onPressed: mouse.accepted = false

        DragHandler {
            grabPermissions: TapHandler.TakeOverForbidden
            target: null
            onActiveChanged: if (active) {
                                 windowHelper.startSystemResize(control, Qt.LeftEdge | Qt.BottomEdge)
                             }
        }
    }

    // Right bottom edge
    MouseArea {
        height: edgeSize * 2
        width: height
        anchors.bottom: parent.bottom
        anchors.right: parent.right
        cursorShape: Qt.SizeFDiagCursor
        propagateComposedEvents: true
        preventStealing: false
        visible: !isMaximized && !isFullScreen
                              && control.widthResizable
                              && control.heightResizable
        z: 999

        onPressed: mouse.accepted = false

        DragHandler {
            grabPermissions: TapHandler.TakeOverForbidden
            target: null
            onActiveChanged: if (active) { windowHelper.startSystemResize(control, Qt.RightEdge | Qt.BottomEdge) }
        }
    }

    // Top edge
    MouseArea {
        height: edgeSize / 2
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.leftMargin: edgeSize * 2
        anchors.rightMargin: edgeSize * 2
        visible: !isMaximized && !isFullScreen && control.heightResizable
        cursorShape: Qt.SizeVerCursor
        z: 999

        onPressed: mouse.accepted = false

        DragHandler {
            grabPermissions: TapHandler.TakeOverForbidden
            target: null
            onActiveChanged: if (active) { windowHelper.startSystemResize(control, Qt.TopEdge) }
        }
    }

    // Bottom edge
    MouseArea {
        height: edgeSize / 2
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.leftMargin: edgeSize * 2
        anchors.rightMargin: edgeSize * 2
        cursorShape: Qt.SizeVerCursor
        visible: !isMaximized && !isFullScreen && control.heightResizable
        z: 999

        onPressed: mouse.accepted = false

        DragHandler {
            grabPermissions: TapHandler.TakeOverForbidden
            target: null
            onActiveChanged: if (active) { windowHelper.startSystemResize(control, Qt.BottomEdge) }
        }
    }

    // Left edge
    MouseArea {
        width: edgeSize / 2
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.topMargin: edgeSize
        anchors.bottomMargin: edgeSize * 2
        cursorShape: Qt.SizeHorCursor
        visible: !isMaximized && !isFullScreen && control.widthResizable
        z: 999

        onPressed: mouse.accepted = false

        DragHandler {
            grabPermissions: TapHandler.TakeOverForbidden
            target: null
            onActiveChanged: if (active) { windowHelper.startSystemResize(control, Qt.LeftEdge) }
        }
    }

    // Right edge
    MouseArea {
        width: edgeSize / 2
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.leftMargin: edgeSize
        anchors.bottomMargin: edgeSize * 2
        cursorShape: Qt.SizeHorCursor
        visible: !isMaximized && !isFullScreen && control.widthResizable
        z: 999

        onPressed: mouse.accepted = false

        DragHandler {
            grabPermissions: TapHandler.TakeOverForbidden
            target: null
            onActiveChanged: if (active) {
                                 windowHelper.startSystemResize(control, Qt.RightEdge)
                             }
        }
    }


    //windows icons




    // Background
    Rectangle {
        id: _background
        anchors.fill: parent
        anchors.margins: 0
        radius: !isMaximized && !isFullScreen && windowHelper.compositing ? control.windowRadius : 0
        color: "transparent"
        antialiasing: true



        Behavior on color {
            ColorAnimation {
                duration: 200
                easing.type: Easing.Linear
            }
        }
    }

    // Border line
    Rectangle {
        anchors.fill: parent

        property var borderColor: compositing ? MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.3)
                                                                      : Qt.rgba(0, 0, 0, 0.2) : MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.15)
                                                                                                                      : Qt.rgba(0, 0, 0, 0.15)
        color: "transparent"
        radius: control.windowRadius
        border.color: borderColor
        border.width: 1 / Screen.devicePixelRatio
        border.pixelAligned: Screen.devicePixelRatio > 1 ? false : true
        antialiasing: true
        visible: !isMaximized && !isFullScreen
        z: 999
    }






	Binding {
        target: control
		property: "__width"
        when: control.minimumWidth <= control.maximumWidth
        value: Math.max(Math.min(control.maximumWidth, contentArea.implicitWidth), control.minimumWidth)
	}
	/*! \internal */
	property real __height: 0
	Binding {
        target: control
		property: "__height"
        when: control.minimumHeight <= control.maximumHeight
        value: Math.max(Math.min(control.maximumHeight, contentArea.implicitHeight), control.minimumHeight)
	}
	width: contentArea.__noImplicitWidthGiven ? 0 : __width
	height: contentArea.__noImplicitHeightGiven ? 0 : __height

	minimumWidth: contentArea.__noMinimumWidthGiven ? 0 : contentArea.minimumWidth
	minimumHeight: contentArea.__noMinimumHeightGiven ? 0 : (contentArea.minimumHeight + __topBottomMargins)

	maximumWidth: Math.min(__qwindowsize_max, contentArea.maximumWidth)
	maximumHeight: Math.min(__qwindowsize_max, contentArea.maximumHeight + __topBottomMargins)
	onToolBarChanged: { if (toolBar) { toolBar.parent = toolBarArea } }

	onStatusBarChanged: { if (statusBar) { statusBar.parent = statusBarArea } }

    onVisibleChanged: { if (visible && menuBar) { menuBar.__parentWindow = control } }

	/*! \internal */
    default property alias data: contentArea.data

    color: "transparent"

	flags: Qt.Window | Qt.WindowFullscreenButtonHint |
		Qt.WindowTitleHint | Qt.WindowSystemMenuHint | Qt.WindowMinMaxButtonsHint |
		Qt.WindowCloseButtonHint | Qt.WindowFullscreenButtonHint
	// QTBUG-35049: Windows is removing features we didn't ask for, even though Qt::CustomizeWindowHint is not set
	// Otherwise Qt.Window | Qt.WindowFullscreenButtonHint would be enough



    // Content
        Item {
            id: _contentItem
            anchors.fill: parent

            // Header
            Item {
                id: _header
                z: 2
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                height: 10

                property int buttonSize: 31
                property int spacing: (_header.height - _header.buttonSize) / 2

                Rectangle {
                    id: _headerBackground
                    anchors.fill: parent
                    color: "transparent"
                }

                TapHandler {
                    enabled: !control.isFullScreen
                    onTapped: if (tapCount === 2) toggleMaximized()
                    gesturePolicy: TapHandler.DragThreshold
                }

                DragHandler {
                    target: null
                    acceptedDevices: PointerDevice.GenericPointer
                    grabPermissions: PointerHandler.CanTakeOverFromItems | PointerHandler.CanTakeOverFromHandlersOfDifferentType | PointerHandler.ApprovesTakeOverByAnything
                    onActiveChanged: if (active) { windowHelper.startSystemMove(control) }
                }


            }

            // Content item.
            ColumnLayout {
                id: _contentLayout
                anchors.fill: parent
                //anchors.topMargin: control.contentTopMargin
                spacing: 0
                Item {
                    id: backgroundItem
                    anchors.fill: parent

                    Keys.forwardTo: menuBar ? [menuBar.__contentItem] : []

                    ContentItem {
                        id: contentArea
                        anchors.top: toolBarArea.bottom
                        anchors.left: parent.left
                        anchors.right: parent.right
                        anchors.bottom: statusBarArea.top
                    }

                    Item {
                        id: toolBarArea
                        anchors.top: parent.top
                        anchors.left: parent.left
                        anchors.right: parent.right
                        implicitHeight: childrenRect.height
                        height: visibleChildren.length > 0 ? implicitHeight: 0
                    }

                    Item {
                        id: statusBarArea
                        anchors.bottom: parent.bottom
                        anchors.left: parent.left
                        anchors.right: parent.right
                        implicitHeight: childrenRect.height
                        height: visibleChildren.length > 0 ? implicitHeight: 0
                    }

                    onVisibleChanged: if (visible && menuBar) menuBar.__parentWindow = control

                    states: [
                        State {
                            name: "hasMenuBar"
                            when: menuBar && !menuBar.__isNative && menuBarVisible

                            ParentChange {
                                target: menuBar.__contentItem
                                parent: backgroundItem
                            }

                            PropertyChanges {
                                target: menuBar.__contentItem
                                x: 0
                                y: 0
                                width: backgroundItem.width
                            }

                            AnchorChanges {
                                target: toolBarArea
                                anchors.top: menuBar.__contentItem.bottom
                            }
                        },
                        State {
                            name: "noMenuBar"
                            when: menuBar && !menuBar.__isNative && !menuBarVisible

                            ParentChange {
                                target: menuBar.__contentItem
                                parent: null
                            }

                            PropertyChanges {
                                target: menuBar.__contentItem
                                x: 0
                                y: 0
                                width: 0
                                height: 0
                            }

                            AnchorChanges {
                                target: toolBarArea
                                anchors.top: control.top
                            }
                        }
                    ]
                }

            }

            // Mask
           layer.enabled: _background.radius > 0
           layer.effect: OpacityMask {
               maskSource: Item {
                   width: _contentItem.width
                   height: _contentItem.height

                   Rectangle {
                       anchors.fill: parent
                       radius: _background.radius
                   }
               }
           }
        }
    QtObject {
        id: internal
        property QtObject passiveNotification
    }

    function showPassiveNotification(message, timeout, actionText, callBack) {
        if (!internal.passiveNotification) {
            var component = Qt.createComponent("qrc:/matsyaui/kit/Toast.qml")
            internal.passiveNotification = component.createObject(control)
        }

        internal.passiveNotification.showNotification(message, timeout, actionText, callBack)
    }

    function toggleMaximized() {
        if (isMaximized) {
            control.showNormal();
        } else {
            control.showMaximized();
        }
    }





	property bool menuBarVisible: menuBar || false
}
