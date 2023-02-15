import QtQuick
import qmllibs.demolib

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    CustomElement {
        counter: 10
    }

}
