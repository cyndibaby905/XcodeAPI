

#import <IDEFoundation/IDEActivityLogSectionRecorder.h>

@interface IDEActivityLogUnitTestSectionRecorder : IDEActivityLogSectionRecorder
{
    BOOL _canFinish;
}

@property BOOL canFinish; // @synthesize canFinish=_canFinish;
- (id)section;

@end

