/* 
 * File:   NotificationPanel.h
 * Author: HOME
 *
 * Created on 21 avril 2014, 17:30
 */

#ifndef _NOTIFICATIONPANEL_H
#define	_NOTIFICATIONPANEL_H

#include "ui_NotificationPanel.h"

#include <QtGui/QWidget>
#include <QtGui/QVBoxLayout>

class NotificationPanel : public QWidget {
    Q_OBJECT
    
public:
    NotificationPanel(QWidget* parent = 0, Qt::WindowFlags f = 0);
    virtual ~NotificationPanel();
    
    void addNotification(QWidget* notification);
    
private:
    Ui::NotificationPanel widget;    
    QVBoxLayout* m_Layout;
};

#endif	/* _NOTIFICATIONPANEL_H */
