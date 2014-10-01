

#import <Foundation/Foundation.h>

@class DVTExtension, IDEDistributionItem, NSArray, NSString;

@interface IDEDistributionProcessingStep : NSObject
{
    DVTExtension *_extension;
    _Bool _supportsDryRun;
    IDEDistributionItem *_distributionItem;
    NSArray *_inputs;
    NSArray *_outputs;
}

+ (id)processingStepWithExtension:(id)arg1;
+ (id)processingStepWithExtension:(id)arg1 andDistributionItem:(id)arg2;
@property(copy) NSArray *outputs; // @synthesize outputs=_outputs;
@property(copy) NSArray *inputs; // @synthesize inputs=_inputs;
@property(readonly) _Bool supportsDryRun; // @synthesize supportsDryRun=_supportsDryRun;
@property(readonly) IDEDistributionItem *distributionItem; // @synthesize distributionItem=_distributionItem;
@property(readonly, copy) NSString *name;
- (_Bool)isAllowedOutput:(id)arg1;
- (_Bool)isRequiredInput:(id)arg1;
- (id)requiredInputs;
- (_Bool)isAllowedInput:(id)arg1;
- (_Bool)processWithContext:(id)arg1 andError:(id *)arg2;
- (id)initWithExtension:(id)arg1 andDistributionItem:(id)arg2;

@end

