/* 
 * File:   FBPEditor.h
 * Author: acailly
 *
 * Created on 24 février 2014, 17:48
 */

#ifndef _FBPEDITOR_H
#define	_FBPEDITOR_H

#include <QtGui/QMainWindow>

#include <QtCore/QMap>

class FBPEditorBlock;

namespace Ui {
    class FBPEditor;
}

class QGraphicsScene;

class FBPEditor : public QMainWindow {
    Q_OBJECT
    
public:
    FBPEditor(QWidget* parent = 0, Qt::WindowFlags windowFlag = 0);
    virtual ~FBPEditor();
    
    QGraphicsScene* getScene();
    
private:
    void initialize();
    
    Ui::FBPEditor* ui;
    QGraphicsScene* m_GraphicsScene;
};

#endif	/* _FBPEDITOR_H */
