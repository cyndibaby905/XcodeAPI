

#import <IDEFoundation/IDEDistributionCreatePackageStep.h>

@class NSString;

@interface IDEDistributionCreateIPAStep : IDEDistributionCreatePackageStep
{
    NSString *name;
}

+ (id)processingStep;
@property(copy) NSString *name; // @synthesize name;
- (_Bool)createPackageWithContext:(id)arg1 andError:(id *)arg2;

@end

