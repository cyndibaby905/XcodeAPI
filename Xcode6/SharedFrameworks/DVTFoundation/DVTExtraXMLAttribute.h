

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTExtraXMLAttribute : NSObject
{
    NSString *_previousAttributeName;
    NSString *_name;
    NSString *_value;
}

@property(copy) NSString *previousAttributeName; // @synthesize previousAttributeName=_previousAttributeName;
@property(copy) NSString *value; // @synthesize value=_value;
@property(copy) NSString *name; // @synthesize name=_name;

@end

