

#import <Foundation/Foundation.h>

@class NSString;

@interface IDEBuildOperationStatus : NSObject
{
    NSString *_stateDescription;
    NSString *_fileProgressString;
}

@property(copy) NSString *fileProgressString; // @synthesize fileProgressString=_fileProgressString;
@property(copy) NSString *stateDescription; // @synthesize stateDescription=_stateDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStateDescription:(id)arg1;

@end

