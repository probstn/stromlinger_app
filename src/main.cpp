#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QCursor>
#include <QScreen>
#include <QQuickView>
#include "backend.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    //Override global cursor to blank cursor
    app.setOverrideCursor(QCursor(Qt::BlankCursor));

    QQmlApplicationEngine engine;

    // Create and set the backend object
    Backend backend;

    // Expose the backend object to QML
    engine.rootContext()->setContextProperty("backend", &backend);

    const QUrl url(u"qrc:/qt/qml/Main/main.qml"_qs);
    QObject::connect(
        &engine, &QQmlApplicationEngine::objectCreated, &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);

    engine.load(url);

    if (engine.rootObjects().isEmpty())
        return -1;

    // Get the root object (QQuickWindow)
    QObject *rootObject = engine.rootObjects().first();
    QQuickWindow *window = qobject_cast<QQuickWindow *>(rootObject);

    if (window) {
        // Set full-screen mode
        window->showFullScreen();
    }

    return app.exec();
}
