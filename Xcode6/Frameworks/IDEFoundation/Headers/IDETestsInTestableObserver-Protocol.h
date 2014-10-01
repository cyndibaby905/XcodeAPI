

#import <IDEFoundation/IDETestObserver-Protocol.h>

@class NSSet;

@protocol IDETestsInTestableObserver <IDETestObserver>
- (void)testablesChanged:(NSSet *)arg1;
@end

