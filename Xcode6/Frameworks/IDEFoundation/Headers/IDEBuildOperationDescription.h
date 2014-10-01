

#import <Foundation/Foundation.h>

@class NSString;

@interface IDEBuildOperationDescription : NSObject
{
    NSString *_objectToBuildName;
    NSString *_actionName;
    NSString *_actionInProgress;
}

+ (id)buildOperationDescriptionForSchemeCommand:(id)arg1 buildPurpose:(int)arg2 buildCommand:(int)arg3 objectToBuildName:(id)arg4;
+ (id)buildOperationDescriptionForSchemeCommand:(id)arg1 buildPurpose:(int)arg2 buildCommand:(int)arg3 blueprintName:(id)arg4;
+ (id)buildOperationDescriptionForSchemeCommand:(id)arg1 buildPurpose:(int)arg2 buildCommand:(int)arg3 fileName:(id)arg4;
+ (id)buildOperationDescriptionForSchemeCommand:(id)arg1 buildPurpose:(int)arg2 buildCommand:(int)arg3 schemeName:(id)arg4;
@property(readonly, copy) NSString *actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(readonly, copy) NSString *actionName; // @synthesize actionName=_actionName;
@property(readonly, copy) NSString *objectToBuildName; // @synthesize objectToBuildName=_objectToBuildName;
- (id)initWithObjectToBuildName:(id)arg1 actionName:(id)arg2 actionInProgress:(id)arg3;

@end

