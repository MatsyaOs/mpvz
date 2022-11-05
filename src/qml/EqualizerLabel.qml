import QtQuick 2.0
import QtQuick.Layouts 1.0
import MatsyaUI 1.0 as MatsyaUI
Text {
    color: MatsyaUI.Theme.darkMode ? "white" : "black"
	style: Text.Outline
    styleColor: "#444"
    font.pixelSize: MatsyaUI.Theme.fontSize
    font.family: MatsyaUI.Theme.defaultFont
	font.weight: Font.Bold
	Layout.alignment: Qt.AlignRight
}
