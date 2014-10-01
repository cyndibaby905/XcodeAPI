

#import <CoreData/CoreData.h>

@class DVTTeamRecord, NSData, NSDate, NSSet, NSString;

@interface DVTCertificateRecord : NSManagedObject
{
    NSString *_kind;
    struct OpaqueSecCertificateRef *_certificateRef;
    NSString *_name;
}

@property(readonly, nonatomic) unsigned long long type;
- (id)kind;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct OpaqueSecCertificateRef *certificateRef; // @synthesize certificateRef=_certificateRef;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSData *certContent; // @dynamic certContent;
@property(retain, nonatomic) NSString *certificateId; // @dynamic certificateId;
@property(retain, nonatomic) NSString *certificatePlatform; // @dynamic certificatePlatform;
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSSet *provisioningProfiles; // @dynamic provisioningProfiles;
@property(retain, nonatomic) NSString *serialNumber; // @dynamic serialNumber;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;

@end

