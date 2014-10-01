

#import <DVTFoundation/DVTDiffDataSource.h>

@class NSArray, NSString;

@interface _DVTDiffLineDataSourceConsistentCopy : DVTDiffDataSource
{
    NSArray *_tokenStorage;
    NSString *_arrangedContent;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)arrangedContent;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (void)getDiffTokens:(struct _DVTDiffToken *)arg1 inDiffDescriptor:(id)arg2 inRange:(NSRange)arg3;
- (struct _DVTDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)initWithContent:(id)arg1 arrangedContent:(id)arg2 tokenStorage:(id)arg3;

@end

