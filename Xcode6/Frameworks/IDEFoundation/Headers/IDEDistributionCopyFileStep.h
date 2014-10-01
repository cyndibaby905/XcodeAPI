

#import <IDEFoundation/IDEDistributionProcessingStep.h>

@class DVTFilePath, NSString;

@interface IDEDistributionCopyFileStep : IDEDistributionProcessingStep
{
    DVTFilePath *_sourcePath;
    NSString *_destinationPath;
}

+ (id)processingStepWithSourcePath:(id)arg1 distributionItem:(id)arg2 andRelativeDestinationPath:(id)arg3;
+ (id)processingStepWithSourcePath:(id)arg1 andRelativeDestinationPath:(id)arg2;
- (_Bool)processWithContext:(id)arg1 andError:(id *)arg2;
- (id)name;

@end

