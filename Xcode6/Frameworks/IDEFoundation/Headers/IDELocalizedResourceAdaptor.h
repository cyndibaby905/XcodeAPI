

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEContainer, IDENotifyingLocalizedGroup;

@protocol IDELocalizedContainer;

@interface IDELocalizedResourceAdaptor : NSObject <DVTInvalidation>
{
    IDENotifyingLocalizedGroup *_localizedGroup;
    IDEContainer<IDELocalizedContainer> *_container;
}

+ (id)writeWorkForContext:(id)arg1 langauge:(id)arg2;
+ (id)readWorkForContext:(id)arg1;
+ (id)populatedAdaptorsForContext:(id)arg1;
+ (id)adaptedResourcesForLocalizedContainer:(id)arg1 plugInManager:(id)arg2;
+ (id)adaptedResourcesForLocalizedContainer:(id)arg1;
+ (void)initialize;
@property(readonly) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(readonly) IDENotifyingLocalizedGroup *localizedGroup; // @synthesize localizedGroup=_localizedGroup;
- (void)setCommentsByKey:(id)arg1;
- (id)commentsByKey;
- (void)setStringsByKey:(id)arg1 forLanguage:(id)arg2;
- (id)stringsByKeyForLanguage:(id)arg1;
- (id)localizedGroupIdentifier;
- (id)initWithContainer:(id)arg1 localizedGroup:(id)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

