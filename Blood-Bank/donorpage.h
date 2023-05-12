#ifndef DONORPAGE_H
#define DONORPAGE_H

#include <QMainWindow>

namespace Ui {
class DonorPage;
}

class DonorPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit DonorPage(QWidget *parent = nullptr);
    ~DonorPage();

private slots:
    void closeEvent(QCloseEvent *event);

private:
    Ui::DonorPage *ui;
};

#endif // DONORPAGE_H
