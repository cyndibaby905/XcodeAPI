

#import <Foundation/Foundation.h>

@class NSArray, NSMutableArray, NSString;

@interface IDEBuildPlan : NSObject
{
    NSString *_debugName;
    NSMutableArray *_bucketList;
    BOOL _isImmutable;
}

@property(readonly) NSString *debugName; // @synthesize debugName=_debugName;
- (NSString *)description;
- (void)makeImmutable;
- (BOOL)isImmutable;
- (void)addBucket:(id)arg1;
@property(readonly) NSArray *bucketList;
- (id)initWithDebugName:(id)arg1;

@end

