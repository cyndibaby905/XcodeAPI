

#import <Foundation/Foundation.h>

@class DVTSDK, NSString, NSURL;

@interface IDERunDestinationSelectable : NSObject
{
    BOOL _targetDeviceIsConcrete;
    BOOL _targetDeviceIsWireless;
    BOOL _isEligible;
    BOOL _isResizable;
    NSURL *_targetDeviceLocation;
    NSString *_targetDeviceModelCode;
    NSString *_targetDeviceFamily;
    DVTSDK *_targetSDK;
    NSString *_targetArchitecture;
}

@property(readonly, nonatomic) BOOL isResizable; // @synthesize isResizable=_isResizable;
@property(readonly, nonatomic) BOOL isEligible; // @synthesize isEligible=_isEligible;
@property(readonly, nonatomic) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(readonly, nonatomic) DVTSDK *targetSDK; // @synthesize targetSDK=_targetSDK;
@property(readonly, nonatomic) BOOL targetDeviceIsWireless; // @synthesize targetDeviceIsWireless=_targetDeviceIsWireless;
@property(readonly, nonatomic) BOOL targetDeviceIsConcrete; // @synthesize targetDeviceIsConcrete=_targetDeviceIsConcrete;
@property(readonly, nonatomic) NSString *targetDeviceFamily; // @synthesize targetDeviceFamily=_targetDeviceFamily;
@property(readonly, nonatomic) NSString *targetDeviceModelCode; // @synthesize targetDeviceModelCode=_targetDeviceModelCode;
@property(readonly, nonatomic) NSURL *targetDeviceLocation; // @synthesize targetDeviceLocation=_targetDeviceLocation;
- (NSString *)description;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (id)plistRepresentation;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)initWithRunDestination:(id)arg1;
- (id)initWithTargetDeviceLocation:(id)arg1 targetDeviceFamily:(id)arg2 targetDeviceModelCode:(id)arg3 targetDeviceIsConcrete:(BOOL)arg4 targetDeviceIsWireless:(BOOL)arg5 targetSDK:(id)arg6 targetArchitecture:(id)arg7 isEligible:(BOOL)arg8 isResizable:(BOOL)arg9;

@end

