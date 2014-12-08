#ifndef AUDIOFILE_H
#define AUDIOFILE_H

#include <QObject>
#include "audiodevicebase.h"

class AudioFile : public AudioModule
{
    Q_OBJECT
public:
    AudioFile();
    AudioFile(QString strFileName);
    virtual ~AudioFile();

    //process data one buffer at a time
    virtual void reset();
    virtual void process(const void *inputBuffer, void *outputBuffer,
                         const unsigned long framesPerBuffer);
    virtual void eneble();
    virtual void disable();
    virtual bool isEnabled();

    void Open(char* pFilename);
    void Play();
    void Pause();
    void Close();

    void isPlaying();

private:
    bool                m_bIsModuleEnable;
    bool                m_bIsPlaying;
    QString             m_strFileName;

    float               *m_pAudioData;
    unsigned long       m_nNumFrame;
    float               *m_pStartFrame;
    float               *m_pEndFrame;
    unsigned long       m_nCurrentFrame;
    bool                m_bEndOfFile;
};

#endif // AUDIOFILE_H
