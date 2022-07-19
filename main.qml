import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.1
import QtQuick.Dialogs 1.0

ApplicationWindow
{
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    FileDialog
    {
        id: fileDialog
        title: "Please choose a file"
        nameFilters: ["All files (*.txt)"]
        onAccepted:
        {
            Qt.quit()
        }
        onRejected:
        {
            Qt.quit()
        }
    }

    Row
    {
        Button
        {
            id: send
            text: 'Send'

            onClicked: {
                fileDialog.open();
            }

            background: Rectangle
            {
                color: send.down ? "#ff8000" : "#2E64FE"
                border.color: "#ff8000"
                radius: 8
            }
        }

        Button
        {
            id: download
            text: 'Download'
        }

    }
}
