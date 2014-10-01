

#import <DVTFoundation/DVTProcessInformation.h>

@class NSString;

@interface DVTLocalProcessInformation : DVTProcessInformation
{
    NSString *_realApplicationName;
    NSString *_requestedApplicationName;
    NSString *_firstApplicationArgument;
}

+ (id)_blacklistedProcesses;
+ (id)_currentProcessIDsAsNumbers;
+ (id)currentProcessInformations;
+ (id)_archNameForExecutableArchitecture:(int)arg1;
@property(copy, nonatomic) NSString *firstApplicationArgument; // @synthesize firstApplicationArgument=_firstApplicationArgument;
@property(copy, nonatomic) NSString *requestedApplicationName; // @synthesize requestedApplicationName=_requestedApplicationName;
@property(copy, nonatomic) NSString *realApplicationName; // @synthesize realApplicationName=_realApplicationName;
- (id)_procTableName;
- (BOOL)_isLaunchCFMApp;
- (id)_calculatePreferredArchitecture;
- (id)_calculateProcessURL;
- (id)_calculateDisplayName;
- (void)_initProcessInformation;
- (id)preferredArchitecture;
- (id)processURL;
- (id)displayName;

@end

