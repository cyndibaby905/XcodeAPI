

#import <Foundation/Foundation.h>

@class NSError;

@interface IDEDistributionIssue : NSObject
{
    int _severity;
    NSError *_error;
}

+ (id)issuesFromErrors:(id)arg1 withSeverity:(int)arg2;
+ (id)issuesFromITunesResponse:(id)arg1;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) int severity; // @synthesize severity=_severity;
- (NSString *)description;
- (id)initWithSeverity:(int)arg1 error:(id)arg2;

@end

