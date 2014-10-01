

#import <Foundation/Foundation.h>

@class IDESchemeActionDeviceRecord, IDESchemeActionSDKRecord, NSString;

@interface IDESchemeActionRunDestinationRecord : NSObject
{
    NSString *_displayName;
    NSString *_targetArchitecture;
    IDESchemeActionDeviceRecord *_targetDeviceRecord;
    IDESchemeActionDeviceRecord *_localComputerRecord;
    IDESchemeActionSDKRecord *_targetSDKRecord;
}

+ (id)recordForRunDestination:(id)arg1;
@property(readonly, nonatomic) IDESchemeActionSDKRecord *targetSDKRecord; // @synthesize targetSDKRecord=_targetSDKRecord;
@property(readonly, nonatomic) IDESchemeActionDeviceRecord *localComputerRecord; // @synthesize localComputerRecord=_localComputerRecord;
@property(readonly, nonatomic) IDESchemeActionDeviceRecord *targetDeviceRecord; // @synthesize targetDeviceRecord=_targetDeviceRecord;
@property(readonly, copy) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDisplayName:(id)arg1 targetArchitecture:(id)arg2 targetDevice:(id)arg3 targetSDK:(id)arg4 localComputer:(id)arg5;

@end

