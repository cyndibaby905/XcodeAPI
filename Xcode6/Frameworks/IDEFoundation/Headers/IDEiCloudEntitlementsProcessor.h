

#import <IDEFoundation/IDEEntitlementsProcessor.h>

@class NSArray, NSString;

@interface IDEiCloudEntitlementsProcessor : IDEEntitlementsProcessor
{
}

- (BOOL)runWithError:(id *)arg1;
@property(retain, nonatomic) NSString *selectedEnvironment;
@property(readonly, nonatomic) NSArray *availableEnvironments;
- (BOOL)isApplicable;
- (BOOL)needsInteraction;

@end

