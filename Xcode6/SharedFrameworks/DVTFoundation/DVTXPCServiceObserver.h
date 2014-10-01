

#import <Foundation/Foundation.h>

@interface DVTXPCServiceObserver : NSObject
{
}

+ (id)serviceNamesAtPaths:(id)arg1;
+ (void)_gatherServiceInfo:(id)arg1 forBundles:(id)arg2;
+ (id)_serviceNameAtPath:(id)arg1;
+ (id)serviceNamesForType:(unsigned long long)arg1 executablePath:(id)arg2 frameworkSearchPaths:(id)arg3 allowedAppExtensionIdentifiers:(id)arg4;

@end

