

#import <IDEFoundation/IDEDistributionCreatePackageStep.h>

@class NSString;

@interface IDEDistributionCreatePKGStep : IDEDistributionCreatePackageStep
{
    NSString *name;
}

+ (id)processingStep;
@property(copy) NSString *name; // @synthesize name;
- (_Bool)createPackageWithContext:(id)arg1 andError:(id *)arg2;

@end

