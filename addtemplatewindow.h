#ifndef ADDTEMPLATEWINDOW_H
#define ADDTEMPLATEWINDOW_H

#include <QWidget>
#include <QLineEdit>
#include <QComboBox>
#include <QVBoxLayout>

class AddTemplateWindow : public QWidget
{
    Q_OBJECT
public:
    explicit AddTemplateWindow(QWidget *parent = nullptr);
    void addParameter();

private:
    QVector<QLineEdit*> nameLineEditList;
    QVector<QLineEdit*> valueLineEditList;
    QVector<QComboBox*> typeComboboxList;

    QVBoxLayout* nameLineEditLayout;
    QVBoxLayout* valueLineEditLayout;
    QVBoxLayout* typeComboboxLayout;
signals:

};

#endif // ADDTEMPLATEWINDOW_H
