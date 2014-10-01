

#import <Foundation/Foundation.h>

@class NSMutableArray;

@interface DVTStackBacktrace : NSObject
{
    unsigned long long *_returnAddresses;
    unsigned long long _returnAddressesCount;
    NSMutableArray *_symbolicatedArrayRepresentation;
}

+ (unsigned long long *)_callStackReturnAddressesExcludingTopFrames:(unsigned long long)arg1 returningCount:(unsigned long long *)arg2;
+ (unsigned long long *)_callStackReturnAddressesFromNumbers:(id)arg1 excludingTopFrames:(unsigned long long)arg2 returningCount:(unsigned long long *)arg3;
+ (id)currentStackBacktrace;
+ (id)stackBacktraceWithCallStackReturnAddresses:(id)arg1;
- (id)callStackReturnAddresses;
- (id)_frameForAddress:(unsigned long long)arg1 symbolicatorPtr:(struct _CSTypeRef *)arg2 symbolPtr:(struct _CSTypeRef *)arg3;
- (id)symbolicatedStackBacktraceFrames;
- (id)stringRepresentation;
- (void)dealloc;
- (id)initWithCallStackReturnAddresses:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)init;

@end

