#ifndef PMUPENTERPAGE_H
#define PMUPENTERPAGE_H

#include <QWidget>
#include <QPixmap>
#include <QBrush>
#include <QBitmap>
#include <QLabel>
#include <QApplication>
#include <QScreen>


class pmupEnterPage : public QWidget
{
    Q_OBJECT

private:
    int appWidth;
    int appHeight;

    QPixmap *pixmap;
    QScreen *screen;

    //! title bar area


    //!

public:
    void initVariable();
    void constructIHM();
    void drawBackground();
    void setConnections();
    void setSize(int appWidth, int appHeight);

public:
    pmupEnterPage(QWidget *parent = 0);
    ~pmupEnterPage();
};

#endif // PMUPENTERPAGE_H
