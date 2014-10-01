

#import <Foundation/Foundation.h>

@class DVTFilePath, IDELaunchSession, NSArray, NSError, NSMutableArray, NSString;

@interface IDEExecutionTracker : NSObject
{
    NSString *_statusDisplayName;
    DVTFilePath *_statusImageFilePath;
    IDELaunchSession *_launchSession;
    NSMutableArray *_subtrackers;
    BOOL _isFinished;
    int _serviceTier;
    int _cancellationReason;
    NSError *_error;
    NSString *_debugName;
}

+ (void)initialize;
@property(copy) NSString *debugName; // @synthesize debugName=_debugName;
@property int cancellationReason; // @synthesize cancellationReason=_cancellationReason;
@property(retain) NSError *error; // @synthesize error=_error;
@property int serviceTier; // @synthesize serviceTier=_serviceTier;
@property(retain) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain) DVTFilePath *statusImageFilePath; // @synthesize statusImageFilePath=_statusImageFilePath;
@property(retain) NSString *statusDisplayName; // @synthesize statusDisplayName=_statusDisplayName;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
- (NSString *)description;
- (void)setStatusDisplayName:(id)arg1 statusImageFilePath:(id)arg2;
- (void)addSubtracker:(id)arg1;
- (void)_updateIsFinished;
- (void)cancel;
- (void)cancelWithReason:(int)arg1;
@property(readonly) BOOL statusChanged;
- (id)init;

// Remaining properties
@property(readonly) NSMutableArray *mutableSubtrackers; // @dynamic mutableSubtrackers;
@property(readonly) NSArray *subtrackers; // @dynamic subtrackers;

@end

