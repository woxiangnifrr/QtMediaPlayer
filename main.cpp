#include "qtmediaplayer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtMediaPlayer w;
	w.show();
	w.appOpen();
	return a.exec();
}
