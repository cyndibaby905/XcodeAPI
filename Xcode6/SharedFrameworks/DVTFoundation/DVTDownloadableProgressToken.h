

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class NSArray, NSString;

@interface DVTDownloadableProgressToken : NSObject <DVTCancellable>
{
    NSArray *_subTokens;
}

+ (id)tokenWithSubTokens:(id)arg1;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

