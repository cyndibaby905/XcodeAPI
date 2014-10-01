

#import <Foundation/Foundation.h>

@class NSFileHandle;

@interface DVTPipe : NSObject
{
    NSFileHandle *_fileHandleForReading;
    NSFileHandle *_fileHandleForWriting;
}

+ (id)pipeReturningError:(id *)arg1;
@property(readonly) NSFileHandle *fileHandleForWriting; // @synthesize fileHandleForWriting=_fileHandleForWriting;
@property(readonly) NSFileHandle *fileHandleForReading; // @synthesize fileHandleForReading=_fileHandleForReading;
- (void)closeBothFileHandles;
- (id)initWithReadHandle:(id)arg1 andWriteHandle:(id)arg2;

@end

