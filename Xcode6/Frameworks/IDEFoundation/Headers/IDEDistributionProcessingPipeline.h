

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEDistributionProcessingPipelineContext-Protocol.h>

@class DVTFilePath, DVTLogAspect, IDEDistributionProcessingStep, NSArray, NSMutableDictionary, NSString;

@interface IDEDistributionProcessingPipeline : NSObject <IDEDistributionProcessingPipelineContext>
{
    NSMutableDictionary *_contextData;
    DVTLogAspect *_logAspect;
    NSArray *_pipelineSteps;
    IDEDistributionProcessingStep *_currentStep;
}

+ (id)pipelineWithPipelineSteps:(id)arg1 initialContextData:(id)arg2 andLogAspect:(id)arg3;
+ (id)pipelineWithArchive:(id)arg1 archivedInAppContent:(id)arg2 distributionMethod:(id)arg3 andLogAspect:(id)arg4;
+ (id)pipelineWithArchive:(id)arg1 distributionItems:(id)arg2 distributionMethod:(id)arg3 provisioningSnapshot:(id)arg4 entitlementsMap:(id)arg5 wantsSymbols:(_Bool)arg6 dryRun:(_Bool)arg7 andLogAspect:(id)arg8;
+ (id)pipelineWithArchive:(id)arg1 distributionItems:(id)arg2 distributionMethod:(id)arg3 provisioningSnapshot:(id)arg4 entitlementsMap:(id)arg5 andLogAspect:(id)arg6;
@property(retain) IDEDistributionProcessingStep *currentStep; // @synthesize currentStep=_currentStep;
@property(readonly, copy) NSArray *pipelineSteps; // @synthesize pipelineSteps=_pipelineSteps;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(copy, nonatomic) NSMutableDictionary *contextData;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDictionaryForKey:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)resultsForDistributionItem:(id)arg1;
@property(readonly) DVTFilePath *finalDestinationRootPath;
@property(readonly) DVTFilePath *finalPackagePath;
- (_Bool)process:(id *)arg1;
- (id)initWithPipelineSteps:(id)arg1 initialContextData:(id)arg2 andLogAspect:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

