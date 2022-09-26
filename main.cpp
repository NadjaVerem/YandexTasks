#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "Task_1_3.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    Task_1_3 task_1_3;
//    task_1_3.exercise_1_3_3();
//    task_1_3.exercise_1_3_4();
//    task_1_3.exercise_1_3_5();
//    task_1_3.exercise_1_3_6();
    task_1_3.exercise_1_3_7();


//    QQmlApplicationEngine engine;
//    const QUrl url(QStringLiteral("qrc:/main.qml"));
//    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
//                     &app, [url](QObject *obj, const QUrl &objUrl) {
//        if (!obj && url == objUrl)
//            QCoreApplication::exit(-1);
//    }, Qt::QueuedConnection);
//    engine.load(url);

    return app.exec();
}
