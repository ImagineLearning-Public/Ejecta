//
//  EJBindingRecordingManager.h
//  Ejecta
//
//  Created by Jon Bell on 9/27/12.
//
//
//#import <UIKit/UIKit.h> needed?
#import <AVFoundation/AVFoundation.h>
#import "EJBindingEventedBase.h"

@interface EJBindingRecordingManager : EJBindingEventedBase
    <AVAudioRecorderDelegate, AVAudioPlayerDelegate>
{
    AVAudioRecorder *audioRecorder;
    AVAudioPlayer *audioPlayer;
    int recordEncoding;
    enum
    {
        ENC_AAC = 1,
        ENC_ALAC = 2,
        ENC_IMA4 = 3,
        ENC_ILBC = 4,
        ENC_ULAW = 5,
        ENC_PCM = 6,
    } encodingTypes;
}

-(void) startRecording;
-(void) stopRecording;
-(void) playRecording;

@end
