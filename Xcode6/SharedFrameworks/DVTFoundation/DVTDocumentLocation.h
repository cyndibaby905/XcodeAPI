

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTSimpleSerialization-Protocol.h>
#import <DVTFoundation/DVTStringRepresentationPersistable-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface DVTDocumentLocation : NSObject <NSSecureCoding, NSCopying, DVTStringRepresentationPersistable, DVTSimpleSerialization>
{
    NSDictionary *_docParams;
    NSDictionary *_locParams;
    NSURL *_documentURL;
    NSNumber *_timestamp;
}

+ (BOOL)supportsSecureCoding;
+ (id)documentLocationWithURLScheme:(id)arg1 path:(id)arg2 documentParameters:(id)arg3 locationParameters:(id)arg4;
@property(readonly) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (id)locationParameters;
- (id)documentParameters;
- (id)documentPath;
- (id)documentScheme;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dvt_persistableStringRepresentation;
- (id)dvt_initFromPersistableStringRepresentation:(id)arg1 error:(id *)arg2;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (BOOL)isEqualToDocumentLocationDisregardingDocumentURL:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)other;
- (id)copyWithURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)documentURLString;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

