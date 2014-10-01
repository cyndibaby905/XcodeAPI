

#import <Foundation/Foundation.h>

@class NSString;

@interface IDESchemeActionPlatformRecord : NSObject
{
    NSString *_userDescription;
    NSString *_identifier;
}

@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *userDescription; // @synthesize userDescription=_userDescription;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithUserDescription:(id)arg1 identifier:(id)arg2;

@end

