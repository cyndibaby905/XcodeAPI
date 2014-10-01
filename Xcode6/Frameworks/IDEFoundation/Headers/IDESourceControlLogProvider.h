

#import <IDEFoundation/IDELogProvider.h>

@interface IDESourceControlLogProvider : IDELogProvider
{
}

+ (id)keyPathsForValuesAffectingLogRecords;
- (id)ideModelObjectTypeIdentifier;
- (id)logRecords;

@end

