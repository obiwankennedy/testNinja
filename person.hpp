
#include <QObject>
#include <QString>

class Person : public QObject
{
    Q_OBJECT
   public:
        Person();


   private:
        QString m_name;
};
