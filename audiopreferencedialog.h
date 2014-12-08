#ifndef AUDIOPREFERENCEDIALOG_H
#define AUDIOPREFERENCEDIALOG_H

#include "audiodevicebase.h"
#include <QDialog>
#include <QPointer>

namespace Ui {
    class AudioPreferenceDialog;
}

class AudioPreferenceDialog : public QDialog
{
    Q_OBJECT

public:
    AudioPreferenceDialog(QWidget *parent = 0, AudioDeviceBase* pAudioDeviceBase = NULL);
    virtual ~AudioPreferenceDialog();

signals:

public slots:
    //void StartAudioTest(bool bStartTest);
    void UpdateInputDevice(int nSelectedItem);
    void UpdateOutputDevice(int nSelectedItem);
    void UpdateSamplingRate(int nSelectedItem);
    void UpdateBufferSize(int nSelectedItem);

private:
    Ui::AudioPreferenceDialog   *ui;
    QString                     m_strWindowTitle;
    AudioDeviceBase             *m_pAudioDeviceBase;
    bool                        m_bIsTesting;


    void RetriveInformation();
    void Connect();
};

#endif // AUDIOPREFERENCEDIALOG_H
