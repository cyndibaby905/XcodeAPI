

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

@class NSString;

@interface IDESchemeActionDummyTestSummary : IDESchemeActionAbstractTestSummaryObject
{
    NSString *_sentinelGUID;
}

- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)status;
- (id)identifier;
- (id)init;

@end

