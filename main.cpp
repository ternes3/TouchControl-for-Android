#include "touchcontrol.h"
#include <QApplication>
#include <string>
#include <boost/filesystem.hpp>

using namespace std;
int main( int argc, char* argv[])
{
    QApplication a(argc, argv);
    qApp->setWindowIcon(QIcon(":/img/phone.png"));
    //Check for Files
    if ( !boost::filesystem::exists( "tools/droidAtScreen.jar" ) || !boost::filesystem::exists( "tools/adb" ) )
	{
        //create folder
        boost::filesystem::path dir("tools");
        boost::filesystem::create_directory(dir);

        //write missing files
        QFile::copy(":/tools/droidAtScreen.jar", "tools/droidAtScreen.jar");
        QFile::copy(":/tools/adb", "tools/adb");

        //start
        touchcontrol w;
        w.show();
        return a.exec();
	}
    else
    {
        //all right -> start
        touchcontrol w;
        w.show();
        exit(a.exec());
    }
}
