

#import <Foundation/Foundation.h>

@class DVTLogAspect, NSDate, NSNumber, NSString, SFCertificateData;

@interface DVTSigningCertificate : NSObject
{
    NSNumber *_isTrusted;
    SFCertificateData *_certificateData;
    DVTLogAspect *_logAspect;
    NSString *_certificateKind;
    NSString *_trimmedName;
    NSString *_commonName;
    NSString *_portalTeamID;
    NSString *_portalTeamName;
    NSString *_portalMemberID;
    NSDate *_issueDate;
    NSDate *_expirationDate;
    NSString *_sha1Hash;
    NSString *_serialNumber;
    id _underlyingType;
}

+ (id)keychainSearchList;
@property(readonly) id underlyingType; // @synthesize underlyingType=_underlyingType;
@property(readonly) NSString *portalTeamName; // @synthesize portalTeamName=_portalTeamName;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
- (id)_valueInSubjectNameSectionFromCertificate:(struct OpaqueSecCertificateRef *)arg1 forOID:(id)arg2;
- (id)_dateFromCertificate:(struct OpaqueSecCertificateRef *)arg1 forOID:(id)arg2;
- (id)certificateData;
- (id)defaultDesignatedRequirementsForIdentifier:(id)arg1;
@property(readonly) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly) NSString *sha1Hash; // @synthesize sha1Hash=_sha1Hash;
@property(readonly, getter=isForServer) BOOL forServer;
@property(readonly, getter=isTrusted) BOOL trusted;
@property(readonly, getter=isExpired) BOOL expired;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly) NSDate *issueDate; // @synthesize issueDate=_issueDate;
@property(readonly, getter=isIdentity) BOOL identity;
@property(readonly) NSString *portalMemberID; // @synthesize portalMemberID=_portalMemberID;
- (id)portalTeamName:(struct OpaqueSecCertificateRef *)arg1;
@property(readonly) NSString *portalTeamID; // @synthesize portalTeamID=_portalTeamID;
- (BOOL)isFromPortal;
@property(readonly) NSString *commonName; // @synthesize commonName=_commonName;
@property(readonly) NSString *trimmedName; // @synthesize trimmedName=_trimmedName;
@property(readonly) NSString *certificateKind; // @synthesize certificateKind=_certificateKind;
- (long long)compare:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (struct OpaqueSecCertificateRef *)certificateRef;
- (NSString *)description;
- (id)initWithUnderlyingType:(id)arg1 logAspect:(id)arg2;

@end

