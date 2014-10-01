

#import <Foundation/Foundation.h>

@class DVTBuildVersion, DVTToolsVersion, DVTVersion, NSNumber;

@interface DVTToolsInfo : NSObject
{
    NSNumber *_isAppleInternal;
    DVTBuildVersion *_toolsBuildVersion;
}

+ (id)toolsInfo;
+ (void)initialize;
@property(readonly) BOOL hasUnlimitedPower;
@property(readonly) BOOL isRuntimeOSAppleInternal;
@property(readonly) DVTVersion *runtimeOSVersion;
@property(readonly) unsigned long long runtimeOSActualVersion;
@property(readonly) unsigned long long runtimeOSMajorVersion;
@property(readonly) DVTVersion *buildOSVersion;
@property(readonly) unsigned long long buildOSActualVersion;
@property(readonly) unsigned long long buildOSMajorVersion;
@property(readonly) DVTBuildVersion *toolsBuildVersion;
@property(readonly) DVTToolsVersion *toolsVersion;
@property(readonly) BOOL isAppleInternal;

@end

