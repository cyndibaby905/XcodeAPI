

#import <Foundation/Foundation.h>

@class NSString;

@interface IDEExecutionActionType : NSObject
{
    NSString *_identifier;
}

+ (id)actionTypeWithIdentifier:(id)arg1 error:(id *)arg2;
+ (BOOL)point:(id)arg1 isSubpointOfPoint:(id)arg2;
+ (id)actionTypePoint;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;

@end

