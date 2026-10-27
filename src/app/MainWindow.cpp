#include "MainWindow.h"

#include <QApplication>
#include <QVBoxLayout>
#include <QPushButton>
#include <QStyle>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
  setWindowTitle(tr("Secure Send"));
  resize(1280,720);

  auto *layout  = new QVBoxLayout(this);
  auto *quitBtn = new QPushButton(tr("Quitter l'application"));

  layout->addWidget(new QPushButton(tr("Envoyer un Message")));
  layout->addWidget(new QPushButton(tr("Ajouter un Ami")));
  layout->addWidget(quitBtn);
  layout->addStretch();

  connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}
