

#import <Foundation/Foundation.h>

@interface DVTSemaphore : NSObject
{
    dispatch_semaphore_t _semaphore;
}

+ (instancetype)semaphoreWithCount:(long long)count;
- (BOOL)waitWithTimeout:(NSTimeInterval)timeout;
- (void)wait;
- (BOOL)signal;
- (void)dealloc;
- (instancetype)initWithCount:(long long)count;
- (instancetype)init;

@end

