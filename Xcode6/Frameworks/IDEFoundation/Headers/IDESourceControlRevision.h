

#import <Foundation/Foundation.h>

@class NSDate, NSString;

@interface IDESourceControlRevision : NSObject
{
    NSString *_revision;
    NSString *_author;
    NSDate *_date;
    NSString *_message;
    BOOL _isHEAD;
    BOOL _isBASE;
    BOOL _isCurrent;
}

+ (id)inMemoryRevision;
+ (id)localRevision;
+ (id)keyPathsForValuesAffectingLongRevisionString;
@property BOOL isCurrent; // @synthesize isCurrent=_isCurrent;
@property BOOL isBASE; // @synthesize isBASE=_isBASE;
@property BOOL isHEAD; // @synthesize isHEAD=_isHEAD;
@property(readonly) NSString *message; // @synthesize message=_message;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSString *author; // @synthesize author=_author;
@property(readonly) NSString *revision; // @synthesize revision=_revision;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
@property(readonly) NSString *longRevisionString;
- (id)ideModelObjectTypeIdentifier;
- (NSString *)description;
- (id)initWithRevision:(id)arg1 author:(id)arg2 date:(id)arg3 message:(id)arg4;

@end

