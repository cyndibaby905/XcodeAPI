

#import <Foundation/Foundation.h>

@class NSString;

@interface IDEAnalysisTool : NSObject
{
    int _type;
    NSString *_identifier;
    NSString *_displayName;
}

@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) int type; // @synthesize type=_type;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (NSString *)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (long long)displayNameCompare:(id)arg1;
- (id)initWithType:(int)arg1 identifer:(id)arg2 displayName:(id)arg3;

@end

