#ifndef YOUTUBE_H
#define YOUTUBE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class youtube;
}
QT_END_NAMESPACE

class youtube : public QMainWindow
{
    Q_OBJECT

public:
    youtube(QWidget *parent = nullptr);
    ~youtube();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::youtube *ui;
};
#endif // YOUTUBE_H
