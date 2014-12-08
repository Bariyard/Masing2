#ifndef AUDIOMODULE_H
#define AUDIOMODULE_H

#include <QObject>

class AudioModule : public QObject
{
    Q_OBJECT
public:
    AudioModule();
    virtual ~AudioModule();

    //process data one buffer at a time
    virtual void reset() = 0;
    virtual void process(const void *inputBuffer, void *outputBuffer,
                         const unsigned long framesPerBuffer) = 0;
    virtual void eneble() = 0;
    virtual void disable() = 0;
    virtual bool isEnabled() = 0;
signals:

public slots:

};

#endif // AUDIOMODULE_H
