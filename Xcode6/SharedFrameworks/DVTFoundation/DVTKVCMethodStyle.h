

#import <Foundation/Foundation.h>

@class DVTDispatchLock, DVTRegularExpression, NSArray;

@interface DVTKVCMethodStyle : NSObject
{
    int mask;
    unsigned long long numSubexpressions;
    DVTRegularExpression *regex;
    DVTDispatchLock *regexLock;
    NSArray *patterns;
}

@property(readonly) NSArray *patterns; // @synthesize patterns;
@property(readonly) DVTDispatchLock *regexLock; // @synthesize regexLock;
@property(readonly) DVTRegularExpression *regex; // @synthesize regex;
@property(readonly) unsigned long long numSubexpressions; // @synthesize numSubexpressions;
@property(readonly) int mask; // @synthesize mask;
- (id)initWithMask:(int)arg1 numSubexpressions:(unsigned long long)arg2 regex:(id)arg3 patterns:(id)arg4;

@end

