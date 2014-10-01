

#import <IDEFoundation/IDELogProvider.h>

@interface IDEBuildLogProvider : IDELogProvider
{
}

+ (id)keyPathsForValuesAffectingLogRecords;
- (id)ideModelObjectTypeIdentifier;
- (id)logRecords;

@end

