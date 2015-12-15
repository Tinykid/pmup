#include "pmupEnterPage.h"

pmupEnterPage::pmupEnterPage(QWidget *parent)
    : QWidget(parent)
{
}

//! -------------------------------------------------------------------
//!
//! \brief destructeur pmupEnterPage::~pmupEnterPage
//!
pmupEnterPage::~pmupEnterPage(){}

//! -------------------------------------------------------------------
//!
//! \brief pmupEnterPage::setSize
//! \param appWidth
//! \param appHeight
//!
void pmupEnterPage::setSize(int appWidth, int appHeight){
    this->appWidth = appWidth;
    this->appHeight = appHeight;
    this->drawBackground();
}

//! --------------------------------------------------------------------
//!
//! \brief pmupEnterPage::initVariable
//!
void pmupEnterPage::initVariable(){

}

//! --------------------------------------------------------------------
//!
//! \brief pmupEnterPage::constructIHM
//!
void pmupEnterPage::constructIHM(){

}

//! --------------------------------------------------------------------
//!
//! \brief pmupEnterPage::drawBackground
//!
void pmupEnterPage::drawBackground(){
    pixmap = new QPixmap(":/images/background.png");
    QPalette p =  this->palette();

    p.setBrush(QPalette::Background,
               QBrush(pixmap->scaled(QSize(this->appWidth, this->appHeight),
                                     Qt::IgnoreAspectRatio,
                                     Qt::SmoothTransformation)));

    this->setPalette(p);
    this->setMask(pixmap->mask());
}

//! --------------------------------------------------------------------
//!
//! \brief pmupEnterPage::setConnections
//!
void pmupEnterPage::setConnections(){

}
