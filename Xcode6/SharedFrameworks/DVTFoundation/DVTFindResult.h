

#import <Foundation/Foundation.h>

@class DVTDocumentLocation, DVTFindDescriptor, NSDictionary, NSString;

@interface DVTFindResult : NSObject <NSCopying, NSCoding>
{
    DVTDocumentLocation *_location;
    DVTFindDescriptor *_findDescriptor;
    NSString *_contextString;
    NSRange _contextRange;
    DVTDocumentLocation *_replacedLocation;
    int _replaceState;
    NSString *_replacedString;
    NSDictionary *_userInfo;
}

+ (NSRange)lineRangeForFoundRange:(NSRange)arg1 inString:(id)arg2;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) DVTDocumentLocation *replacedLocation; // @synthesize replacedLocation=_replacedLocation;
@property int replaceState; // @synthesize replaceState=_replaceState;
@property(copy, nonatomic) NSString *replacedString; // @synthesize replacedString=_replacedString;
@property(readonly) NSRange contextRange; // @synthesize contextRange=_contextRange;
@property(readonly) NSString *contextString; // @synthesize contextString=_contextString;
@property(readonly) DVTDocumentLocation *location; // @synthesize location=_location;
@property(readonly) DVTFindDescriptor *findDescriptor; // @synthesize findDescriptor=_findDescriptor;
- (id)copyWithContextString:(id)arg1 contextRange:(NSRange)arg2 userInfo:(id)arg3;
- (id)copyWithUpdatedLocation:(id)arg1;
- (id)stringForReplacementString:(id)arg1;
@property(readonly) NSString *foundString;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (NSString *)description;
- (id)initWithFoundLocation:(id)arg1 withRange:(NSRange)arg2 inContext:(id)arg3 foundUsingDescriptor:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

