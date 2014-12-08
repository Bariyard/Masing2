#include "audiofilemanager.h"

AudioFileManager::AudioFileManager(AudioDeviceBase *pAudioDeviceBase)
{
    m_pAudioDeviceBase = pAudioDeviceBase;
}


void AudioFileManager::reset()
{

}

void AudioFileManager::process(const void *inputBuffer, void *outputBuffer,
             const unsigned long framesPerBuffer)
{
    if(!m_AudioFileList.isEmpty())
    {
        //process each test module in the list
        foreach( AudioFile *pAudioFile, m_AudioFileList )
        {
            pAudioFile->process(inputBuffer,outputBuffer,framesPerBuffer);
        }
    }
}

void AudioFileManager::eneble()
{
    m_bIsModuleEnable = true;
}

void AudioFileManager::disable()
{
    m_bIsModuleEnable = false;
}

bool AudioFileManager::isEnabled()
{
    return m_bIsModuleEnable;
}

void AudioFileManager::RegisterAudioFile(AudioFile * pAudioFile)
{
    m_AudioFileList.push_back(pAudioFile);
}
