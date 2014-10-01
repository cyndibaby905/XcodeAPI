

#import <Foundation/Foundation.h>

@interface DVTDeviceSupportFiles : NSObject
{
}

+ (id)exactSymbolsDirectoryForVersion:(id)arg1 andBuild:(id)arg2;
+ (id)idealSymbolsDirectoryForVersion:(id)arg1 andBuild:(id)arg2;
+ (id)_exactDeveloperDiskImageForVersion:(id)arg1 andBuild:(id)arg2;
+ (id)_inexactDeveloperDiskImageForVersion:(id)arg1 andBuild:(id)arg2;
+ (id)idealDeveloperDiskImageForVersion:(id)arg1 andBuild:(id)arg2 allowFallback:(_Bool)arg3;

@end

