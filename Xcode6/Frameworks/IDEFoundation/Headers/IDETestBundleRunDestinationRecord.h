

#import <Foundation/Foundation.h>

@class IDETestBundleDeviceRecord, NSString;

@interface IDETestBundleRunDestinationRecord : NSObject
{
    NSString *_targetArchitecture;
    IDETestBundleDeviceRecord *_targetDevice;
    IDETestBundleDeviceRecord *_localComputer;
}

@property(retain) IDETestBundleDeviceRecord *localComputer; // @synthesize localComputer=_localComputer;
@property(retain) IDETestBundleDeviceRecord *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (NSString *)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRunDestinationRecord:(id)arg1;
- (id)initWithTargetArchitecture:(id)arg1 targetDeviceRecord:(id)arg2 localComputerRecord:(id)arg3;

@end

