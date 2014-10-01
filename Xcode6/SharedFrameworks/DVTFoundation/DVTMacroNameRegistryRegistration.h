

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTRegistrable-Protocol.h>

@class DVTVersion, NSArray, NSString;

@interface DVTMacroNameRegistryRegistration : NSObject <DVTRegistrable>
{
    BOOL _listType;
    NSString *_macroName;
}

@property(readonly, getter=isListType) BOOL listType; // @synthesize listType=_listType;
@property(readonly, copy) NSString *macroName; // @synthesize macroName=_macroName;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *identifier;
- (id)initWithMacroName:(id)arg1 isListType:(BOOL)arg2;

// Remaining properties
@property(readonly) NSArray *aliases;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSString *displayDescription;
@property(readonly) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) DVTVersion *version;

@end
