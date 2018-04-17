//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCModule.h"

#import "TXIAudioRecordDelegate.h"
#import "TXICameraCapturerDelegate.h"
#import "TXINotifyDelegate.h"
#import "TXIRenderViewDelegate.h"
#import "TXIVideoEncoderDelegate.h"
#import "TXIVideoPreprocessorDelegateEx.h"

@class NSLock, NSMutableArray, NSObject<OS_dispatch_source>, NSString, NSThread, TXCCameraCapturer, TXCRenderView, TXCVideoEncoder, TXCVideoPreprocessorEx, TXReplayKitMixer, TXSNALPacket, UIImage;

@interface TXCCaptureAndEnc : TXCModule <TXIAudioRecordDelegate, TXICameraCapturerDelegate, TXIVideoPreprocessorDelegateEx, TXIVideoEncoderDelegate, TXIRenderViewDelegate, TXINotifyDelegate>
{
    TXCRenderView *_renderView;
    TXReplayKitMixer *_rpMixer;
    NSObject<OS_dispatch_source> *_backgroundTimer;
    _Bool _isPaused;
    unsigned long long _frameIndex;
    unsigned long long _pauseTS;
    NSMutableArray *_sampleBufferArray;
    NSThread *_sampleBufferLoopThread;
    NSLock *_audioBufferLock;
    char *_audioBuffer;
    int _audioBufferOffset;
    _Bool _enableMirror;
    _Bool _enableTouchFocus;
    _Bool _enableMute;
    _Bool _enableAEC;
    _Bool _enableAudioRecord;
    _Bool _enableAudioPreview;
    _Bool _enableAudioHWAcceleration;
    _Bool _enableFrontCamera;
    _Bool _enableFlash;
    _Bool _enableFaceDetect;
    _Bool _autoSampleBufferSize;
    _Bool _enableVideoHWAcceleration;
    _Bool _isPushing;
    _Bool _lockOutput;
    int _reverbType;
    float _filterMixLevel;
    int _videoFPS;
    id <TXICaptureAndEncDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    id <TXICustomPreprocessDelegate> _customPreprocessDelegate;
    long long _homeOrientation;
    long long _rotation;
    long long _audioSampleRate;
    long long _audioChannels;
    long long _beautyStyle;
    long long _beautyLevel;
    long long _whitenessLevel;
    long long _ruddinessLevel;
    long long _noseSlimLevel;
    long long _eyeScaleLevel;
    long long _chinLevel;
    long long _faceVLevel;
    long long _faceScaleLevel;
    long long _faceShortlevel;
    UIImage *_filterImage;
    NSString *_motionTemplate;
    NSString *_greenScreenFile;
    UIImage *_watermark;
    long long _videoResolution;
    long long _videoEncodeGop;
    long long _videoBitrate;
    long long _pauseFPS;
    long long _pauseTime;
    UIImage *_pauseImage;
    TXCCameraCapturer *_cameraCapturer;
    TXCVideoEncoder *_videoEncoder;
    TXSNALPacket *_backgroundNAL;
    TXCVideoPreprocessorEx *_videoPreproccessor;
    struct CGPoint _watermarkPos;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) long long audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) _Bool autoSampleBufferSize; // @synthesize autoSampleBufferSize=_autoSampleBufferSize;
@property(retain) TXSNALPacket *backgroundNAL; // @synthesize backgroundNAL=_backgroundNAL;
@property(nonatomic) long long beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) long long beautyStyle; // @synthesize beautyStyle=_beautyStyle;
@property(retain) TXCCameraCapturer *cameraCapturer; // @synthesize cameraCapturer=_cameraCapturer;
@property(nonatomic) long long chinLevel; // @synthesize chinLevel=_chinLevel;
@property(nonatomic) __weak id <TXICustomPreprocessDelegate> customPreprocessDelegate; // @synthesize customPreprocessDelegate=_customPreprocessDelegate;
- (void)customSampleBufferLoopFun:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <TXICaptureAndEncDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didProcessFrame:(id)arg1;
@property(nonatomic) _Bool enableAEC; // @synthesize enableAEC=_enableAEC;
@property(nonatomic) _Bool enableAudioHWAcceleration; // @synthesize enableAudioHWAcceleration=_enableAudioHWAcceleration;
@property(nonatomic) _Bool enableAudioPreview; // @synthesize enableAudioPreview=_enableAudioPreview;
@property(nonatomic) _Bool enableAudioRecord; // @synthesize enableAudioRecord=_enableAudioRecord;
@property(nonatomic) _Bool enableFaceDetect; // @synthesize enableFaceDetect=_enableFaceDetect;
@property(nonatomic) _Bool enableFlash; // @synthesize enableFlash=_enableFlash;
@property(nonatomic) _Bool enableFrontCamera; // @synthesize enableFrontCamera=_enableFrontCamera;
@property(nonatomic) _Bool enableMirror; // @synthesize enableMirror=_enableMirror;
@property(nonatomic) _Bool enableMute; // @synthesize enableMute=_enableMute;
@property(nonatomic) _Bool enableTouchFocus; // @synthesize enableTouchFocus=_enableTouchFocus;
@property(nonatomic) _Bool enableVideoHWAcceleration; // @synthesize enableVideoHWAcceleration=_enableVideoHWAcceleration;
- (void)encodeFrame:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
@property(nonatomic) long long eyeScaleLevel; // @synthesize eyeScaleLevel=_eyeScaleLevel;
@property(nonatomic) long long faceScaleLevel; // @synthesize faceScaleLevel=_faceScaleLevel;
@property(nonatomic) long long faceShortlevel; // @synthesize faceShortlevel=_faceShortlevel;
@property(nonatomic) long long faceVLevel; // @synthesize faceVLevel=_faceVLevel;
@property(retain, nonatomic) UIImage *filterImage; // @synthesize filterImage=_filterImage;
@property(nonatomic) float filterMixLevel; // @synthesize filterMixLevel=_filterMixLevel;
- (int)getMusicDuration:(id)arg1;
@property(retain, nonatomic) NSString *greenScreenFile; // @synthesize greenScreenFile=_greenScreenFile;
@property(nonatomic) long long homeOrientation; // @synthesize homeOrientation=_homeOrientation;
- (id)init;
@property(readonly, nonatomic) _Bool isPushing; // @synthesize isPushing=_isPushing;
@property _Bool lockOutput; // @synthesize lockOutput=_lockOutput;
- (void)lockOutput:(_Bool)arg1;
@property(retain, nonatomic) NSString *motionTemplate; // @synthesize motionTemplate=_motionTemplate;
@property(nonatomic) long long noseSlimLevel; // @synthesize noseSlimLevel=_noseSlimLevel;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (void)onCameraCaptureFrame:(id)arg1;
- (void)onDetectFacePoints:(id)arg1;
- (void)onEncAudio:(id)arg1;
- (void)onEncNAL:(id)arg1;
- (void)onEncodeNAL:(id)arg1 ErrorCode:(int)arg2;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)onRecordEncData:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)onRecordPcmData:(char *)arg1 dataLen:(unsigned int)arg2 timestamp:(unsigned long long)arg3;
- (void)onRenderViewFocusAtPoint:(struct CGPoint)arg1;
- (void)onTextureDestoryed;
- (void)pause;
- (_Bool)pauseBGM;
- (void)pauseCapture;
@property(nonatomic) long long pauseFPS; // @synthesize pauseFPS=_pauseFPS;
@property(retain, nonatomic) UIImage *pauseImage; // @synthesize pauseImage=_pauseImage;
@property(nonatomic) long long pauseTime; // @synthesize pauseTime=_pauseTime;
- (_Bool)playBGM:(id)arg1;
- (_Bool)playBGM:(id)arg1 withBeginNotify:(CDUnknownBlockType)arg2 withProgressNotify:(CDUnknownBlockType)arg3 andCompleteNotify:(CDUnknownBlockType)arg4;
- (void)restartEncoder;
- (void)resume;
- (_Bool)resumeBGM;
- (void)resumeCapture;
@property(nonatomic) int reverbType; // @synthesize reverbType=_reverbType;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long ruddinessLevel; // @synthesize ruddinessLevel=_ruddinessLevel;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)sendBackgroundNAL;
- (void)sendCustomPCMData:(char *)arg1 len:(unsigned int)arg2;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)setBGMVolume:(float)arg1;
- (void)setCaptureResolution:(long long)arg1;
- (void)setCustomAudioMuted:(_Bool)arg1;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (void)setID:(id)arg1;
- (_Bool)setMicVolume:(float)arg1;
- (void)setRenderView:(id)arg1;
@property(nonatomic) long long videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) long long videoEncodeGop; // @synthesize videoEncodeGop=_videoEncodeGop;
@property(retain) TXCVideoEncoder *videoEncoder; // @synthesize videoEncoder=_videoEncoder;
@property(nonatomic) int videoFPS; // @synthesize videoFPS=_videoFPS;
@property(retain) TXCVideoPreprocessorEx *videoPreproccessor; // @synthesize videoPreproccessor=_videoPreproccessor;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) UIImage *watermark; // @synthesize watermark=_watermark;
@property(nonatomic) struct CGPoint watermarkPos; // @synthesize watermarkPos=_watermarkPos;
@property(nonatomic) long long whitenessLevel; // @synthesize whitenessLevel=_whitenessLevel;
- (void)setZoom:(double)arg1;
- (int)start;
- (void)startBackgroundSend;
- (int)startCameraCapture;
- (int)startCustomCapture;
- (void)startEncoder;
- (void)stop;
- (_Bool)stopBGM;
- (void)stopBackgroundSend;
- (void)stopCameraCapture;
- (void)stopCustomCapture;
- (void)stopEncoder;
@property(readonly, nonatomic) long long videoEncodeRealGop;
- (unsigned int)willAddWatermark:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
