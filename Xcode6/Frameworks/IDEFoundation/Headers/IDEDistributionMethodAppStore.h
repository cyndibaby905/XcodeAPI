

#import <IDEFoundation/IDEDistributionMethod.h>

@interface IDEDistributionMethodAppStore : IDEDistributionMethod
{
}

- (BOOL)isAppStoreBound;
- (id)orderedDistributionStepClassNamesForTask:(int)arg1;
- (id)orderedDistributionStepClassNames;
- (id)exportStepName;
- (id)availableICloudEnvironmentsOverride;
- (id)taskNoun;
- (id)taskVerb;

@end

