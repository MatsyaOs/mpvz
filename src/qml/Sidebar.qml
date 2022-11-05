import QtQuick 2.0
import QtQuick.Controls 1.0
import QtQuick.Layouts 1.0
import MatsyaUI 1.0 as MatsyaUI

MouseArea {
	id: sidebar
	hoverEnabled: true

	property bool open: false

	Rectangle {
        anchors.fill: parent
        color: MatsyaUI.Theme.backgroundColor
        radius: MatsyaUI.Units.largeSpacing

	}

	PlaylistView {
		id: playlistView
		anchors.fill: parent
	}

     /*ChapterList {
        id: chapterList
        anchors.fill: parent
     }*/

	function close() {
		sidebar.open = false
	}

	function togglePlaylist() {
		if (sidebar.open && true) {
			sidebar.close()
		} else {
			sidebar.open = true
		}
	}
}
