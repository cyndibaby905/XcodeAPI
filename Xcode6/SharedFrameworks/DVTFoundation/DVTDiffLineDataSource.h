

#import <DVTFoundation/DVTDiffDataSource.h>

@class DVTDispatchLock;

@interface DVTDiffLineDataSource : DVTDiffDataSource
{
    DVTDispatchLock *_tokenStorageLock;
}

- (NSRange)tokenRangeForCharacterRange:(NSRange)arg1;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (void)getDiffTokens:(struct _DVTDiffToken *)arg1 inDiffDescriptor:(id)arg2 inRange:(NSRange)arg3;
- (struct _DVTDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContent:(id)arg1;

@end

