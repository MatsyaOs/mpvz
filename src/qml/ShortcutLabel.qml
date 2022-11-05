import QtQuick 2.0
import QtQuick.Layouts 1.0
import MatsyaUI 1.0 as MatsyaUI
Rectangle {
	id: shortcutLabel
	Layout.alignment: Qt.AlignHCenter

	implicitWidth: Math.max(implicitHeight, padding + label.implicitWidth + padding)
	implicitHeight: padding + label.implicitHeight + padding

	property int padding: 2
	property alias text: label.text
	color: "#CCC"
	radius: 4

	Text {
		id: label
		anchors.centerIn: parent
		color: "#111"
		font.pixelSize: 14
        font.family: MatsyaUI.Theme.defaultFont
		font.weight: Font.Bold
	}
}
