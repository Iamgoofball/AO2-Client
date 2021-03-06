#ifndef AOSCENE_H
#define AOSCENE_H

#include <QLabel>
#include <QDebug>

class Courtroom;
class AOApplication;

class AOScene : public QLabel
{
  Q_OBJECT
public:
  explicit AOScene(QWidget *parent, AOApplication *p_ao_app);

  void set_image(QString p_image);
  void set_legacy_desk(QString p_image);

private:
  QWidget *m_parent;
  AOApplication *ao_app;

};

#endif // AOSCENE_H
