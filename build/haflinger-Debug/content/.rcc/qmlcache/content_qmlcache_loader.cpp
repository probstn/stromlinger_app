#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _qt_qml_content_App_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_content_Background_ui_0x2e_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_content_cluster_qml_Cluster_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_content_cluster_qml_CustomDot_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_content_cluster_qml_FuelDial_ui_0x2e_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_content_cluster_qml_RpmDial_ui_0x2e_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_content_cluster_qml_SpeedDial_ui_0x2e_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_content_cluster_qml_Tires_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_content_error_qml_Error_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/content/App.qml"), &QmlCacheGeneratedCode::_qt_qml_content_App_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/content/Background.ui.qml"), &QmlCacheGeneratedCode::_qt_qml_content_Background_ui_0x2e_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/content/cluster/qml/Cluster.qml"), &QmlCacheGeneratedCode::_qt_qml_content_cluster_qml_Cluster_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/content/cluster/qml/CustomDot.qml"), &QmlCacheGeneratedCode::_qt_qml_content_cluster_qml_CustomDot_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/content/cluster/qml/FuelDial.ui.qml"), &QmlCacheGeneratedCode::_qt_qml_content_cluster_qml_FuelDial_ui_0x2e_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/content/cluster/qml/RpmDial.ui.qml"), &QmlCacheGeneratedCode::_qt_qml_content_cluster_qml_RpmDial_ui_0x2e_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/content/cluster/qml/SpeedDial.ui.qml"), &QmlCacheGeneratedCode::_qt_qml_content_cluster_qml_SpeedDial_ui_0x2e_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/content/cluster/qml/Tires.qml"), &QmlCacheGeneratedCode::_qt_qml_content_cluster_qml_Tires_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/content/error/qml/Error.qml"), &QmlCacheGeneratedCode::_qt_qml_content_error_qml_Error_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_content)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_content))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_content)() {
    return 1;
}
