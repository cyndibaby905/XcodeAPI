

#import <Foundation/Foundation.h>

@interface IDEDistributionMethodManager : NSObject
{
}

+ (id)defaultDistributionMethodManager;
- (id)orderedDistributionMethodsForTask:(int)arg1 archive:(id)arg2;
- (id)_orderedDistributionMethods;

@end

