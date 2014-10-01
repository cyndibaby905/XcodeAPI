

#import <DVTFoundation/DVTDiffDataSource.h>

@interface DVTDiffCharacterDataSource : DVTDiffDataSource
{
}

+ (void)initialize;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (struct _DVTDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;

@end

