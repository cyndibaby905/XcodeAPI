

#import <IDEFoundation/IDELaunchSession.h>

@class NSString;

@interface IDESyntheticLaunchSession : IDELaunchSession
{
    NSString *_debuggingAdditionIdentifier;
}

@property(copy) NSString *debuggingAdditionIdentifier; // @synthesize debuggingAdditionIdentifier=_debuggingAdditionIdentifier;
- (void)_didStart;
- (BOOL)supportsDebugSession;

@end

