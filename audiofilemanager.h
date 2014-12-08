#ifndef AUDIOFILEMANAGER_H
#define AUDIOFILEMANAGER_H

#include "audiodevicebase.h"
#include "audiomodule.h"
#include "audiofile.h"

class AudioFileManager : public AudioModule
{
public:
    AudioFileManager(AudioDeviceBase *pAudioDeviceBase);

    //process data one buffer at a time
    virtual void reset();
    virtual void process(const void *inputBuffer, void *outputBuffer,
                         const unsigned long framesPerBuffer);
    virtual void eneble();
    virtual void disable();
    virtual bool isEnabled();

    void RegisterAudioFile(AudioFile * pAudioFile);

private:
    AudioDeviceBase     *m_pAudioDeviceBase;
    bool                m_bIsModuleEnable;
    QList<AudioFile*>   m_AudioFileList;
};

#endif // AUDIOFILEMANAGER_H
