

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDELaunchSession, IDELocation, IDELocationScenario, IDESimulateLocationService, NSOperationQueue, NSString, NSTimer;

@interface IDELocationSimulator : NSObject <DVTInvalidation>
{
    IDELaunchSession *_launchSession;
    IDESimulateLocationService *_service;
    int _state;
    IDELocationScenario *_scenario;
    DVTObservingToken *_debugSessionStateObserver;
    BOOL _playingBack;
    NSTimer *_playbackTimer;
    unsigned long long _currentPlaybackIndex;
    IDELocation *_currentPlaybackLocation;
    double _lastUpdateTime;
    NSOperationQueue *_playbackQueue;
}

+ (void)initialize;
+ (id)locationSimulatorLogAspect;
@property(retain) IDESimulateLocationService *service; // @synthesize service=_service;
@property(retain, nonatomic) IDELocationScenario *scenario; // @synthesize scenario=_scenario;
@property(readonly) int state; // @synthesize state=_state;
@property(readonly) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
- (void)_playbackTimerFired:(id)arg1;
- (void)_startOrResumePlayback;
- (void)_pausePlayback;
- (void)_stopPlayback;
- (void)_debugSessionStateChanged;
- (void)_setState:(int)arg1;
- (void)_updateScenarioSimulation;
- (int)_locationSimulatorStateForDebugSessionState:(int)arg1;
- (void)_updateLocationScenario;
- (void)_updateService;
- (id)_simulateLocationCapability;
- (void)stopSimulating;
- (void)primitiveInvalidate;
- (id)initWithLaunchSession:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

