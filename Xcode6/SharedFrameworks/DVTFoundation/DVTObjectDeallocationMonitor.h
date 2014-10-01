

#import <Foundation/Foundation.h>

@interface DVTObjectDeallocationMonitor : NSObject
{
}

+ (id)_referenceTreeDescriptionForObject:(id)arg1;
+ (BOOL)_getReferenceTreeDescriptionForObject:(id)arg1 monitorInfosForUncollectedObjects:(id)arg2 referenceTreeDescription:(id *)arg3 crashReportSignature:(id *)arg4;
+ (void)setLeakReportEnabled:(BOOL)arg1;
+ (BOOL)leakReportEnabled;
+ (void)logLeakedObjects;
+ (BOOL)isEnabled;

@end

