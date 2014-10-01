

#import <Foundation/Foundation.h>

@class DVTDotSeparatedVersion, NSArray, NSDictionary, NSPredicate, NSSet, NSString, NSURL;

@interface DVTDownloadable : NSObject <NSCoding, NSCopying>
{
    NSString *_identifier;
    DVTDotSeparatedVersion *_version;
    NSURL *_source;
    unsigned long long _fileSize;
    NSString *_name;
    NSDictionary *_userInfo;
    NSSet *_dependencies;
}

@property(readonly) NSSet *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly) NSURL *source; // @synthesize source=_source;
@property(readonly) DVTDotSeparatedVersion *version; // @synthesize version=_version;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *category;
@property(readonly) NSDictionary *installedIfAllReceiptsArePresentOrNewer;
@property(readonly) NSDictionary *installedIfAllSHA1SumsMatch;
@property(readonly) NSArray *installedIfAllPathsArePresent;
@property(readonly) NSPredicate *activationPredicate;
@property(readonly) BOOL requiresADCAuthentication;
- (id)sortKey;
@property(readonly) NSString *installPrefix;
@property(readonly, getter=isUserVisible) _Bool userVisible;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (NSString *)description;
- (long long)compare:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2 source:(id)arg3 fileSize:(unsigned long long)arg4 name:(id)arg5 dependencies:(id)arg6 userInfo:(id)arg7;

@end

