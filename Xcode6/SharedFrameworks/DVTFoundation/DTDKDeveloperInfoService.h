

#import <DVTFoundation/DTDKDeveloperPortalService.h>

@class NSDictionary, NSString;

@interface DTDKDeveloperInfoService : DTDKDeveloperPortalService
{
}

+ (id)keyPathsForValuesAffectingPersonID;
+ (id)keyPathsForValuesAffectingFamilyName;
+ (id)keyPathsForValuesAffectingGivenName;
+ (id)keyPathsForValuesAffectingLastName;
+ (id)keyPathsForValuesAffectingFirstName;
+ (id)keyPathsForValuesAffectingEmail;
+ (id)keyPathsForValuesAffectingDeveloperStatus;
+ (id)keyPathsForValuesAffectingDeveloperID;
+ (id)keyPathsForValuesAffectingDeveloper;
+ (id)service;
@property(readonly) NSString *personID;
@property(readonly) NSString *familyName;
@property(readonly) NSString *givenName;
@property(readonly) NSString *lastName;
@property(readonly) NSString *firstName;
@property(readonly) NSString *email;
@property(readonly) NSString *developerStatus;
@property(readonly) NSString *developerID;
@property(readonly) NSDictionary *developer;

@end

