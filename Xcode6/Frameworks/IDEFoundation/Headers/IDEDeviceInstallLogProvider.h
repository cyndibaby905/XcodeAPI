

#import <IDEFoundation/IDELogProvider.h>

@interface IDEDeviceInstallLogProvider : IDELogProvider
{
}

+ (id)keyPathsForValuesAffectingLogRecords;
- (id)ideModelObjectTypeIdentifier;
- (id)logRecords;

@end

