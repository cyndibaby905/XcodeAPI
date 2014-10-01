

#import <DVTFoundation/DVTDiffDataSource.h>

@class NSArray;

@interface DVTDiffWordDataSource : DVTDiffDataSource
{
    NSArray *_tokenStorage;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didChange;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (struct _DVTDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)_tokenStorageForDescriptor:(id)arg1;

@end

