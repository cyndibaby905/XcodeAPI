

#import <IDEFoundation/IDELogProvider.h>

@interface IDEUnitTestLogProvider : IDELogProvider
{
}

+ (id)keyPathsForValuesAffectingLogRecords;
- (id)domainIdentifier;
- (id)ideModelObjectTypeIdentifier;
- (id)logRecords;
- (id)initWithDomainItem:(id)arg1;

@end

