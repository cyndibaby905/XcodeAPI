

#import <DVTFoundation/DVTOperationGroup.h>

@class DTDKDeveloperPortalService, DVTLogAspect, DVTPortalOperationToken, DVTStackBacktrace, NSArray, NSString;

@interface DVTPortalOperation : DVTOperationGroup
{
    _Bool _cancelOnDependencies;
    _Bool _cancelOnSuboperations;
    DVTPortalOperationToken *_token;
    DVTLogAspect *_logAspect;
    NSString *_name;
    DTDKDeveloperPortalService *_service;
    DVTStackBacktrace *_creationBacktrace;
}

+ (id)keyPathsForValuesAffectingResultCode;
+ (id)operationForService:(id)arg1;
+ (id)operationForService:(id)arg1 withToken:(id)arg2;
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
+ (id)operationWithName:(id)arg1;
+ (id)operationWithToken:(id)arg1;
+ (id)operationWithToken:(id)arg1 name:(id)arg2 andBlock:(CDUnknownBlockType)arg3;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property(retain) DTDKDeveloperPortalService *service; // @synthesize service=_service;
@property _Bool cancelOnSuboperations; // @synthesize cancelOnSuboperations=_cancelOnSuboperations;
@property _Bool cancelOnDependencies; // @synthesize cancelOnDependencies=_cancelOnDependencies;
@property(copy) NSString *name; // @synthesize name=_name;
- (long long)resultCode;
@property(readonly, copy) NSArray *responseWrappers;
@property(readonly, copy) NSArray *responseDictionaries;
@property(readonly, copy) NSArray *errors;
- (id)error;
@property(retain) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(retain) DVTPortalOperationToken *token; // @synthesize token=_token;
- (NSString *)description;
- (void)_updateCaches;
- (void)_success;
- (void)_failure:(id)arg1;
- (void)main;
- (void)start;
- (void)addSuboperations:(id)arg1 withQueue:(id)arg2;
- (double)_retryDelay;
- (unsigned long long)_maxRetryAttempts;
- (_Bool)_shouldRetryOnServiceError:(id)arg1;
- (id)init;

@end

