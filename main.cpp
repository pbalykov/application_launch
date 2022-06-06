#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[]) {
    QApplication draw(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "execKod_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            draw.installTranslator(&translator);
            break;
        }
    }
    MainWindow root;
    root.setFixedHeight(88);
    root.setWindowTitle("Запуск");
    root.setWindowIcon(QIcon (":/img/icon.png") );
    root.show();
    return draw.exec();
}
