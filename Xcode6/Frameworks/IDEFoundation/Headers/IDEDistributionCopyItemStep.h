

#import <IDEFoundation/IDEDistributionProcessingStep.h>

@interface IDEDistributionCopyItemStep : IDEDistributionProcessingStep
{
}

+ (id)destinationPathForItem:(id)arg1 inDestinationRoot:(id)arg2;
+ (id)processingStepWithDistributionItem:(id)arg1;
- (_Bool)processWithContext:(id)arg1 andError:(id *)arg2;
- (id)name;
- (id)initWithExtension:(id)arg1 andDistributionItem:(id)arg2;

@end

