

#import <Foundation/Foundation.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface IDEAlertEvent : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSString *_titleSortKey;
    NSString *_group;
    NSString *_groupSortKey;
    NSString *_iconName;
    NSMutableDictionary *_alerts;
    NSMutableDictionary *_observationTokensByAlert;
    BOOL _showInPreferences;
}

+ (id)alertEventsForGroup:(id)arg1;
+ (id)alertEventGroups;
+ (id)alertEvents;
+ (id)alertEventForIdentifier:(id)arg1;
+ (void)_cacheAlertEvents;
+ (void)_registerAlertEventExtension:(id)arg1;
@property BOOL showInPreferences; // @synthesize showInPreferences=_showInPreferences;
@property(retain) NSString *iconName; // @synthesize iconName=_iconName;
@property(readonly) NSDictionary *alerts; // @synthesize alerts=_alerts;
@property(retain, nonatomic) NSString *groupSortKey; // @synthesize groupSortKey=_groupSortKey;
@property(retain) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSString *titleSortKey; // @synthesize titleSortKey=_titleSortKey;
@property(retain) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void)ide_setIdentifier:(id)arg1;
- (void)saveToUserDefaults;
- (id)propertyList;
- (id)propertyListForVersion:(int)arg1;
- (id)alertDefaults;
- (id)alertDefaultsKey;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)runInWorkspace:(id)arg1 context:(id)arg2;
- (void)runInWorkspace:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)ide_initializeAlertContext:(id)arg1 forWorkspace:(id)arg2;
- (BOOL)hasEnabledAlerts;
- (void)removeAlert:(id)arg1;
- (void)addAlert:(id)arg1;
- (NSString *)description;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 group:(id)arg3;
- (id)init;
- (void)ide_initializeAlertsFromDefaults:(id)arg1;

@end

