

#import <Foundation/Foundation.h>

@class NSError, NSString;

@interface IDEXcodeServer : NSObject
{
    NSString *_name;
    NSString *_netServiceDomain;
    NSString *_netServiceType;
    NSString *_netServiceName;
    NSString *_GUID;
    NSString *_userName;
    BOOL _enabled;
    BOOL _attemptGuestAuthentication;
    unsigned long long _portNumber;
    NSString *_connectionAddress;
    NSString *_password;
    unsigned long long _reachability;
    NSError *_connectionError;
    NSString *_connectionErrorFullDescription;
    NSString *_serverCompatibilityErrorText;
}

+ (id)xcodeServerWithPropertyListRepresentation:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serverCompatibilityErrorText; // @synthesize serverCompatibilityErrorText=_serverCompatibilityErrorText;
@property(readonly, copy, nonatomic) NSString *connectionErrorFullDescription; // @synthesize connectionErrorFullDescription=_connectionErrorFullDescription;
@property(readonly, nonatomic) NSError *connectionError; // @synthesize connectionError=_connectionError;
@property(readonly, nonatomic) unsigned long long reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(readonly, copy, nonatomic) NSString *connectionAddress; // @synthesize connectionAddress=_connectionAddress;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithPropertyListRepresentation:(id)arg1;

@end

