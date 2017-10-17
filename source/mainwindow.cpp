#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sniffthread.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, ui->listWidget, &QListWidget::clear);

	SniffThread *sniffThread = new SniffThread();
	connect(sniffThread, &SniffThread::dataReceived, this, &MainWindow::dataReceived);
	sniffThread->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dataReceived(QString data)
{
	ui->listWidget->addItem(data);
}
