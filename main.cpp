#include "pmupEnterPage.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include <QThread>
#include <QDesktopWidget>
#include <QRect>
#include <QPainter>


/**
 * @brief main ：
 * @param argc ：
 * @param argv ：
 * @return
 */
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    //! ----------------------------------------------------------------------
    //! get the screen size
    //! ----------------------------------------------------------------------
    QDesktopWidget* desktop = QApplication::desktop();
    const QRect desktopRect = desktop->screenGeometry();
    int appWidth = desktopRect.width();
    int appHeight = desktopRect.height();

    //! ----------------------------------------------------------------------
    //! generate image resources and fit it with screen size
    //! ----------------------------------------------------------------------
    QPixmap splashSourcePixmap(":/images/loadingPage.png");
    QPixmap splashPixmap = splashSourcePixmap.scaled(appWidth, appHeight);
    QSplashScreen splash(splashPixmap);
    splash.showFullScreen();

    //! ----------------------------------------------------------------------
    //! simulate task to request informations from server side
    //! ----------------------------------------------------------------------
    QThread::sleep(5);

    //! ----------------------------------------------------------------------
    //! main page
    //! ----------------------------------------------------------------------
    pmupEnterPage* enterPage = new pmupEnterPage();
    enterPage->setSize(appWidth, appHeight);
    enterPage->show();

    //! ----------------------------------------------------------------------
    //! finish splash page and turn into enter page
    //! ----------------------------------------------------------------------
    splash.finish(enterPage);

    return a.exec();
}
