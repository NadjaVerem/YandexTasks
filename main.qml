import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    
    function exercise_1_3_3() {
        var n;
        n = 10;
        console.log(n % 10);
    }
}
