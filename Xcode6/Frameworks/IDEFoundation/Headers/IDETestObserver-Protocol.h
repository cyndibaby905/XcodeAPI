

#import <IDEFoundation/IDEWorkspaceReferencedTestablesObserver-Protocol.h>
#import <Foundation/Foundation.h>

@class NSSet;

@protocol IDETestObserver <NSObject, IDEWorkspaceReferencedTestablesObserver>
- (void)testsChanged:(NSSet *)arg1;
@end

