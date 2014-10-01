

#import <Foundation/Foundation.h>

@class NSArray;

@interface IDETestingSpecification : NSObject
{
    BOOL _adhoc;
    NSArray *_testingSpecifiers;
}

@property(readonly) BOOL adhoc; // @synthesize adhoc=_adhoc;
@property(readonly, copy) NSArray *testingSpecifiers; // @synthesize testingSpecifiers=_testingSpecifiers;
- (id)initWithTestingSpecifiers:(id)arg1 isAdhoc:(BOOL)arg2;

@end

