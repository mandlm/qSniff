#pragma once

#include <QThread>
#include <QString>

class SniffThread : public QThread
{
	Q_OBJECT

protected:
	void run() override;

signals:
	void dataReceived(QString data);
};

