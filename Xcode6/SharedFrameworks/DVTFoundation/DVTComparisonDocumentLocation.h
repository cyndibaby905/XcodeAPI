

#import <DVTFoundation/DVTDocumentLocation.h>

@interface DVTComparisonDocumentLocation : DVTDocumentLocation
{
    DVTDocumentLocation *_primaryDocumentLocation;
    DVTDocumentLocation *_secondaryDocumentLocation;
    DVTDocumentLocation *_ancestorDocumentLocation;
}

@property(readonly) DVTDocumentLocation *ancestorDocumentLocation; // @synthesize ancestorDocumentLocation=_ancestorDocumentLocation;
@property(copy) DVTDocumentLocation *secondaryDocumentLocation; // @synthesize secondaryDocumentLocation=_secondaryDocumentLocation;
@property(copy) DVTDocumentLocation *primaryDocumentLocation; // @synthesize primaryDocumentLocation=_primaryDocumentLocation;
- (long long)compare:(id)arg1;
- (NSString *)description;
- (BOOL)isEqualToDocumentLocationDisregardingDocumentURL:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (BOOL)isEqual:(id)other;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)timestamp;
- (id)documentURL;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2;
- (id)initWithPrimaryDocumentLocation:(id)arg1 secondaryDocumentLocation:(id)arg2 ancestorDocumentLocation:(id)arg3;

@end

