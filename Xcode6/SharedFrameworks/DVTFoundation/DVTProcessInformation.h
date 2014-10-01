

#import <Foundation/Foundation.h>

@class NSString, NSURL;

@interface DVTProcessInformation : NSObject
{
    int _pid;
    NSString *_displayName;
    NSURL *_processURL;
    NSString *_preferredArchitecture;
}

@property(readonly) NSString *preferredArchitecture; // @synthesize preferredArchitecture=_preferredArchitecture;
@property(readonly) NSURL *processURL; // @synthesize processURL=_processURL;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) int pid; // @synthesize pid=_pid;
- (long long)displayNameCompare:(id)arg1;
- (void)setPreferredArchitecture:(id)arg1;
- (void)setProcessURL:(id)arg1;
- (void)setDisplayName:(id)arg1;
@property(readonly) BOOL isDebuggable;
- (id)initWithPID:(int)arg1;

@end

