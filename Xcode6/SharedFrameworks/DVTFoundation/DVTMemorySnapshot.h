

#import <Foundation/Foundation.h>

@class DVTDispatchLock, DVTLogAspect, NSCountedSet;

@interface DVTMemorySnapshot : NSObject
{
    DVTLogAspect *_aspect;
    NSCountedSet *_incrementsForSnapshotTypes;
    DVTDispatchLock *_incrementLock;
}

+ (id)_baseOutputFolder;
+ (id)snapshotForLogAspect:(id)arg1;
+ (void)initialize;
- (void)takeVmmapSnapshotWithLogLevel:(int)arg1 logFormat:(id)arg2;
- (void)_takeVmmapSnapshotWithLogLevel:(int)arg1 toFilePath:(id)arg2 logString:(id)arg3;
- (unsigned long long)_newIncrementForSnapshotType:(id)arg1;
- (id)initWithAspect:(id)arg1;

@end

