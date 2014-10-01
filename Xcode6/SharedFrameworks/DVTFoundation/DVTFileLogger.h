

#import <DVTFoundation/DVTLogger.h>

@class NSFileHandle, NSURL;

@interface DVTFileLogger : DVTLogger
{
    unsigned long long _indentLevel;
    NSURL *_fileURL;
    NSFileHandle *_fileHandle;
}

+ (void)initialize;
@property(readonly) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property unsigned long long indentLevel; // @synthesize indentLevel=_indentLevel;
- (void)decreaseIndentLevelForAspect:(id)arg1;
- (void)increaseIndentLevelForAspect:(id)arg1;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(int)arg3;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;

@end

